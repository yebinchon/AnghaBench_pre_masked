
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_ep {int dummy; } ;
struct nn_bipc {int fsm; int usock; int aipcs; int * aipc; int state; struct nn_ep* ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nn_bipc*) ;
 struct nn_bipc* FUNC_1 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct nn_bipc*) ;
 int VAR_4 ;
 int FUNC_3 (struct nn_ep*) ;
 int FUNC_4 (struct nn_ep*,int *,struct nn_bipc*) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int *) ;

int FUNC_9 (struct nn_ep *VAR_5)
{
    struct nn_bipc *VAR_6;
    int VAR_7;


    VAR_6 = FUNC_1 (sizeof (struct nn_bipc), "bipc");
    FUNC_0 (VAR_6);



    VAR_6->ep = VAR_5;
    FUNC_4 (VAR_5, &VAR_2, VAR_6);
    FUNC_5 (&VAR_6->fsm, VAR_3, VAR_4,
        FUNC_3 (VAR_5));
    VAR_6->state = VAR_1;
    VAR_6->aipc = ((void*)0);
    FUNC_7 (&VAR_6->aipcs);


    FUNC_6 (&VAR_6->fsm);

    FUNC_8 (&VAR_6->usock, VAR_0, &VAR_6->fsm);

    VAR_7 = FUNC_2 (VAR_6);
    if (VAR_7 != 0) {
        return VAR_7;
    }

    return 0;
}
