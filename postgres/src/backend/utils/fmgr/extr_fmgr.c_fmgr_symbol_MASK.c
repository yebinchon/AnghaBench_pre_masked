
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prolang; scalar_t__ prosecdef; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_proc ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;

 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int*) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ,int ,int *) ;
 char* FUNC_10 (char*) ;

void
FUNC_11(Oid VAR_5, char **VAR_6, char **VAR_7)
{
 HeapTuple VAR_8;
 Form_pg_proc VAR_9;
 bool VAR_10;
 Datum VAR_11;
 Datum VAR_12;


 VAR_8 = FUNC_5(VAR_4, FUNC_3(VAR_5));
 if (!FUNC_2(VAR_8))
  FUNC_8(VAR_3, "cache lookup failed for function %u", VAR_5);
 VAR_9 = (Form_pg_proc) FUNC_1(VAR_8);



 if (VAR_9->prosecdef ||
  !FUNC_9(VAR_8, VAR_1, ((void*)0)) ||
  FUNC_0(VAR_5))
 {
  *VAR_6 = ((void*)0);
  *VAR_7 = FUNC_10("fmgr_security_definer");
  FUNC_4(VAR_8);
  return;
 }


 switch (VAR_9->prolang)
 {
  case 129:
   VAR_11 = FUNC_6(VAR_4, VAR_8,
           VAR_2, &VAR_10);
   if (VAR_10)
    FUNC_8(VAR_3, "null prosrc");

   *VAR_6 = ((void*)0);
   *VAR_7 = FUNC_7(VAR_11);
   break;

  case 130:
   VAR_11 = FUNC_6(VAR_4, VAR_8,
           VAR_2, &VAR_10);
   if (VAR_10)
    FUNC_8(VAR_3, "null prosrc for C function %u", VAR_5);

   VAR_12 = FUNC_6(VAR_4, VAR_8,
           VAR_0, &VAR_10);
   if (VAR_10)
    FUNC_8(VAR_3, "null probin for C function %u", VAR_5);





   *VAR_6 = FUNC_7(VAR_12);
   *VAR_7 = FUNC_7(VAR_11);
   break;

  case 128:
   *VAR_6 = ((void*)0);
   *VAR_7 = FUNC_10("fmgr_sql");
   break;

  default:
   *VAR_6 = ((void*)0);
   *VAR_7 = ((void*)0);
   break;
 }

 FUNC_4(VAR_8);
}
