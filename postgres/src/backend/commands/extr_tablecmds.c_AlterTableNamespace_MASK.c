
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_14__ {int relname; } ;
struct TYPE_13__ {int newschema; TYPE_8__* relation; scalar_t__ missing_ok; } ;
struct TYPE_12__ {TYPE_1__* rd_rel; } ;
struct TYPE_11__ {scalar_t__ relkind; } ;
typedef TYPE_2__* Relation ;
typedef int RangeVar ;
typedef int Oid ;
typedef int ObjectAddresses ;
typedef int ObjectAddress ;
typedef TYPE_3__ AlterObjectSchemaStmt ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (TYPE_8__*,int ,int ,int ,void*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_11 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int ,int ) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (int ,int ,int) ;
 int * FUNC_15 () ;
 int FUNC_16 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_17 (int ,int ) ;
 scalar_t__ FUNC_18 (int ,int ,int *,int *) ;

ObjectAddress
FUNC_19(AlterObjectSchemaStmt *VAR_12, Oid *VAR_13)
{
 Relation VAR_14;
 Oid VAR_15;
 Oid VAR_16;
 Oid VAR_17;
 RangeVar *VAR_18;
 ObjectAddresses *VAR_19;
 ObjectAddress VAR_20;

 VAR_15 = FUNC_5(VAR_12->relation, VAR_0,
          VAR_12->missing_ok ? VAR_9 : 0,
          VAR_10,
          (void *) VAR_12);

 if (!FUNC_3(VAR_15))
 {
  FUNC_8(VAR_6,
    (FUNC_11("relation \"%s\" does not exist, skipping",
      VAR_12->relation->relname)));
  return VAR_5;
 }

 VAR_14 = FUNC_17(VAR_15, VAR_7);

 VAR_16 = FUNC_6(VAR_14);


 if (VAR_14->rd_rel->relkind == VAR_8)
 {
  Oid VAR_21;
  int32 VAR_22;

  if (FUNC_18(VAR_15, VAR_1, &VAR_21, &VAR_22) ||
   FUNC_18(VAR_15, VAR_2, &VAR_21, &VAR_22))
   FUNC_8(VAR_4,
     (FUNC_9(VAR_3),
      FUNC_11("cannot move an owned sequence into another schema"),
      FUNC_10("Sequence \"%s\" is linked to table \"%s\".",
          FUNC_7(VAR_14),
          FUNC_13(VAR_21))));
 }


 VAR_18 = FUNC_14(VAR_12->newschema, FUNC_7(VAR_14), -1);
 VAR_17 = FUNC_4(VAR_18, VAR_7, ((void*)0));


 FUNC_1(VAR_16, VAR_17);

 VAR_19 = FUNC_15();
 FUNC_0(VAR_14, VAR_16, VAR_17, VAR_19);
 FUNC_12(VAR_19);

 FUNC_2(VAR_20, VAR_11, VAR_15);

 if (VAR_13)
  *VAR_13 = VAR_16;


 FUNC_16(VAR_14, VAR_7);

 return VAR_20;
}
