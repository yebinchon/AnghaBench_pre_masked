
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_cmd_ctx {struct MPContext* mpctx; } ;
struct MPContext {int dummy; } ;


 int FUNC_0 (struct MPContext*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
    struct mp_cmd_ctx *VAR_1 = VAR_0;
    struct MPContext *VAR_2 = VAR_1->mpctx;

    FUNC_0(VAR_2);
}
