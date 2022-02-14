
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ magic; scalar_t__ owner; int owner_cpu; } ;
typedef TYPE_1__ raw_spinlock_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,TYPE_1__*,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_3(raw_spinlock_t *VAR_3)
{
 FUNC_0(VAR_3->magic != VAR_0, VAR_3, "bad magic");
 FUNC_0(!FUNC_2(VAR_3), VAR_3, "already unlocked");
 FUNC_0(VAR_3->owner != VAR_2, VAR_3, "wrong owner");
 FUNC_0(VAR_3->owner_cpu != FUNC_1(),
       VAR_3, "wrong CPU");
 VAR_3->owner = VAR_1;
 VAR_3->owner_cpu = -1;
}
