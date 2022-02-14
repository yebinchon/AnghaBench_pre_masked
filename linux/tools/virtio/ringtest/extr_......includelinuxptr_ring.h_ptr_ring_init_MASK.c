
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_ring {int consumer_lock; int producer_lock; scalar_t__ consumer_tail; scalar_t__ consumer_head; scalar_t__ producer; int queue; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct ptr_ring*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(struct ptr_ring *VAR_1, int VAR_2, gfp_t VAR_3)
{
 VAR_1->queue = FUNC_0(VAR_2, VAR_3);
 if (!VAR_1->queue)
  return -VAR_0;

 FUNC_1(VAR_1, VAR_2);
 VAR_1->producer = VAR_1->consumer_head = VAR_1->consumer_tail = 0;
 FUNC_2(&VAR_1->producer_lock);
 FUNC_2(&VAR_1->consumer_lock);

 return 0;
}
