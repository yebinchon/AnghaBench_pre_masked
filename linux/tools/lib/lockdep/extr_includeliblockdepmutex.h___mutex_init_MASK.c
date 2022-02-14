
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lock_class_key {int dummy; } ;
typedef int pthread_mutexattr_t ;
struct TYPE_3__ {int mutex; int dep_map; } ;
typedef TYPE_1__ liblockdep_pthread_mutex_t ;


 int FUNC_0 (int *,char const*,struct lock_class_key*,int ) ;
 int FUNC_1 (int *,int const*) ;

__attribute__((used)) static inline int FUNC_2(liblockdep_pthread_mutex_t *VAR_0,
    const char *VAR_1,
    struct lock_class_key *VAR_2,
    const pthread_mutexattr_t *VAR_3)
{
 FUNC_0(&VAR_0->dep_map, VAR_1, VAR_2, 0);
 return FUNC_1(&VAR_0->mutex, VAR_3);
}
