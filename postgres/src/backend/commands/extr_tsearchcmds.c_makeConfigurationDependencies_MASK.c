
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int cfgparser; int cfgowner; int cfgnamespace; int oid; } ;
struct TYPE_9__ {int mapdict; } ;
struct TYPE_8__ {scalar_t__ objectSubId; int objectId; int classId; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef scalar_t__ Relation ;
typedef int ObjectAddresses ;
typedef TYPE_1__ ObjectAddress ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_ts_config_map ;
typedef TYPE_3__* Form_pg_ts_config ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 () ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (TYPE_1__*,int *,int ) ;
 int FUNC_13 (scalar_t__,int ,int,int *,int,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static ObjectAddress
FUNC_16(HeapTuple VAR_9, bool VAR_10,
         Relation VAR_11)
{
 Form_pg_ts_config VAR_12 = (Form_pg_ts_config) FUNC_1(VAR_9);
 ObjectAddresses *VAR_13;
 ObjectAddress VAR_14,
    VAR_15;

 VAR_14.classId = VAR_6;
 VAR_14.objectId = VAR_12->oid;
 VAR_14.objectSubId = 0;


 if (VAR_10)
 {
  FUNC_6(VAR_14.classId, VAR_14.objectId, 1);
  FUNC_7(VAR_14.classId, VAR_14.objectId, 0);
 }






 VAR_13 = FUNC_9();


 VAR_15.classId = VAR_4;
 VAR_15.objectId = VAR_12->cfgnamespace;
 VAR_15.objectSubId = 0;
 FUNC_5(&VAR_15, VAR_13);


 FUNC_11(VAR_14.classId, VAR_14.objectId, VAR_12->cfgowner);


 FUNC_10(&VAR_14, VAR_10);


 VAR_15.classId = VAR_8;
 VAR_15.objectId = VAR_12->cfgparser;
 VAR_15.objectSubId = 0;
 FUNC_5(&VAR_15, VAR_13);


 if (VAR_11)
 {
  ScanKeyData VAR_16;
  SysScanDesc VAR_17;
  HeapTuple VAR_18;


  FUNC_0();

  FUNC_4(&VAR_16,
     VAR_0,
     VAR_1, VAR_3,
     FUNC_3(VAR_14.objectId));

  VAR_17 = FUNC_13(VAR_11, VAR_5, 1,
          ((void*)0), 1, &VAR_16);

  while (FUNC_2((VAR_18 = FUNC_15(VAR_17))))
  {
   Form_pg_ts_config_map VAR_19 = (Form_pg_ts_config_map) FUNC_1(VAR_18);

   VAR_15.classId = VAR_7;
   VAR_15.objectId = VAR_19->mapdict;
   VAR_15.objectSubId = 0;
   FUNC_5(&VAR_15, VAR_13);
  }

  FUNC_14(VAR_17);
 }


 FUNC_12(&VAR_14, VAR_13, VAR_2);

 FUNC_8(VAR_13);

 return VAR_14;
}
