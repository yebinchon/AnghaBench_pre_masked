
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int trffromsql; } ;
typedef int Oid ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_transform ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *,int ) ;

Oid
FUNC_5(Oid VAR_2, Oid VAR_3, List *VAR_4)
{
 HeapTuple VAR_5;

 if (!FUNC_4(VAR_4, VAR_2))
  return VAR_0;

 VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3);
 if (FUNC_1(VAR_5))
 {
  Oid VAR_6;

  VAR_6 = ((Form_pg_transform) FUNC_0(VAR_5))->trffromsql;
  FUNC_2(VAR_5);
  return VAR_6;
 }
 else
  return VAR_0;
}
