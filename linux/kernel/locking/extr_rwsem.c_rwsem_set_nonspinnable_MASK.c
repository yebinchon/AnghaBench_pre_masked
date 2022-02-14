
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rw_semaphore {int owner; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long*,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct rw_semaphore *VAR_2)
{
 unsigned long VAR_3 = FUNC_0(&VAR_2->owner);

 do {
  if (!(VAR_3 & VAR_1))
   break;
  if (VAR_3 & VAR_0)
   break;
 } while (!FUNC_1(&VAR_2->owner, &VAR_3,
       VAR_3 | VAR_0));
}
