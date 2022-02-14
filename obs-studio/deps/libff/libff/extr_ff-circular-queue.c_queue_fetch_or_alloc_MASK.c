
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ff_circular_queue {void** slots; int item_size; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void *FUNC_1(struct ff_circular_queue *VAR_0, int VAR_1)
{
 if (VAR_0->slots[VAR_1] == ((void*)0))
  VAR_0->slots[VAR_1] = FUNC_0(VAR_0->item_size);

 return VAR_0->slots[VAR_1];
}
