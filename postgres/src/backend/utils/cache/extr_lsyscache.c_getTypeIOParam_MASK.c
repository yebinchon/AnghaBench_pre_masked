
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oid; int typelem; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_type ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

Oid
FUNC_2(HeapTuple VAR_0)
{
 Form_pg_type VAR_1 = (Form_pg_type) FUNC_0(VAR_0);





 if (FUNC_1(VAR_1->typelem))
  return VAR_1->typelem;
 else
  return VAR_1->oid;
}
