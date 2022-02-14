
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_cmd_ctx {int on_osd; scalar_t__ msg_osd; struct MPContext* mpctx; } ;
struct MPContext {TYPE_1__* opts; } ;
struct TYPE_2__ {int osd_duration; double* ab_loop; } ;


 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double FUNC_0 (struct MPContext*) ;
 int FUNC_1 (char*,int ,double*,struct MPContext*) ;
 int FUNC_2 (struct MPContext*,int,int,char*) ;
 int FUNC_3 (struct MPContext*,char*,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_3)
{
    struct mp_cmd_ctx *VAR_4 = VAR_3;
    struct MPContext *VAR_5 = VAR_4->mpctx;
    int VAR_6 = VAR_5->opts->osd_duration;
    int VAR_7 = VAR_4->msg_osd ? 1 : VAR_2;

    double VAR_8 = FUNC_0(VAR_5);
    if (VAR_5->opts->ab_loop[0] == VAR_0) {
        FUNC_1("ab-loop-a", VAR_1, &VAR_8, VAR_5);
        FUNC_3(VAR_5, "ab-loop-a", VAR_4->on_osd);
    } else if (VAR_5->opts->ab_loop[1] == VAR_0) {
        FUNC_1("ab-loop-b", VAR_1, &VAR_8, VAR_5);
        FUNC_3(VAR_5, "ab-loop-b", VAR_4->on_osd);
    } else {
        VAR_8 = VAR_0;
        FUNC_1("ab-loop-a", VAR_1, &VAR_8, VAR_5);
        FUNC_1("ab-loop-b", VAR_1, &VAR_8, VAR_5);
        FUNC_2(VAR_5, VAR_7, VAR_6, "Clear A-B loop");
    }
}
