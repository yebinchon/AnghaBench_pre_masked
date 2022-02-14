
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_refqueue {int num_queue; int pos; int second_field; int eof; int next; int * queue; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct mp_refqueue *VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < VAR_0->num_queue; VAR_1++)
        FUNC_1(VAR_0->queue[VAR_1]);
    VAR_0->num_queue = 0;
    VAR_0->pos = -1;
    VAR_0->second_field = 0;
    VAR_0->eof = 0;
    FUNC_0(&VAR_0->next);
}
