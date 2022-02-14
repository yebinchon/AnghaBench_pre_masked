
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_ring {int consumer_head; int consumer_tail; int batch; int size; int ** queue; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(struct ptr_ring *VAR_0)
{
 int VAR_1 = VAR_0->consumer_head;
 int VAR_2 = VAR_1++;






 if (FUNC_2(VAR_1 - VAR_0->consumer_tail >= VAR_0->batch ||
       VAR_1 >= VAR_0->size)) {





  while (FUNC_1(VAR_2 >= VAR_0->consumer_tail))
   VAR_0->queue[VAR_2--] = ((void*)0);
  VAR_0->consumer_tail = VAR_1;
 }
 if (FUNC_2(VAR_1 >= VAR_0->size)) {
  VAR_1 = 0;
  VAR_0->consumer_tail = 0;
 }

 FUNC_0(VAR_0->consumer_head, VAR_1);
}
