
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_ring {int consumer_lock; } ;


 void* FUNC_0 (struct ptr_ring*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void *FUNC_3(struct ptr_ring *VAR_0)
{
 void *VAR_1;

 FUNC_1(&VAR_0->consumer_lock);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->consumer_lock);

 return VAR_1;
}
