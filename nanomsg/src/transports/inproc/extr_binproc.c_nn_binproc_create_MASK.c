
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct nn_ep {int dummy; } ;
struct TYPE_4__ {int state; } ;
struct nn_binproc {int item; TYPE_1__ fsm; int sinprocs; int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct nn_binproc*) ;
 struct nn_binproc* FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct nn_ep*) ;
 int FUNC_3 (struct nn_ep*,int *,struct nn_binproc*) ;
 int FUNC_4 (struct nn_binproc*) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,struct nn_ep*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13 (struct nn_ep *VAR_5)
{
    int VAR_6;
    struct nn_binproc *VAR_7;

    VAR_7 = FUNC_1 (sizeof (struct nn_binproc), "binproc");
    FUNC_0 (VAR_7);

    FUNC_9 (&VAR_7->item, VAR_5);
    FUNC_5 (&VAR_7->fsm, VAR_2, VAR_4,
        FUNC_2 (VAR_5));
    VAR_7->state = VAR_0;
    FUNC_11 (&VAR_7->sinprocs);


    FUNC_6 (&VAR_7->fsm);


    VAR_6 = FUNC_8 (&VAR_7->item, VAR_1);
    if (VAR_6 < 0) {
        FUNC_12 (&VAR_7->sinprocs);



        VAR_7->fsm.state = 1;
        FUNC_7 (&VAR_7->fsm);

        FUNC_10 (&VAR_7->item);
        FUNC_4 (VAR_7);
        return VAR_6;
    }

    FUNC_3 (VAR_5, &VAR_3, VAR_7);
    return 0;
}
