
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ magic; int raw_lock; } ;
typedef TYPE_1__ rwlock_t ;


 int FUNC_0 (int,TYPE_1__*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;

void FUNC_2(rwlock_t *VAR_1)
{
 FUNC_0(VAR_1->magic != VAR_0, VAR_1, "bad magic");
 FUNC_1(&VAR_1->raw_lock);
}
