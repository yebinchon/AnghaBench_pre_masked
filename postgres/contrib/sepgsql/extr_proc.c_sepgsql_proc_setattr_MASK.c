
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {scalar_t__ pronamespace; scalar_t__ proleakproof; int proname; } ;
struct TYPE_5__ {scalar_t__ objectSubId; int objectId; int classId; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_proc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_11 ;
 int FUNC_7 (int ,char*,int ) ;
 char* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_1__*,int ,int ,char*,int) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ,int,int ,int,int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ) ;

void
FUNC_20(Oid VAR_12)
{
 Relation VAR_13;
 ScanKeyData VAR_14;
 SysScanDesc VAR_15;
 HeapTuple VAR_16;
 HeapTuple VAR_17;
 Form_pg_proc VAR_18;
 Form_pg_proc VAR_19;
 uint32 VAR_20;
 ObjectAddress VAR_21;
 char *VAR_22;




 VAR_13 = FUNC_19(VAR_7, VAR_0);

 FUNC_5(&VAR_14,
    VAR_1,
    VAR_2, VAR_4,
    FUNC_3(VAR_12));

 VAR_15 = FUNC_15(VAR_13, VAR_6, 1,
          VAR_11, 1, &VAR_14);
 VAR_17 = FUNC_17(VAR_15);
 if (!FUNC_1(VAR_17))
  FUNC_7(VAR_3, "could not find tuple for function %u", VAR_12);
 VAR_19 = (Form_pg_proc) FUNC_0(VAR_17);




 VAR_16 = FUNC_6(VAR_5, FUNC_3(VAR_12));
 if (!FUNC_1(VAR_16))
  FUNC_7(VAR_3, "cache lookup failed for function %u", VAR_12);
 VAR_18 = (Form_pg_proc) FUNC_0(VAR_16);




 if (VAR_19->pronamespace != VAR_18->pronamespace)
 {
  FUNC_12(VAR_18->pronamespace);
  FUNC_11(VAR_18->pronamespace);
 }
 if (FUNC_14(FUNC_2(VAR_19->proname), FUNC_2(VAR_18->proname)) != 0)
  FUNC_13(VAR_18->pronamespace);




 VAR_20 = VAR_10;
 if (!VAR_18->proleakproof && VAR_19->proleakproof)
  VAR_20 |= VAR_9;

 VAR_21.classId = VAR_7;
 VAR_21.objectId = VAR_12;
 VAR_21.objectSubId = 0;
 VAR_22 = FUNC_8(&VAR_21);

 FUNC_10(&VAR_21,
       VAR_8,
       VAR_20,
       VAR_22,
       1);

 FUNC_9(VAR_22);

 FUNC_4(VAR_16);
 FUNC_16(VAR_15);
 FUNC_18(VAR_13, VAR_0);
}
