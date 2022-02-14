
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_shared; scalar_t__ owner_pid; } ;
typedef TYPE_1__ Latch ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void
FUNC_2(Latch *VAR_4)
{

 FUNC_0(VAR_4->is_shared);



 FUNC_0(VAR_3 >= 0 && VAR_2 == VAR_1);


 if (VAR_4->owner_pid != 0)
  FUNC_1(VAR_0, "latch already owned");

 VAR_4->owner_pid = VAR_1;
}
