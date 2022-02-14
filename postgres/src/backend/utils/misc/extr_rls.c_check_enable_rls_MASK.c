
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int relrowsecurity; int relforcerowsecurity; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_class ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,scalar_t__) ;
 int VAR_7 ;

int
FUNC_14(Oid VAR_8, Oid VAR_9, bool VAR_10)
{
 Oid VAR_11 = VAR_9 ? VAR_9 : FUNC_1();
 HeapTuple VAR_12;
 Form_pg_class VAR_13;
 bool VAR_14;
 bool VAR_15;
 bool VAR_16;


 if (VAR_8 < (Oid) VAR_2)
  return VAR_5;


 VAR_12 = FUNC_6(VAR_3, FUNC_4(VAR_8));
 if (!FUNC_2(VAR_12))
  return VAR_5;
 VAR_13 = (Form_pg_class) FUNC_0(VAR_12);

 VAR_14 = VAR_13->relrowsecurity;
 VAR_15 = VAR_13->relforcerowsecurity;

 FUNC_5(VAR_12);


 if (!VAR_14)
  return VAR_5;
 if (FUNC_12(VAR_11))
  return VAR_6;
 VAR_16 = FUNC_13(VAR_8, VAR_11);
 if (VAR_16)
 {
  if (!VAR_15 || FUNC_3())
   return VAR_6;
 }





 if (!VAR_7 && !VAR_10)
  FUNC_7(VAR_1,
    (FUNC_8(VAR_0),
     FUNC_10("query would be affected by row-level security policy for table \"%s\"",
      FUNC_11(VAR_8)),
     VAR_16 ? FUNC_9("To disable the policy for the table's owner, use ALTER TABLE NO FORCE ROW LEVEL SECURITY.") : 0));


 return VAR_4;
}
