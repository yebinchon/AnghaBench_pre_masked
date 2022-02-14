
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int datname; } ;
struct TYPE_9__ {scalar_t__ objectSubId; int objectId; void* classId; } ;
struct TYPE_8__ {int data; } ;
typedef int SysScanDesc ;
typedef TYPE_1__ StringInfoData ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_2__ ObjectAddress ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_database ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char const* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ,char*) ;
 int VAR_11 ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (char const*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (char*,int ,int ,int ,int) ;
 char* FUNC_14 (int ,char*,int ,char const*) ;
 int FUNC_15 () ;
 char* FUNC_16 (void*,int ,scalar_t__) ;
 int FUNC_17 (int ,int ,int,int ,int,int *) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (void*,int ) ;

void
FUNC_22(Oid VAR_12, const char *VAR_13)
{
 Relation VAR_14;
 ScanKeyData VAR_15;
 SysScanDesc VAR_16;
 HeapTuple VAR_17;
 char *VAR_18;
 char *VAR_19;
 ObjectAddress VAR_20;
 Form_pg_database VAR_21;
 StringInfoData VAR_22;






 if (!VAR_13)
  VAR_13 = "template1";

 VAR_20.classId = VAR_4;
 VAR_20.objectId = FUNC_8(VAR_13, 0);
 VAR_20.objectSubId = 0;

 VAR_18 = FUNC_16(VAR_20.classId,
         VAR_20.objectId,
         VAR_20.objectSubId);




 FUNC_9(&VAR_22);
 FUNC_6(&VAR_22, FUNC_11(VAR_13));
 FUNC_13(VAR_18,
          VAR_8,
          VAR_10,
          VAR_22.data,
          1);
 VAR_14 = FUNC_21(VAR_4, VAR_0);

 FUNC_4(&VAR_15,
    VAR_1,
    VAR_2, VAR_6,
    FUNC_3(VAR_12));

 VAR_16 = FUNC_17(VAR_14, VAR_3, 1,
          VAR_11, 1, &VAR_15);
 VAR_17 = FUNC_19(VAR_16);
 if (!FUNC_1(VAR_17))
  FUNC_7(VAR_5, "could not find tuple for database %u", VAR_12);

 VAR_21 = (Form_pg_database) FUNC_0(VAR_17);

 VAR_19 = FUNC_14(FUNC_15(),
           VAR_18,
           VAR_8,
           FUNC_2(VAR_21->datname));




 FUNC_12(&VAR_22);
 FUNC_6(&VAR_22,
         FUNC_11(FUNC_2(VAR_21->datname)));
 FUNC_13(VAR_19,
          VAR_8,
          VAR_9,
          VAR_22.data,
          1);

 FUNC_18(VAR_16);
 FUNC_20(VAR_14, VAR_0);




 VAR_20.classId = VAR_4;
 VAR_20.objectId = VAR_12;
 VAR_20.objectSubId = 0;

 FUNC_5(&VAR_20, VAR_7, VAR_19);

 FUNC_10(VAR_19);
 FUNC_10(VAR_18);
}
