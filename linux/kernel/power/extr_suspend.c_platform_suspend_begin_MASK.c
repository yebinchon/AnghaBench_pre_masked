
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ suspend_state_t ;
struct TYPE_4__ {int (* begin ) () ;} ;
struct TYPE_3__ {int (* begin ) (scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_2(suspend_state_t VAR_3)
{
 if (VAR_3 == VAR_0 && VAR_1 && VAR_1->begin)
  return VAR_1->begin();
 else if (VAR_2 && VAR_2->begin)
  return VAR_2->begin(VAR_3);
 else
  return 0;
}
