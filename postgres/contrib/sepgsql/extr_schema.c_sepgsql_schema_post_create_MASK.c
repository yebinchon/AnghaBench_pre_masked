
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int nspname; } ;
struct TYPE_8__ {scalar_t__ objectSubId; int objectId; int classId; } ;
struct TYPE_7__ {int data; } ;
typedef int SysScanDesc ;
typedef TYPE_1__ StringInfoData ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_2__ ObjectAddress ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_namespace ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 char* FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ,char*) ;
 int VAR_12 ;
 int FUNC_6 (TYPE_1__*,char*,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char*,int ,int ,int ,int) ;
 char* FUNC_12 (int ,char*,int ,char const*) ;
 int FUNC_13 () ;
 char* FUNC_14 (int ,int ,int ) ;
 scalar_t__ FUNC_15 (char const*,char*,int) ;
 int FUNC_16 (int ,int ,int,int ,int,int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int ) ;

void
FUNC_21(Oid VAR_13)
{
 Relation VAR_14;
 ScanKeyData VAR_15;
 SysScanDesc VAR_16;
 HeapTuple VAR_17;
 char *VAR_18;
 char *VAR_19;
 const char *VAR_20;
 ObjectAddress VAR_21;
 Form_pg_namespace VAR_22;
 StringInfoData VAR_23;
 VAR_14 = FUNC_20(VAR_8, VAR_0);

 FUNC_4(&VAR_15,
    VAR_1,
    VAR_2, VAR_5,
    FUNC_3(VAR_13));

 VAR_16 = FUNC_16(VAR_14, VAR_7, 1,
          VAR_12, 1, &VAR_15);
 VAR_17 = FUNC_18(VAR_16);
 if (!FUNC_1(VAR_17))
  FUNC_7(VAR_4, "could not find tuple for namespace %u", VAR_13);

 VAR_22 = (Form_pg_namespace) FUNC_0(VAR_17);
 VAR_20 = FUNC_2(VAR_22->nspname);
 if (FUNC_15(VAR_20, "pg_temp_", 8) == 0)
  VAR_20 = "pg_temp";
 else if (FUNC_15(VAR_20, "pg_toast_temp_", 14) == 0)
  VAR_20 = "pg_toast_temp";

 VAR_18 = FUNC_14(VAR_3, VAR_6, 0);
 VAR_19 = FUNC_12(FUNC_13(),
           VAR_18,
           VAR_10,
           VAR_20);




 FUNC_8(&VAR_23);
 FUNC_6(&VAR_23, "%s", FUNC_10(VAR_20));
 FUNC_11(VAR_19,
          VAR_10,
          VAR_11,
          VAR_23.data,
          1);
 FUNC_17(VAR_16);
 FUNC_19(VAR_14, VAR_0);




 VAR_21.classId = VAR_8;
 VAR_21.objectId = VAR_13;
 VAR_21.objectSubId = 0;
 FUNC_5(&VAR_21, VAR_9, VAR_19);

 FUNC_9(VAR_19);
 FUNC_9(VAR_18);
}
