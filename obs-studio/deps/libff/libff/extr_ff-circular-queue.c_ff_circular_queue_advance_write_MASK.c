
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ff_circular_queue {size_t write_index; int capacity; int size; void** slots; } ;


 int FUNC_0 (struct ff_circular_queue*) ;
 int FUNC_1 (struct ff_circular_queue*) ;

void FUNC_2(struct ff_circular_queue *VAR_0, void *VAR_1)
{
 VAR_0->slots[VAR_0->write_index] = VAR_1;
 VAR_0->write_index = (VAR_0->write_index + 1) % VAR_0->capacity;

 FUNC_0(VAR_0);
 ++VAR_0->size;
 FUNC_1(VAR_0);
}
