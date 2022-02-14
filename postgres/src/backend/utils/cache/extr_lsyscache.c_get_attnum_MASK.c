
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int attnum; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_attribute ;
typedef int AttrNumber ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*) ;

AttrNumber
FUNC_4(Oid VAR_1, const char *VAR_2)
{
 HeapTuple VAR_3;

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (FUNC_1(VAR_3))
 {
  Form_pg_attribute VAR_4 = (Form_pg_attribute) FUNC_0(VAR_3);
  AttrNumber VAR_5;

  VAR_5 = VAR_4->attnum;
  FUNC_2(VAR_3);
  return VAR_5;
 }
 else
  return VAR_0;
}
