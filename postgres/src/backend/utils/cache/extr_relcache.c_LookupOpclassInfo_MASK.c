
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ctl ;
struct TYPE_11__ {int amprocnum; int amproc; } ;
struct TYPE_10__ {scalar_t__ opcfamily; scalar_t__ opcintype; } ;
struct TYPE_9__ {int keysize; int entrysize; } ;
struct TYPE_8__ {int valid; scalar_t__ numSupport; scalar_t__ opcfamily; scalar_t__ opcintype; int * supportProcs; } ;
typedef int SysScanDesc ;
typedef scalar_t__ StrategyNumber ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int RegProcedure ;
typedef TYPE_1__ OpClassCacheEnt ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_2__ HASHCTL ;
typedef TYPE_3__* Form_pg_opclass ;
typedef TYPE_4__* Form_pg_amproc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 scalar_t__ VAR_15 ;
 int FUNC_6 (scalar_t__) ;
 int * VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;
 scalar_t__ VAR_19 ;
 int FUNC_8 (int ,char*,int,...) ;
 int * FUNC_9 (char*,int,TYPE_2__*,int) ;
 scalar_t__ FUNC_10 (int *,void*,int ,int*) ;
 int FUNC_11 (int ,int ,int,int *,int,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static OpClassCacheEnt *
FUNC_16(Oid VAR_20,
      StrategyNumber VAR_21)
{
 OpClassCacheEnt *VAR_22;
 bool VAR_23;
 Relation VAR_24;
 SysScanDesc VAR_25;
 ScanKeyData VAR_26[3];
 HeapTuple VAR_27;
 bool VAR_28;

 if (VAR_16 == ((void*)0))
 {

  HASHCTL VAR_29;

  FUNC_4(&VAR_29, 0, sizeof(VAR_29));
  VAR_29.keysize = sizeof(Oid);
  VAR_29.entrysize = sizeof(OpClassCacheEnt);
  VAR_16 = FUNC_9("Operator class cache", 64,
           &VAR_29, VAR_12 | VAR_11);


  if (!VAR_8)
   FUNC_1();
 }

 VAR_22 = (OpClassCacheEnt *) FUNC_10(VAR_16,
              (void *) &VAR_20,
              VAR_13, &VAR_23);

 if (!VAR_23)
 {

  VAR_22->valid = 0;
  VAR_22->numSupport = VAR_21;

  if (VAR_21 > 0)
   VAR_22->supportProcs = (RegProcedure *)
    FUNC_5(VAR_8,
            VAR_21 * sizeof(RegProcedure));
  else
   VAR_22->supportProcs = ((void*)0);
 }
 else
 {
  FUNC_0(VAR_21 == VAR_22->numSupport);
 }
 if (VAR_22->valid)
  return VAR_22;
 VAR_28 = VAR_19 ||
  (VAR_20 != VAR_15 &&
   VAR_20 != VAR_14);







 FUNC_7(&VAR_26[0],
    VAR_6,
    VAR_7, VAR_10,
    FUNC_6(VAR_20));
 VAR_24 = FUNC_15(VAR_18, VAR_2);
 VAR_25 = FUNC_11(VAR_24, VAR_17, VAR_28,
         ((void*)0), 1, VAR_26);

 if (FUNC_3(VAR_27 = FUNC_13(VAR_25)))
 {
  Form_pg_opclass VAR_30 = (Form_pg_opclass) FUNC_2(VAR_27);

  VAR_22->opcfamily = VAR_30->opcfamily;
  VAR_22->opcintype = VAR_30->opcintype;
 }
 else
  FUNC_8(VAR_9, "could not find tuple for opclass %u", VAR_20);

 FUNC_12(VAR_25);
 FUNC_14(VAR_24, VAR_2);





 if (VAR_21 > 0)
 {
  FUNC_7(&VAR_26[0],
     VAR_3,
     VAR_7, VAR_10,
     FUNC_6(VAR_22->opcfamily));
  FUNC_7(&VAR_26[1],
     VAR_4,
     VAR_7, VAR_10,
     FUNC_6(VAR_22->opcintype));
  FUNC_7(&VAR_26[2],
     VAR_5,
     VAR_7, VAR_10,
     FUNC_6(VAR_22->opcintype));
  VAR_24 = FUNC_15(VAR_1, VAR_2);
  VAR_25 = FUNC_11(VAR_24, VAR_0, VAR_28,
          ((void*)0), 3, VAR_26);

  while (FUNC_3(VAR_27 = FUNC_13(VAR_25)))
  {
   Form_pg_amproc VAR_31 = (Form_pg_amproc) FUNC_2(VAR_27);

   if (VAR_31->amprocnum <= 0 ||
    (StrategyNumber) VAR_31->amprocnum > VAR_21)
    FUNC_8(VAR_9, "invalid amproc number %d for opclass %u",
      VAR_31->amprocnum, VAR_20);

   VAR_22->supportProcs[VAR_31->amprocnum - 1] =
    VAR_31->amproc;
  }

  FUNC_12(VAR_25);
  FUNC_14(VAR_24, VAR_2);
 }

 VAR_22->valid = 1;
 return VAR_22;
}
