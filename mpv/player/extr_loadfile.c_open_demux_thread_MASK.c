
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_stream {int dummy; } ;
struct demuxer_params {int stream_record; int is_top_level; scalar_t__ demuxer_failed; int stream_flags; int force_format; } ;
struct demuxer {int fully_read; } ;
struct MPContext {int open_done; int open_res_error; int open_url; scalar_t__ open_for_prefetch; struct demuxer* open_res_demuxer; int global; int open_cancel; int open_url_flags; int open_format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct MPContext*,char*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct demuxer*) ;
 struct sh_stream* FUNC_3 (struct demuxer*,int) ;
 struct demuxer* FUNC_4 (int ,struct demuxer_params*,int ,int ) ;
 int FUNC_5 (struct demuxer*,int ,struct MPContext*) ;
 int FUNC_6 (struct demuxer*) ;
 int FUNC_7 (struct demuxer*) ;
 int FUNC_8 (struct demuxer*,struct sh_stream*,int ,int) ;
 int FUNC_9 (struct MPContext*) ;
 int FUNC_10 (char*) ;
 int VAR_3 ;

__attribute__((used)) static void *FUNC_11(void *VAR_4)
{
    struct MPContext *VAR_5 = VAR_4;

    FUNC_10("opener");

    struct demuxer_params VAR_6 = {
        .force_format = VAR_5->open_format,
        .stream_flags = VAR_5->open_url_flags,
        .stream_record = 1,
        .is_top_level = 1,
    };
    struct demuxer *VAR_7 =
        FUNC_4(VAR_5->open_url, &VAR_6, VAR_5->open_cancel, VAR_5->global);
    VAR_5->open_res_demuxer = VAR_7;

    if (VAR_7) {
        FUNC_0(VAR_5, "Opening done: %s\n", VAR_5->open_url);

        if (VAR_5->open_for_prefetch && !VAR_7->fully_read) {
            int VAR_8 = FUNC_2(VAR_7);
            for (int VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
                struct sh_stream *VAR_10 = FUNC_3(VAR_7, VAR_9);
                FUNC_8(VAR_7, VAR_10, VAR_2, 1);
            }

            FUNC_5(VAR_7, VAR_3, VAR_5);
            FUNC_7(VAR_7);
            FUNC_6(VAR_7);
        }
    } else {
        FUNC_0(VAR_5, "Opening failed or was aborted: %s\n", VAR_5->open_url);

        if (VAR_6.demuxer_failed) {
            VAR_5->open_res_error = VAR_1;
        } else {
            VAR_5->open_res_error = VAR_0;
        }
    }

    FUNC_1(&VAR_5->open_done, 1);
    FUNC_9(VAR_5);
    return ((void*)0);
}
