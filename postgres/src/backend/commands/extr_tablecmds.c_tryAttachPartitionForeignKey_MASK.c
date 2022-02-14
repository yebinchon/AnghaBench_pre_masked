
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ confrelid; int nkeys; scalar_t__* conkey; scalar_t__* confkey; scalar_t__* conpfeqop; scalar_t__ conoid; scalar_t__ conrelid; } ;
struct TYPE_6__ {scalar_t__ confrelid; scalar_t__ condeferrable; scalar_t__ condeferred; scalar_t__ confupdtype; scalar_t__ confdeltype; scalar_t__ confmatchtype; int convalidated; int conparentid; } ;
struct TYPE_5__ {scalar_t__ tgconstrrelid; scalar_t__ tgrelid; int oid; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int ObjectAddress ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_trigger ;
typedef TYPE_2__* Form_pg_constraint ;
typedef TYPE_3__ ForeignKeyCacheInfo ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int VAR_6 ;
 int FUNC_8 (int *,int ,int ,int ,int ) ;
 int * FUNC_9 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ,char*,scalar_t__) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int ,int ,int,int *,int,int *) ;
 int FUNC_14 (int ) ;
 int * FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;

__attribute__((used)) static bool
FUNC_18(ForeignKeyCacheInfo *VAR_9,
        Oid VAR_10,
        Oid VAR_11,
        int VAR_12,
        AttrNumber *VAR_13,
        AttrNumber *VAR_14,
        Oid *VAR_15)
{
 HeapTuple VAR_16;
 Form_pg_constraint VAR_17;
 HeapTuple VAR_18;
 Form_pg_constraint VAR_19;
 Relation VAR_20;
 ScanKeyData VAR_21;
 SysScanDesc VAR_22;
 HeapTuple VAR_23;

 VAR_16 = FUNC_9(VAR_2,
           FUNC_5(VAR_11));
 if (!FUNC_3(VAR_16))
  FUNC_11(VAR_4, "cache lookup failed for constraint %u", VAR_11);
 VAR_17 = (Form_pg_constraint) FUNC_2(VAR_16);





 if (VAR_9->confrelid != VAR_17->confrelid || VAR_9->nkeys != VAR_12)
 {
  FUNC_7(VAR_16);
  return 0;
 }
 for (int VAR_24 = 0; VAR_24 < VAR_12; VAR_24++)
 {
  if (VAR_9->conkey[VAR_24] != VAR_13[VAR_24] ||
   VAR_9->confkey[VAR_24] != VAR_14[VAR_24] ||
   VAR_9->conpfeqop[VAR_24] != VAR_15[VAR_24])
  {
   FUNC_7(VAR_16);
   return 0;
  }
 }






 VAR_18 = FUNC_9(VAR_2,
         FUNC_5(VAR_9->conoid));
 if (!FUNC_3(VAR_18))
  FUNC_11(VAR_4, "cache lookup failed for constraint %u", VAR_9->conoid);
 VAR_19 = (Form_pg_constraint) FUNC_2(VAR_18);
 if (FUNC_6(VAR_19->conparentid) ||
  !VAR_19->convalidated ||
  VAR_19->condeferrable != VAR_17->condeferrable ||
  VAR_19->condeferred != VAR_17->condeferred ||
  VAR_19->confupdtype != VAR_17->confupdtype ||
  VAR_19->confdeltype != VAR_17->confdeltype ||
  VAR_19->confmatchtype != VAR_17->confmatchtype)
 {
  FUNC_7(VAR_16);
  FUNC_7(VAR_18);
  return 0;
 }

 FUNC_7(VAR_18);
 FUNC_7(VAR_16);
 VAR_20 = FUNC_17(VAR_8, VAR_6);
 FUNC_8(&VAR_21,
    VAR_0,
    VAR_1, VAR_5,
    FUNC_5(VAR_9->conoid));

 VAR_22 = FUNC_13(VAR_20, VAR_7, 1,
         ((void*)0), 1, &VAR_21);
 while ((VAR_23 = FUNC_15(VAR_22)) != ((void*)0))
 {
  Form_pg_trigger VAR_25 = (Form_pg_trigger) FUNC_2(VAR_23);
  ObjectAddress VAR_26;

  if (VAR_25->tgconstrrelid != VAR_9->conrelid)
   continue;
  if (VAR_25->tgrelid != VAR_9->confrelid)
   continue;
  FUNC_10(VAR_8,
           VAR_25->oid,
           0);

  FUNC_0();
  FUNC_4(VAR_26, VAR_8,
       VAR_25->oid);
  FUNC_12(&VAR_26, VAR_3, 0);

  FUNC_0();
 }

 FUNC_14(VAR_22);
 FUNC_16(VAR_20, VAR_6);

 FUNC_1(VAR_9->conoid, VAR_11, VAR_10);
 FUNC_0();
 return 1;
}
