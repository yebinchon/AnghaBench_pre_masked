
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_ep {int dummy; } ;
struct nn_cinproc {int item; int fsm; int sinprocs; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nn_cinproc*) ;
 struct nn_cinproc* FUNC_1 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct nn_ep*) ;
 int FUNC_3 (struct nn_ep*,int ,int) ;
 int FUNC_4 (struct nn_ep*,int *,struct nn_cinproc*) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,struct nn_ep*) ;
 int FUNC_9 (int *) ;

int FUNC_10 (struct nn_ep *VAR_6)
{
    struct nn_cinproc *VAR_7;

    VAR_7 = FUNC_1 (sizeof (struct nn_cinproc), "cinproc");
    FUNC_0 (VAR_7);

    FUNC_4 (VAR_6, &VAR_4, VAR_7);

    FUNC_8 (&VAR_7->item, VAR_6);
    FUNC_5 (&VAR_7->fsm, VAR_3, VAR_5,
        FUNC_2 (VAR_6));
    VAR_7->state = VAR_0;
    FUNC_9 (&VAR_7->sinprocs);

    FUNC_3 (VAR_6, VAR_1, 1);


    FUNC_6 (&VAR_7->fsm);


    FUNC_7 (&VAR_7->item, VAR_2);

    return 0;
}
