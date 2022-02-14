
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_ring {int producer_lock; } ;


 int FUNC_0 (struct ptr_ring*,void*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_3(struct ptr_ring *VAR_0, void *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_1(&VAR_0->producer_lock, VAR_2);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->producer_lock, VAR_2);

 return VAR_3;
}
