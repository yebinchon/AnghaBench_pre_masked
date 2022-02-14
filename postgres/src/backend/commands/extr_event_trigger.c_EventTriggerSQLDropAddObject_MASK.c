
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int SQLDropList; int cxt; } ;
struct TYPE_11__ {scalar_t__ classId; scalar_t__ objectSubId; int objectId; } ;
struct TYPE_10__ {int original; int normal; char* schemaname; int istemp; int next; TYPE_2__ address; int objecttype; int addrargs; int addrnames; int objidentity; int objname; } ;
typedef TYPE_1__ SQLDropObject ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_2__ ObjectAddress ;
typedef int MemoryContext ;
typedef scalar_t__ HeapTuple ;
typedef int Datum ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int ) ;
 TYPE_8__* VAR_3 ;
 int FUNC_7 (TYPE_2__ const*) ;
 int FUNC_8 (TYPE_2__*,int *,int *) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;
 char* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__,scalar_t__,int ,int*) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 TYPE_1__* FUNC_20 (int) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int *,int *) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (scalar_t__,int ) ;

void
FUNC_26(const ObjectAddress *VAR_4, bool VAR_5, bool VAR_6)
{
 SQLDropObject *VAR_7;
 MemoryContext VAR_8;

 if (!VAR_3)
  return;

 FUNC_0(FUNC_3(FUNC_7(VAR_4)));


 if (VAR_4->classId == VAR_2 &&
  (FUNC_17(VAR_4->objectId) &&
   !FUNC_18(VAR_4->objectId)))
  return;

 VAR_8 = FUNC_4(VAR_3->cxt);

 VAR_7 = FUNC_20(sizeof(SQLDropObject));
 VAR_7->address = *VAR_4;
 VAR_7->original = VAR_5;
 VAR_7->normal = VAR_6;







 if (FUNC_19(VAR_4->classId))
 {
  Relation VAR_9;
  HeapTuple VAR_10;

  VAR_9 = FUNC_25(VAR_7->address.classId, VAR_0);
  VAR_10 = FUNC_10(VAR_9,
            FUNC_14(VAR_4->classId),
            VAR_7->address.objectId);

  if (VAR_10)
  {
   AttrNumber VAR_11;
   Datum VAR_12;
   bool VAR_13;

   VAR_11 = FUNC_13(VAR_7->address.classId);
   if (VAR_11 != VAR_1)
   {
    VAR_12 = FUNC_16(VAR_10, VAR_11,
          FUNC_6(VAR_9), &VAR_13);
    if (!VAR_13)
    {
     Oid VAR_14;

     VAR_14 = FUNC_2(VAR_12);

     if (FUNC_18(VAR_14))
     {
      VAR_7->schemaname = "pg_temp";
      VAR_7->istemp = 1;
     }
     else if (FUNC_17(VAR_14))
     {
      FUNC_21(VAR_7);
      FUNC_24(VAR_9, VAR_0);
      FUNC_4(VAR_8);
      return;
     }
     else
     {
      VAR_7->schemaname = FUNC_11(VAR_14);
      VAR_7->istemp = 0;
     }
    }
   }

   if (FUNC_15(VAR_7->address.classId) &&
    VAR_7->address.objectSubId == 0)
   {
    VAR_11 = FUNC_12(VAR_7->address.classId);
    if (VAR_11 != VAR_1)
    {
     VAR_12 = FUNC_16(VAR_10, VAR_11,
           FUNC_6(VAR_9), &VAR_13);
     if (!VAR_13)
      VAR_7->objname = FUNC_22(FUNC_5(*FUNC_1(VAR_12)));
    }
   }
  }

  FUNC_24(VAR_9, VAR_0);
 }
 else
 {
  if (VAR_4->classId == VAR_2 &&
   FUNC_18(VAR_4->objectId))
   VAR_7->istemp = 1;
 }


 VAR_7->objidentity =
  FUNC_8(&VAR_7->address, &VAR_7->addrnames, &VAR_7->addrargs);


 VAR_7->objecttype = FUNC_9(&VAR_7->address);

 FUNC_23(&(VAR_3->SQLDropList), &VAR_7->next);

 FUNC_4(VAR_8);
}
