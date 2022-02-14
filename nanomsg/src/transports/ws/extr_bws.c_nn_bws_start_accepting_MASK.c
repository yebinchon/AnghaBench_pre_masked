
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_bws {int usock; int * aws; int fsm; int ep; } ;
struct nn_aws {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5 (struct nn_bws *VAR_1)
{
    FUNC_2 (VAR_1->aws == ((void*)0));


    VAR_1->aws = FUNC_1 (sizeof (struct nn_aws), "aws");
    FUNC_0 (VAR_1->aws);
    FUNC_3 (VAR_1->aws, VAR_0, VAR_1->ep, &VAR_1->fsm);


    FUNC_4 (VAR_1->aws, &VAR_1->usock);
}
