
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pthread_mutexattr_t ;
struct TYPE_3__ {int mutex; } ;
typedef TYPE_1__ config_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;

__attribute__((used)) static inline bool FUNC_3(config_t *VAR_1)
{
 pthread_mutexattr_t VAR_2;
 if (FUNC_1(&VAR_2) != 0)
  return 0;
 if (FUNC_2(&VAR_2, VAR_0) != 0)
  return 0;
 return FUNC_0(&VAR_1->mutex, &VAR_2) == 0;
}
