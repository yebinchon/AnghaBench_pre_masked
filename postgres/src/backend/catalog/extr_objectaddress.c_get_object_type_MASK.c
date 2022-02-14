
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ objtype; } ;
typedef int Oid ;
typedef scalar_t__ ObjectType ;
typedef TYPE_1__ ObjectPropertyType ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

ObjectType
FUNC_3(Oid VAR_1, Oid VAR_2)
{
 const ObjectPropertyType *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->objtype == VAR_0)
 {





  return FUNC_2(FUNC_1(VAR_2));
 }
 else
  return VAR_3->objtype;
}
