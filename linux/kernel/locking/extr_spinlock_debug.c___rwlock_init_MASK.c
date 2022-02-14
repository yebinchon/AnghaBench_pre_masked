
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lock_class_key {int dummy; } ;
struct TYPE_3__ {int owner_cpu; int owner; int magic; scalar_t__ raw_lock; int dep_map; } ;
typedef TYPE_1__ rwlock_t ;
typedef scalar_t__ arch_rwlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (int *,char const*,struct lock_class_key*,int ) ;

void FUNC_2(rwlock_t *VAR_3, const char *VAR_4,
     struct lock_class_key *VAR_5)
{







 VAR_3->raw_lock = (arch_rwlock_t) VAR_2;
 VAR_3->magic = VAR_0;
 VAR_3->owner = VAR_1;
 VAR_3->owner_cpu = -1;
}
