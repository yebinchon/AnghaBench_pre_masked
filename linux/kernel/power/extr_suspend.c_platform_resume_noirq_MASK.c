
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ suspend_state_t ;
struct TYPE_4__ {int (* restore_early ) () ;} ;
struct TYPE_3__ {int (* wake ) () ;} ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_2(suspend_state_t VAR_3)
{
 if (VAR_3 == VAR_0) {
  if (VAR_1 && VAR_1->restore_early)
   VAR_1->restore_early();
 } else if (VAR_2->wake) {
  VAR_2->wake();
 }
}
