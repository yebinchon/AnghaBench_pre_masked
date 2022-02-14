
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tl_ctx {int num_sources; struct demuxer** sources; struct matroska_segment_uid* uids; int global; TYPE_1__* tl; } ;
struct mp_cancel {int dummy; } ;
struct matroska_segment_uid {scalar_t__ edition; int segment; } ;
struct TYPE_4__ {scalar_t__ edition; int segment; } ;
struct matroska_data {int num_ordered_chapters; struct matroska_chapter* ordered_chapters; TYPE_2__ uid; } ;
struct matroska_chapter {struct matroska_segment_uid uid; int has_segment_uid; } ;
struct demuxer_params {char* force_format; int matroska_num_wanted_uids; int matroska_wanted_segment; int* matroska_was_valid; int disable_timeline; struct matroska_segment_uid* matroska_wanted_uids; } ;
struct demuxer {int filename; struct matroska_data matroska_data; } ;
struct TYPE_3__ {struct mp_cancel* cancel; } ;


 int FUNC_0 (struct tl_ctx*,char*,int,int ) ;
 int FUNC_1 (int *,struct demuxer**,size_t,int *) ;
 int FUNC_2 (int *,struct matroska_segment_uid*,int) ;
 int FUNC_3 (struct demuxer*) ;
 struct demuxer* FUNC_4 (char*,struct demuxer_params*,struct mp_cancel*,int ) ;
 scalar_t__ FUNC_5 (struct tl_ctx*,struct matroska_segment_uid*) ;
 int FUNC_6 (int ,int ,int) ;
 scalar_t__ FUNC_7 (struct mp_cancel*) ;

__attribute__((used)) static bool FUNC_8(struct tl_ctx *VAR_0, char *VAR_1, int VAR_2)
{
    bool VAR_3 = 0;
    struct demuxer_params VAR_4 = {
        .force_format = "mkv",
        .matroska_num_wanted_uids = VAR_0->num_sources,
        .matroska_wanted_uids = VAR_0->uids,
        .matroska_wanted_segment = VAR_2,
        .matroska_was_valid = &VAR_3,
        .disable_timeline = 1,
    };
    struct mp_cancel *VAR_5 = VAR_0->tl->cancel;
    if (FUNC_7(VAR_5))
        return 0;

    struct demuxer *VAR_6 = FUNC_4(VAR_1, &VAR_4, VAR_5, VAR_0->global);
    if (!VAR_6)
        return 0;

    struct matroska_data *VAR_7 = &VAR_6->matroska_data;

    for (int VAR_8 = 1; VAR_8 < VAR_0->num_sources; VAR_8++) {
        struct matroska_segment_uid *VAR_9 = &VAR_0->uids[VAR_8];
        if (VAR_0->sources[VAR_8])
            continue;


        if (!FUNC_6(VAR_9->segment, VAR_7->uid.segment, 16) &&
            (!VAR_9->edition || VAR_9->edition == VAR_7->uid.edition))
        {
            FUNC_0(VAR_0, "Match for source %d: %s\n", VAR_8, VAR_6->filename);

            if (!VAR_9->edition) {
                VAR_7->uid.edition = 0;
            } else {
                for (int VAR_10 = 0; VAR_10 < VAR_7->num_ordered_chapters; VAR_10++) {
                    struct matroska_chapter *VAR_11 = VAR_7->ordered_chapters + VAR_10;

                    if (!VAR_11->has_segment_uid)
                        continue;

                    if (FUNC_5(VAR_0, &VAR_11->uid))
                        continue;


                    FUNC_2(((void*)0), VAR_0->uids, VAR_0->num_sources);
                    VAR_0->uids[VAR_0->num_sources] = VAR_11->uid;


                    FUNC_1(((void*)0), VAR_0->sources, VAR_0->num_sources, ((void*)0));
                }
            }

            VAR_0->sources[VAR_8] = VAR_6;
            return 1;
        }
    }

    FUNC_3(VAR_6);
    return VAR_3;
}
