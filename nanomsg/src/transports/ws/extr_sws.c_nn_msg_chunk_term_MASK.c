
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_list {int dummy; } ;
struct msg_chunk {int item; int chunk; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct msg_chunk*) ;
 int FUNC_2 (struct nn_list*,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4 (struct msg_chunk *VAR_0, struct nn_list *VAR_1)
{
    FUNC_0 (&VAR_0->chunk);
    FUNC_2 (VAR_1, &VAR_0->item);
    FUNC_3 (&VAR_0->item);
    FUNC_1 (VAR_0);
}
