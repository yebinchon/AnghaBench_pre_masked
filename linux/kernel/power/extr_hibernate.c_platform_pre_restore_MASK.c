
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* pre_restore ) () ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(int VAR_1)
{
 return (VAR_1 && VAR_0) ?
  VAR_0->pre_restore() : 0;
}
