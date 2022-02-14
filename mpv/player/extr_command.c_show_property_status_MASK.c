
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_cmd_ctx {int success; int on_osd; scalar_t__ msg_osd; struct MPContext* mpctx; } ;
struct MPOpts {int osd_duration; } ;
struct MPContext {struct MPOpts* opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct MPContext*,int,int,char*,char const*) ;
 int FUNC_1 (struct MPContext*,char const*,int ) ;

__attribute__((used)) static void FUNC_2(struct mp_cmd_ctx *VAR_4, const char *VAR_5, int VAR_6)
{
    struct MPContext *VAR_7 = VAR_4->mpctx;
    struct MPOpts *VAR_8 = VAR_7->opts;
    int VAR_9 = VAR_8->osd_duration;
    int VAR_10 = VAR_4->msg_osd ? 1 : VAR_3;

    if (VAR_6 == VAR_0 || VAR_6 == VAR_1) {
        FUNC_1(VAR_7, VAR_5, VAR_4->on_osd);
        if (VAR_6 == VAR_1)
            VAR_4->success = 0;
    } else if (VAR_6 == VAR_2) {
        FUNC_0(VAR_7, VAR_10, VAR_9, "Unknown property: '%s'", VAR_5);
        VAR_4->success = 0;
    } else if (VAR_6 <= 0) {
        FUNC_0(VAR_7, VAR_10, VAR_9, "Failed to set property '%s'",
                    VAR_5);
        VAR_4->success = 0;
    }
}
