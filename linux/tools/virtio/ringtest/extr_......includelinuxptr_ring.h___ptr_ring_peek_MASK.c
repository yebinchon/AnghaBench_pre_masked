
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_ring {size_t consumer_head; int * queue; int size; } ;


 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline void *FUNC_2(struct ptr_ring *VAR_0)
{
 if (FUNC_1(VAR_0->size))
  return FUNC_0(VAR_0->queue[VAR_0->consumer_head]);
 return ((void*)0);
}
