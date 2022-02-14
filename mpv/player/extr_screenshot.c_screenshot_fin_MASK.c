
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_waiter {int dummy; } ;
struct mp_cmd_ctx {void** on_completion_priv; } ;
struct MPContext {int dummy; } ;


 int FUNC_0 (struct mp_waiter*,int ) ;
 int FUNC_1 (struct MPContext*) ;

__attribute__((used)) static void FUNC_2(struct mp_cmd_ctx *VAR_0)
{
    void **VAR_1 = VAR_0->on_completion_priv;
    struct MPContext *VAR_2 = VAR_1[0];
    struct mp_waiter *VAR_3 = VAR_1[1];

    FUNC_0(VAR_3, 0);
    FUNC_1(VAR_2);
}
