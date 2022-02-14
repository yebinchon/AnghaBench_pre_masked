
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

void
FUNC_10(Oid VAR_5, Oid VAR_6)
{
 HeapTuple VAR_7;
 Relation VAR_8;

 VAR_8 = FUNC_9(VAR_4, VAR_2);

 VAR_7 = FUNC_3(VAR_3, FUNC_2(VAR_5));

 if (!FUNC_1(VAR_7))
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_6("subscription with OID %u does not exist", VAR_5)));

 FUNC_0(VAR_8, VAR_7, VAR_6);

 FUNC_7(VAR_7);

 FUNC_8(VAR_8, VAR_2);
}
