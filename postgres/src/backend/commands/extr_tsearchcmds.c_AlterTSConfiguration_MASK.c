
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ tokentype; scalar_t__ dicts; int cfgname; } ;
struct TYPE_6__ {int oid; } ;
typedef int Relation ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_ts_config ;
typedef TYPE_2__ AlterTSConfigurationStmt ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (int ,int,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;

ObjectAddress
FUNC_18(AlterTSConfigurationStmt *VAR_7)
{
 HeapTuple VAR_8;
 Oid VAR_9;
 Relation VAR_10;
 ObjectAddress VAR_11;


 VAR_8 = FUNC_2(VAR_7->cfgname);
 if (!FUNC_4(VAR_8))
  FUNC_11(VAR_2,
    (FUNC_12(VAR_1),
     FUNC_13("text search configuration \"%s\" does not exist",
      FUNC_7(VAR_7->cfgname))));

 VAR_9 = ((Form_pg_ts_config) FUNC_1(VAR_8))->oid;


 if (!FUNC_15(VAR_9, FUNC_3()))
  FUNC_10(VAR_0, VAR_3,
        FUNC_7(VAR_7->cfgname));

 VAR_10 = FUNC_17(VAR_5, VAR_4);


 if (VAR_7->dicts)
  FUNC_6(VAR_7, VAR_8, VAR_10);
 else if (VAR_7->tokentype)
  FUNC_0(VAR_7, VAR_8, VAR_10);


 FUNC_14(VAR_8, 1, VAR_10);

 FUNC_5(VAR_6, VAR_9, 0);

 FUNC_8(VAR_11, VAR_6, VAR_9);

 FUNC_16(VAR_10, VAR_4);

 FUNC_9(VAR_8);

 return VAR_11;
}
