
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rolname; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_authid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ) ;
 char* FUNC_9 (int ) ;

char *
FUNC_10(Oid VAR_3, bool VAR_4)
{
 HeapTuple VAR_5;
 char *VAR_6;

 VAR_5 = FUNC_5(VAR_0, FUNC_3(VAR_3));
 if (!FUNC_1(VAR_5))
 {
  if (!VAR_4)
   FUNC_6(VAR_2,
     (FUNC_7(VAR_1),
      FUNC_8("invalid role OID: %u", VAR_3)));
  VAR_6 = ((void*)0);
 }
 else
 {
  VAR_6 = FUNC_9(FUNC_2(((Form_pg_authid) FUNC_0(VAR_5))->rolname));
  FUNC_4(VAR_5);
 }
 return VAR_6;
}
