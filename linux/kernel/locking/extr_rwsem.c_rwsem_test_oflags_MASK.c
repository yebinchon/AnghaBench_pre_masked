
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rw_semaphore {int owner; } ;


 long FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct rw_semaphore *VAR_0, long VAR_1)
{
 return FUNC_0(&VAR_0->owner) & VAR_1;
}
