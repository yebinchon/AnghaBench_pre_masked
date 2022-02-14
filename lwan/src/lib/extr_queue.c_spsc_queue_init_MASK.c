
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spsc_queue {size_t size; size_t mask; int tail; int head; int buffer; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 size_t FUNC_2 (size_t) ;

int FUNC_3(struct spsc_queue *VAR_2, size_t VAR_3)
{
    if (VAR_3 == 0)
        return -VAR_0;

    VAR_3 = FUNC_2(VAR_3);
    VAR_2->buffer = FUNC_1(1 + VAR_3, sizeof(int));
    if (!VAR_2->buffer)
        return -VAR_1;

    FUNC_0(VAR_2->head, 0);
    FUNC_0(VAR_2->tail, 0);

    VAR_2->size = VAR_3;
    VAR_2->mask = VAR_3 - 1;

    return 0;
}
