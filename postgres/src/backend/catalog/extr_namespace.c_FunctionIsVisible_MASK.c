
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int values; } ;
struct TYPE_7__ {scalar_t__ pronamespace; int pronargs; TYPE_1__ proargtypes; int proname; } ;
struct TYPE_6__ {scalar_t__ oid; int args; struct TYPE_6__* next; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_2__* FuncCandidateList ;
typedef TYPE_3__* Form_pg_proc ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int,int ,int,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_4 ;
 int FUNC_7 (int ,char*,scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int ,int ,int) ;
 int FUNC_12 () ;

bool
FUNC_13(Oid VAR_5)
{
 HeapTuple VAR_6;
 Form_pg_proc VAR_7;
 Oid VAR_8;
 bool VAR_9;

 VAR_6 = FUNC_6(VAR_3, FUNC_4(VAR_5));
 if (!FUNC_2(VAR_6))
  FUNC_7(VAR_0, "cache lookup failed for function %u", VAR_5);
 VAR_7 = (Form_pg_proc) FUNC_1(VAR_6);

 FUNC_12();






 VAR_8 = VAR_7->pronamespace;
 if (VAR_8 != VAR_2 &&
  !FUNC_9(VAR_4, VAR_8))
  VAR_9 = 0;
 else
 {






  char *VAR_10 = FUNC_3(VAR_7->proname);
  int VAR_11 = VAR_7->pronargs;
  FuncCandidateList VAR_12;

  VAR_9 = 0;

  VAR_12 = FUNC_0(FUNC_8(FUNC_10(VAR_10)),
           VAR_11, VAR_1, 0, 0, 0);

  for (; VAR_12; VAR_12 = VAR_12->next)
  {
   if (FUNC_11(VAR_12->args, VAR_7->proargtypes.values,
        VAR_11 * sizeof(Oid)) == 0)
   {

    VAR_9 = (VAR_12->oid == VAR_5);
    break;
   }
  }
 }

 FUNC_5(VAR_6);

 return VAR_9;
}
