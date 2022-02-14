
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_cmd_ctx {struct MPContext* mpctx; } ;
struct MPContext {scalar_t__ stop_play; int playlist; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct MPContext*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_2)
{
    struct mp_cmd_ctx *VAR_3 = VAR_2;
    struct MPContext *VAR_4 = VAR_3->mpctx;

    FUNC_1(VAR_4->playlist);
    if (VAR_4->stop_play != VAR_0)
        VAR_4->stop_play = VAR_1;
    FUNC_0(VAR_4);
}
