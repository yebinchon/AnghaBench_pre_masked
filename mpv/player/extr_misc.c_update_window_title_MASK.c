
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPContext {char* last_window_title; scalar_t__ ao; scalar_t__ video_out; TYPE_1__* opts; } ;
struct TYPE_2__ {int wintitle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,char*) ;
 char* FUNC_1 (struct MPContext*,int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (struct MPContext*,char*) ;
 int FUNC_5 (scalar_t__,int ,char*) ;

void FUNC_6(struct MPContext *VAR_2, bool VAR_3)
{
    if (!VAR_2->video_out && !VAR_2->ao) {
        FUNC_3(VAR_2->last_window_title);
        VAR_2->last_window_title = ((void*)0);
        return;
    }
    char *VAR_4 = FUNC_1(VAR_2, VAR_2->opts->wintitle);
    if (!VAR_2->last_window_title || VAR_3 ||
        FUNC_2(VAR_4, VAR_2->last_window_title) != 0)
    {
        FUNC_3(VAR_2->last_window_title);
        VAR_2->last_window_title = FUNC_4(VAR_2, VAR_4);

        if (VAR_2->video_out)
            FUNC_5(VAR_2->video_out, VAR_1, VAR_4);

        if (VAR_2->ao) {
            FUNC_0(VAR_2->ao, VAR_0, VAR_4);
        }
    } else {
        FUNC_3(VAR_4);
    }
}
