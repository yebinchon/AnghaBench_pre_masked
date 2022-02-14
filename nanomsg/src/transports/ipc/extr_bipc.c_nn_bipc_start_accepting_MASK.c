
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_bipc {int usock; int * aipc; int fsm; int ep; } ;
struct nn_aipc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5 (struct nn_bipc *VAR_1)
{
    FUNC_4 (VAR_1->aipc == ((void*)0));


    VAR_1->aipc = FUNC_3 (sizeof (struct nn_aipc), "aipc");
    FUNC_0 (VAR_1->aipc);
    FUNC_1 (VAR_1->aipc, VAR_0, VAR_1->ep, &VAR_1->fsm);


    FUNC_2 (VAR_1->aipc, &VAR_1->usock);
}
