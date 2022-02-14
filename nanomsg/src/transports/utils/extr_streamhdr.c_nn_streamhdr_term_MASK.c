
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_streamhdr {int fsm; int timer; int done; } ;


 int VAR_0 ;
 int FUNC_0 (struct nn_streamhdr*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4 (struct nn_streamhdr *VAR_1)
{
    FUNC_0 (VAR_1, VAR_0);

    FUNC_1 (&VAR_1->done);
    FUNC_3 (&VAR_1->timer);
    FUNC_2 (&VAR_1->fsm);
}
