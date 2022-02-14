
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPContext {int open_active; int open_url_flags; int open_for_prefetch; int open_thread; TYPE_1__* opts; void* open_format; void* open_url; scalar_t__ open_cancel; int open_done; int open_res_demuxer; } ;
struct TYPE_2__ {char* demuxer_name; scalar_t__ load_unsafe_playlists; scalar_t__ demuxer_thread; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct MPContext*) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int *,int *,int ,struct MPContext*) ;
 void* FUNC_5 (int *,char*) ;

__attribute__((used)) static void FUNC_6(struct MPContext *VAR_1, char *VAR_2, int VAR_3,
                       bool VAR_4)
{
    FUNC_2(VAR_1);

    FUNC_0(!VAR_1->open_active);
    FUNC_0(!VAR_1->open_cancel);
    FUNC_0(!VAR_1->open_res_demuxer);
    FUNC_0(!FUNC_1(&VAR_1->open_done));

    VAR_1->open_cancel = FUNC_3(((void*)0));
    VAR_1->open_url = FUNC_5(((void*)0), VAR_2);
    VAR_1->open_format = FUNC_5(((void*)0), VAR_1->opts->demuxer_name);
    VAR_1->open_url_flags = VAR_3;
    VAR_1->open_for_prefetch = VAR_4 && VAR_1->opts->demuxer_thread;
    if (VAR_1->opts->load_unsafe_playlists)
        VAR_1->open_url_flags = 0;

    if (FUNC_4(&VAR_1->open_thread, ((void*)0), VAR_0, VAR_1)) {
        FUNC_2(VAR_1);
        return;
    }

    VAR_1->open_active = 1;
}
