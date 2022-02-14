
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rw_semaphore {int count; } ;


 int VAR_0 ;
 long VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 long FUNC_1 (int ,int *) ;
 int FUNC_2 (struct rw_semaphore*) ;

__attribute__((used)) static inline bool FUNC_3(struct rw_semaphore *VAR_2)
{
 long VAR_3 = FUNC_1(VAR_0, &VAR_2->count);
 if (FUNC_0(VAR_3 < 0))
  FUNC_2(VAR_2);
 return !(VAR_3 & VAR_1);
}
