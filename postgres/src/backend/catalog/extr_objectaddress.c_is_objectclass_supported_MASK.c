
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ class_oid; } ;
typedef scalar_t__ Oid ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

bool
FUNC_1(Oid VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
 {
  if (VAR_0[VAR_2].class_oid == VAR_1)
   return 1;
 }

 return 0;
}
