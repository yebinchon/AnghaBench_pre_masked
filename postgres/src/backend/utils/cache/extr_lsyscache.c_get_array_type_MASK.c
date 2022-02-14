
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int typarray; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_type ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;

Oid
FUNC_5(Oid VAR_2)
{
 HeapTuple VAR_3;
 Oid VAR_4 = VAR_0;

 VAR_3 = FUNC_4(VAR_1, FUNC_2(VAR_2));
 if (FUNC_1(VAR_3))
 {
  VAR_4 = ((Form_pg_type) FUNC_0(VAR_3))->typarray;
  FUNC_3(VAR_3);
 }
 return VAR_4;
}
