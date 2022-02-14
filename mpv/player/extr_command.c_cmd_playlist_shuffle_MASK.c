
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_cmd_ctx {struct MPContext* mpctx; } ;
struct MPContext {int playlist; } ;


 int VAR_0 ;
 int FUNC_0 (struct MPContext*,int ,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
    struct mp_cmd_ctx *VAR_2 = VAR_1;
    struct MPContext *VAR_3 = VAR_2->mpctx;

    FUNC_1(VAR_3->playlist);
    FUNC_0(VAR_3, VAR_0, ((void*)0));
}
