
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* cleanLocalLib ) () ;} ;
typedef int NTSTATUS ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;

NTSTATUS FUNC_1()
{
 NTSTATUS VAR_2 = VAR_0;
 if(VAR_1)
 {
  VAR_2 = VAR_1->cleanLocalLib();
  VAR_1 = ((void*)0);
 }
 return VAR_2;
}
