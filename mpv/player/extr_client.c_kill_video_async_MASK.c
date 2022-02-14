
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_client_api {struct MPContext* mpctx; } ;
struct MPContext {int dispatch; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct MPContext*) ;

void FUNC_1(struct mp_client_api *VAR_1)
{
    struct MPContext *VAR_2 = VAR_1->mpctx;
    FUNC_0(VAR_2->dispatch, VAR_0, VAR_2);
}
