
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_sws {int fsm; int handshaker; int pipebase; int inmsg_array; int outmsg; int done; } ;


 int VAR_0 ;
 int FUNC_0 (struct nn_sws*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7 (struct nn_sws *VAR_1)
{
    FUNC_0 (VAR_1, VAR_0);

    FUNC_1 (&VAR_1->done);
    FUNC_4 (&VAR_1->outmsg);
    FUNC_3 (&VAR_1->inmsg_array);
    FUNC_5 (&VAR_1->pipebase);
    FUNC_6 (&VAR_1->handshaker);
    FUNC_2 (&VAR_1->fsm);
}
