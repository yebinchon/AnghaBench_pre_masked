
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ magic; scalar_t__ owner; int owner_cpu; } ;
typedef TYPE_1__ rwlock_t ;


 int FUNC_0 (int,TYPE_1__*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(rwlock_t *VAR_3)
{
 FUNC_0(VAR_3->magic != VAR_0, VAR_3, "bad magic");
 FUNC_0(VAR_3->owner != VAR_2, VAR_3, "wrong owner");
 FUNC_0(VAR_3->owner_cpu != FUNC_1(),
       VAR_3, "wrong CPU");
 VAR_3->owner = VAR_1;
 VAR_3->owner_cpu = -1;
}
