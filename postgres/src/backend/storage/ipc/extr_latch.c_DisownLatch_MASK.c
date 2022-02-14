
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_shared; scalar_t__ owner_pid; } ;
typedef TYPE_1__ Latch ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

void
FUNC_1(Latch *VAR_1)
{
 FUNC_0(VAR_1->is_shared);
 FUNC_0(VAR_1->owner_pid == VAR_0);

 VAR_1->owner_pid = 0;
}
