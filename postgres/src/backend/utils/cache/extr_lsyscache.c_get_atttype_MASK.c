
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int atttypid; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_attribute ;
typedef int AttrNumber ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;

Oid
FUNC_6(Oid VAR_2, AttrNumber VAR_3)
{
 HeapTuple VAR_4;

 VAR_4 = FUNC_5(VAR_0,
       FUNC_3(VAR_2),
       FUNC_2(VAR_3));
 if (FUNC_1(VAR_4))
 {
  Form_pg_attribute VAR_5 = (Form_pg_attribute) FUNC_0(VAR_4);
  Oid VAR_6;

  VAR_6 = VAR_5->atttypid;
  FUNC_4(VAR_4);
  return VAR_6;
 }
 else
  return VAR_1;
}
