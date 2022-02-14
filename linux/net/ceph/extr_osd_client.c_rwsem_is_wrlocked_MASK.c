
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rw_semaphore {int dummy; } ;


 int FUNC_0 (struct rw_semaphore*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct rw_semaphore*) ;

__attribute__((used)) static inline bool FUNC_3(struct rw_semaphore *VAR_0)
{
 bool VAR_1 = 1;

 if (FUNC_1(FUNC_0(VAR_0))) {
  VAR_1 = 0;
  FUNC_2(VAR_0);
 }

 return VAR_1;
}
