
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mutex; int dep_map; } ;
typedef TYPE_1__ liblockdep_pthread_mutex_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,unsigned long) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(liblockdep_pthread_mutex_t *VAR_1)
{
 FUNC_0(&VAR_1->dep_map, 0, (unsigned long)VAR_0);
 return FUNC_1(&VAR_1->mutex);
}
