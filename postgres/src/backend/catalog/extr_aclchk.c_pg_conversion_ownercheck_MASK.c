
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int conowner; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_conversion ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;

bool
FUNC_10(Oid VAR_3, Oid VAR_4)
{
 HeapTuple VAR_5;
 Oid VAR_6;


 if (FUNC_9(VAR_4))
  return 1;

 VAR_5 = FUNC_4(VAR_0, FUNC_2(VAR_3));
 if (!FUNC_1(VAR_5))
  FUNC_5(VAR_2,
    (FUNC_6(VAR_1),
     FUNC_7("conversion with OID %u does not exist", VAR_3)));

 VAR_6 = ((Form_pg_conversion) FUNC_0(VAR_5))->conowner;

 FUNC_3(VAR_5);

 return FUNC_8(VAR_4, VAR_6);
}
