
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mutex; int key; int dep_map; } ;
typedef TYPE_1__ liblockdep_pthread_mutex_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(liblockdep_pthread_mutex_t *VAR_0)
{
 FUNC_0(&VAR_0->dep_map);
 FUNC_1(&VAR_0->key);
 return FUNC_2(&VAR_0->mutex);
}
