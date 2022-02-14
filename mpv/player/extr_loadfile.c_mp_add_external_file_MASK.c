
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct track {int is_external; int no_default; int no_auto_select; void* external_filename; void* title; } ;
struct sh_stream {int type; char* title; } ;
struct mp_cancel {int dummy; } ;
struct demuxer_params {int is_top_level; int force_format; } ;
struct demuxer {int cancel; int start_time; } ;
struct MPOpts {scalar_t__ rebase_start_time; int audio_demuxer_name; int sub_demuxer_name; } ;
struct MPContext {int num_tracks; int playback_abort; scalar_t__ stop_play; int global; struct MPOpts* opts; } ;
typedef enum stream_type { ____Placeholder_stream_type } stream_type ;


 int FUNC_0 (struct MPContext*,char*,char*,...) ;


 int VAR_0 ;
 struct track* FUNC_1 (struct MPContext*,struct demuxer*,struct sh_stream*) ;
 int FUNC_2 (struct demuxer*) ;
 int FUNC_3 (struct demuxer*) ;
 struct sh_stream* FUNC_4 (struct demuxer*,int) ;
 struct demuxer* FUNC_5 (char*,struct demuxer_params*,struct mp_cancel*,int ) ;
 int FUNC_6 (struct demuxer*,int ) ;
 int FUNC_7 (struct MPContext*,struct demuxer*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (struct mp_cancel*) ;
 int FUNC_11 (struct MPContext*) ;
 int FUNC_12 (struct MPContext*) ;
 char* FUNC_13 (int,char*,int ) ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (char*,char*,int) ;
 void* FUNC_16 (struct track*,char*) ;

int FUNC_17(struct MPContext *VAR_1, char *VAR_2,
                         enum stream_type VAR_3, struct mp_cancel *VAR_4)
{
    struct MPOpts *VAR_5 = VAR_1->opts;
    if (!VAR_2 || FUNC_10(VAR_4))
        return -1;

    char *VAR_6 = VAR_2;
    if (FUNC_15(VAR_6, "memory://", 9) == 0)
        VAR_6 = "memory://";

    struct demuxer_params VAR_7 = {
        .is_top_level = 1,
    };

    switch (VAR_3) {
    case 128:
        VAR_7.force_format = VAR_5->sub_demuxer_name;
        break;
    case 129:
        VAR_7.force_format = VAR_5->audio_demuxer_name;
        break;
    }

    FUNC_12(VAR_1);

    struct demuxer *VAR_8 =
        FUNC_5(VAR_2, &VAR_7, VAR_4, VAR_1->global);
    if (VAR_8)
        FUNC_7(VAR_1, VAR_8);

    FUNC_11(VAR_1);



    if (VAR_1->stop_play)
        goto err_out;

    if (!VAR_8)
        goto err_out;

    if (VAR_3 != 128 && VAR_5->rebase_start_time)
        FUNC_6(VAR_8, -VAR_8->start_time);

    bool VAR_9 = 0;
    for (int VAR_10 = 0; VAR_10 < FUNC_3(VAR_8); VAR_10++) {
        struct sh_stream *VAR_11 = FUNC_4(VAR_8, VAR_10);
        if (VAR_11->type == VAR_3 || VAR_3 == VAR_0) {
            VAR_9 = 1;
            break;
        }
    }

    if (!VAR_9) {
        char *VAR_12 = FUNC_13(20, "%s ", FUNC_14(VAR_3));
        if (VAR_3 == VAR_0)
            VAR_12 = "";
        FUNC_0(VAR_1, "No %sstreams in file %s.\n", VAR_12, VAR_6);
        goto err_out;
    }

    int VAR_13 = -1;
    for (int VAR_14 = 0; VAR_14 < FUNC_3(VAR_8); VAR_14++) {
        struct sh_stream *VAR_15 = FUNC_4(VAR_8, VAR_14);
        struct track *VAR_16 = FUNC_1(VAR_1, VAR_8, VAR_15);
        VAR_16->is_external = 1;
        if (VAR_15->title && VAR_15->title[0]) {
            VAR_16->title = FUNC_16(VAR_16, VAR_15->title);
        } else {
            VAR_16->title = FUNC_16(VAR_16, FUNC_8(VAR_6));
        }
        VAR_16->external_filename = FUNC_16(VAR_16, VAR_2);
        VAR_16->no_default = VAR_15->type != VAR_3;
        VAR_16->no_auto_select = VAR_16->no_default;
        if (VAR_13 < 0 && (VAR_3 == VAR_0 || VAR_15->type == VAR_3))
            VAR_13 = VAR_1->num_tracks - 1;
    }

    FUNC_9(VAR_8->cancel, VAR_1->playback_abort);

    return VAR_13;

err_out:
    FUNC_2(VAR_8);
    if (!FUNC_10(VAR_4))
        FUNC_0(VAR_1, "Can not open external file %s.\n", VAR_6);
    return -1;
}
