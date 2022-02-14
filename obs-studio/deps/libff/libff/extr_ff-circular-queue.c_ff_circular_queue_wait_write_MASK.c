
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ff_circular_queue {scalar_t__ size; scalar_t__ capacity; int abort; } ;


 int FUNC_0 (struct ff_circular_queue*) ;
 int FUNC_1 (struct ff_circular_queue*) ;
 int FUNC_2 (struct ff_circular_queue*) ;

void FUNC_3(struct ff_circular_queue *VAR_0)
{
 FUNC_0(VAR_0);

 while (VAR_0->size >= VAR_0->capacity && !VAR_0->abort)
  FUNC_2(VAR_0);

 FUNC_1(VAR_0);
}
