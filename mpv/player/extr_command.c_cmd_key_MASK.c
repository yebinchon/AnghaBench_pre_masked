
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mp_cmd_ctx {int success; TYPE_2__* args; scalar_t__ priv; struct MPContext* mpctx; } ;
struct MPContext {int input; } ;
struct TYPE_3__ {char* s; } ;
struct TYPE_4__ {TYPE_1__ v; } ;


 int FUNC_0 (struct MPContext*,char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_2)
{
    struct mp_cmd_ctx *VAR_3 = VAR_2;
    struct MPContext *VAR_4 = VAR_3->mpctx;
    int VAR_5 = *(int *)VAR_3->priv;

    const char *VAR_6 = VAR_3->args[0].v.s;
    if (VAR_6[0] == '\0' && VAR_5 == VAR_1) {
        FUNC_2(VAR_4->input, VAR_0);
    } else {
        int VAR_7 = FUNC_1(VAR_6);
        if (VAR_7 < 0) {
            FUNC_0(VAR_4, "%s is not a valid input name.\n", VAR_6);
            VAR_3->success = 0;
            return;
        }
        FUNC_2(VAR_4->input, VAR_7 | VAR_5);
    }
}
