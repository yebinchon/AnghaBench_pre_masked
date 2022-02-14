
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_12__ {int * values; } ;
struct TYPE_15__ {int pronargs; scalar_t__ proleakproof; TYPE_1__ proargtypes; int proname; int pronamespace; } ;
struct TYPE_14__ {scalar_t__ objectSubId; int objectId; int classId; } ;
struct TYPE_13__ {char* data; } ;
typedef int SysScanDesc ;
typedef TYPE_2__ StringInfoData ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_3__ ObjectAddress ;
typedef int HeapTuple ;
typedef TYPE_4__* Form_pg_proc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_3__*,int ,char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (TYPE_2__*,char*,int ) ;
 int FUNC_7 (TYPE_2__*,char) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (TYPE_3__*) ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (TYPE_3__*,int ,int ,int ,int) ;
 int FUNC_16 (char*,int ,int ,char*,int) ;
 char* FUNC_17 (char*,char*,int ,int ) ;
 char* FUNC_18 () ;
 char* FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (int ,int ,int,int ,int,int *) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ,int ) ;

void
FUNC_25(Oid VAR_16)
{
 Relation VAR_17;
 ScanKeyData VAR_18;
 SysScanDesc VAR_19;
 HeapTuple VAR_20;
 char *VAR_21;
 char *VAR_22;
 char *VAR_23;
 char *VAR_24;
 uint32 VAR_25;
 int VAR_26;
 StringInfoData VAR_27;
 ObjectAddress VAR_28;
 Form_pg_proc VAR_29;





 VAR_17 = FUNC_24(VAR_7, VAR_0);

 FUNC_4(&VAR_18,
    VAR_1,
    VAR_2, VAR_4,
    FUNC_3(VAR_16));

 VAR_19 = FUNC_20(VAR_17, VAR_6, 1,
          VAR_14, 1, &VAR_18);

 VAR_20 = FUNC_22(VAR_19);
 if (!FUNC_1(VAR_20))
  FUNC_9(VAR_3, "could not find tuple for function %u", VAR_16);

 VAR_29 = (Form_pg_proc) FUNC_0(VAR_20);




 VAR_28.classId = VAR_5;
 VAR_28.objectId = VAR_29->pronamespace;
 VAR_28.objectSubId = 0;
 FUNC_15(&VAR_28,
       VAR_10,
       VAR_13,
       FUNC_10(&VAR_28),
       1);
 VAR_22 = FUNC_18();
 VAR_23 = FUNC_19(VAR_5,
         VAR_29->pronamespace, 0);
 VAR_24 = FUNC_17(VAR_22, VAR_23,
           VAR_9,
           FUNC_2(VAR_29->proname));




 FUNC_12(&VAR_27);
 VAR_21 = FUNC_11(VAR_29->pronamespace);
 FUNC_6(&VAR_27, "%s(",
      FUNC_14(VAR_21, FUNC_2(VAR_29->proname)));
 for (VAR_26 = 0; VAR_26 < VAR_29->pronargs; VAR_26++)
 {
  if (VAR_26 > 0)
   FUNC_7(&VAR_27, ',');

  VAR_28.classId = VAR_15;
  VAR_28.objectId = VAR_29->proargtypes.values[VAR_26];
  VAR_28.objectSubId = 0;
  FUNC_8(&VAR_27, FUNC_10(&VAR_28));
 }
 FUNC_7(&VAR_27, ')');

 VAR_25 = VAR_11;
 if (VAR_29->proleakproof)
  VAR_25 |= VAR_12;

 FUNC_16(VAR_24,
          VAR_9,
          VAR_25,
          VAR_27.data,
          1);




 VAR_28.classId = VAR_7;
 VAR_28.objectId = VAR_16;
 VAR_28.objectSubId = 0;
 FUNC_5(&VAR_28, VAR_8, VAR_24);




 FUNC_21(VAR_19);
 FUNC_23(VAR_17, VAR_0);

 FUNC_13(VAR_27.data);
 FUNC_13(VAR_23);
 FUNC_13(VAR_24);
}
