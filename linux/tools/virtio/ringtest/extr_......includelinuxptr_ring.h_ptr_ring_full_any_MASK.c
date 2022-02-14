
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_ring {int producer_lock; } ;


 int FUNC_0 (struct ptr_ring*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline bool FUNC_3(struct ptr_ring *VAR_0)
{
 unsigned long VAR_1;
 bool VAR_2;

 FUNC_1(&VAR_0->producer_lock, VAR_1);
 VAR_2 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->producer_lock, VAR_1);

 return VAR_2;
}
