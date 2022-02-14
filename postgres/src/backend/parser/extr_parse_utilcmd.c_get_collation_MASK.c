
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int collname; int collnamespace; } ;
typedef scalar_t__ Oid ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_collation ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,scalar_t__) ;
 char* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int * FUNC_10 (int ,int ) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (int ) ;

__attribute__((used)) static List *
FUNC_13(Oid VAR_3, Oid VAR_4)
{
 List *VAR_5;
 HeapTuple VAR_6;
 Form_pg_collation VAR_7;
 char *VAR_8;
 char *VAR_9;

 if (!FUNC_4(VAR_3))
  return VAR_2;
 if (VAR_3 == FUNC_9(VAR_4))
  return VAR_2;

 VAR_6 = FUNC_6(VAR_0, FUNC_3(VAR_3));
 if (!FUNC_1(VAR_6))
  FUNC_7(VAR_1, "cache lookup failed for collation %u", VAR_3);
 VAR_7 = (Form_pg_collation) FUNC_0(VAR_6);


 VAR_8 = FUNC_8(VAR_7->collnamespace);
 VAR_9 = FUNC_12(FUNC_2(VAR_7->collname));
 VAR_5 = FUNC_10(FUNC_11(VAR_8), FUNC_11(VAR_9));

 FUNC_5(VAR_6);
 return VAR_5;
}
