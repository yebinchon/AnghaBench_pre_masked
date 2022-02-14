
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ suspend_state_t ;
struct TYPE_2__ {int (* prepare ) () ;} ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(suspend_state_t VAR_2)
{
 return VAR_2 == VAR_0 && VAR_1 && VAR_1->prepare ?
  VAR_1->prepare() : 0;
}
