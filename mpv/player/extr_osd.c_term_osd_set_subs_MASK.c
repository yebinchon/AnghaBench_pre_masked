
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct MPContext {char* term_osd_subs; TYPE_2__* opts; scalar_t__ video_out; } ;
struct TYPE_4__ {TYPE_1__* subs_rend; } ;
struct TYPE_3__ {int sub_visibility; } ;


 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct MPContext*,char const*) ;
 int FUNC_3 (struct MPContext*) ;

void FUNC_4(struct MPContext *VAR_0, const char *VAR_1)
{
    if (VAR_0->video_out || !VAR_1 || !VAR_0->opts->subs_rend->sub_visibility)
        VAR_1 = "";
    if (FUNC_0(VAR_0->term_osd_subs ? VAR_0->term_osd_subs : "", VAR_1) == 0)
        return;
    FUNC_1(VAR_0->term_osd_subs);
    VAR_0->term_osd_subs = FUNC_2(VAR_0, VAR_1);
    FUNC_3(VAR_0);
}
