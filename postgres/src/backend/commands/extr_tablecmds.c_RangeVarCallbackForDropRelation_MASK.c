
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct DropRelationCallbackState {char relkind; scalar_t__ heapOid; scalar_t__ partParentOid; scalar_t__ concurrent; } ;
struct TYPE_8__ {int relispartition; char relkind; int relnamespace; } ;
struct TYPE_7__ {int indisvalid; } ;
struct TYPE_6__ {int relname; } ;
typedef TYPE_1__ RangeVar ;
typedef scalar_t__ Oid ;
typedef int LOCKMODE ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_index ;
typedef TYPE_3__* Form_pg_class ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char,char) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 void* VAR_5 ;
 scalar_t__ FUNC_5 (scalar_t__,TYPE_3__*) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int VAR_11 ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int VAR_12 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,int ) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (scalar_t__,int ) ;
 int FUNC_20 (int ,int ) ;

__attribute__((used)) static void
FUNC_21(const RangeVar *VAR_13, Oid VAR_14, Oid VAR_15,
        void *VAR_16)
{
 HeapTuple VAR_17;
 struct DropRelationCallbackState *VAR_18;
 char VAR_19;
 char VAR_20;
 bool VAR_21;
 Form_pg_class VAR_22;
 LOCKMODE VAR_23;
 bool VAR_24 = 0;

 VAR_18 = (struct DropRelationCallbackState *) VAR_16;
 VAR_19 = VAR_18->relkind;
 VAR_23 = VAR_18->concurrent ?
  VAR_11 : VAR_1;






 if (VAR_14 != VAR_15 && FUNC_8(VAR_18->heapOid))
 {
  FUNC_11(VAR_18->heapOid, VAR_23);
  VAR_18->heapOid = VAR_5;
 }






 if (VAR_14 != VAR_15 && FUNC_8(VAR_18->partParentOid))
 {
  FUNC_11(VAR_18->partParentOid, VAR_1);
  VAR_18->partParentOid = VAR_5;
 }


 if (!FUNC_8(VAR_14))
  return;

 VAR_17 = FUNC_10(VAR_10, FUNC_7(VAR_14));
 if (!FUNC_3(VAR_17))
  return;
 VAR_22 = (Form_pg_class) FUNC_1(VAR_17);
 VAR_21 = VAR_22->relispartition;
 if (VAR_22->relkind == VAR_8)
  VAR_20 = VAR_9;
 else if (VAR_22->relkind == VAR_7)
  VAR_20 = VAR_6;
 else
  VAR_20 = VAR_22->relkind;

 if (VAR_19 != VAR_20)
  FUNC_0(VAR_13->relname, VAR_22->relkind, VAR_19);


 if (!FUNC_19(VAR_14, FUNC_2()) &&
  !FUNC_20(VAR_22->relnamespace, FUNC_2()))
  FUNC_12(VAR_0, FUNC_18(FUNC_17(VAR_14)),
        VAR_13->relname);







 if (FUNC_5(VAR_14, VAR_22) && VAR_19 == VAR_6)
 {
  HeapTuple VAR_25;
  Form_pg_index VAR_26;
  bool VAR_27;

  VAR_25 = FUNC_10(VAR_4, FUNC_7(VAR_14));
  if (!FUNC_3(VAR_25))
  {
   FUNC_9(VAR_17);
   return;
  }

  VAR_26 = (Form_pg_index) FUNC_1(VAR_25);
  VAR_27 = VAR_26->indisvalid;
  FUNC_9(VAR_25);


  if (!VAR_27)
   VAR_24 = 1;
 }


 if (!VAR_24 && !VAR_12 && FUNC_5(VAR_14, VAR_22))
  FUNC_13(VAR_3,
    (FUNC_14(VAR_2),
     FUNC_15("permission denied: \"%s\" is a system catalog",
      VAR_13->relname)));

 FUNC_9(VAR_17);
 if ((VAR_19 == VAR_6 || VAR_19 == VAR_7) &&
  VAR_14 != VAR_15)
 {
  VAR_18->heapOid = FUNC_4(VAR_14, 1);
  if (FUNC_8(VAR_18->heapOid))
   FUNC_6(VAR_18->heapOid, VAR_23);
 }







 if (VAR_21 && VAR_14 != VAR_15)
 {
  VAR_18->partParentOid = FUNC_16(VAR_14);
  if (FUNC_8(VAR_18->partParentOid))
   FUNC_6(VAR_18->partParentOid, VAR_1);
 }
}
