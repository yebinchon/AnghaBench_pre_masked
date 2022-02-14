
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_ring {int size; int consumer_head; int consumer_tail; int consumer_lock; int producer_lock; int ** queue; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_6(struct ptr_ring *VAR_0, void **VAR_1, int VAR_2,
          void (*VAR_3)(void *))
{
 unsigned long VAR_4;
 int VAR_5;

 FUNC_3(&VAR_0->consumer_lock, VAR_4);
 FUNC_2(&VAR_0->producer_lock);

 if (!VAR_0->size)
  goto done;





 VAR_5 = VAR_0->consumer_head - 1;
 while (FUNC_1(VAR_5 >= VAR_0->consumer_tail))
  VAR_0->queue[VAR_5--] = ((void*)0);
 VAR_0->consumer_tail = VAR_0->consumer_head;





 while (VAR_2) {
  VAR_5 = VAR_0->consumer_head - 1;
  if (VAR_5 < 0)
   VAR_5 = VAR_0->size - 1;
  if (VAR_0->queue[VAR_5]) {

   goto done;
  }
  VAR_0->queue[VAR_5] = VAR_1[--VAR_2];
  VAR_0->consumer_tail = VAR_5;

  FUNC_0(VAR_0->consumer_head, VAR_5);
 }

done:

 while (VAR_2)
  VAR_3(VAR_1[--VAR_2]);
 FUNC_4(&VAR_0->producer_lock);
 FUNC_5(&VAR_0->consumer_lock, VAR_4);
}
