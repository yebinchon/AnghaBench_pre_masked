
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* smgr_shutdown ) () ;} ;
typedef int Datum ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(int VAR_2, Datum VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
 {
  if (VAR_1[VAR_4].smgr_shutdown)
   VAR_1[VAR_4].smgr_shutdown();
 }
}
