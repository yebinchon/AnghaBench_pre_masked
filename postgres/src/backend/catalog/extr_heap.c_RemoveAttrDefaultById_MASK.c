
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int adnum; int adrelid; } ;
struct TYPE_10__ {int atthasdef; } ;
struct TYPE_9__ {int t_self; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_attribute ;
typedef TYPE_3__* Form_pg_attrdef ;
typedef int AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 int FUNC_5 (int ) ;
 int VAR_10 ;
 int FUNC_6 (int *,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,char*,int ,...) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int,int *,int,int *) ;
 int FUNC_12 (int ) ;
 TYPE_1__* FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;

void
FUNC_16(Oid VAR_11)
{
 Relation VAR_12;
 Relation VAR_13;
 Relation VAR_14;
 ScanKeyData VAR_15[1];
 SysScanDesc VAR_16;
 HeapTuple VAR_17;
 Oid VAR_18;
 AttrNumber VAR_19;


 VAR_12 = FUNC_15(VAR_4, VAR_10);


 FUNC_6(&VAR_15[0],
    VAR_2,
    VAR_6, VAR_8,
    FUNC_5(VAR_11));

 VAR_16 = FUNC_11(VAR_12, VAR_3, 1,
         ((void*)0), 1, VAR_15);

 VAR_17 = FUNC_13(VAR_16);
 if (!FUNC_3(VAR_17))
  FUNC_8(VAR_7, "could not find tuple for attrdef %u", VAR_11);

 VAR_18 = ((Form_pg_attrdef) FUNC_2(VAR_17))->adrelid;
 VAR_19 = ((Form_pg_attrdef) FUNC_2(VAR_17))->adnum;


 VAR_14 = FUNC_10(VAR_18, VAR_1);


 FUNC_0(VAR_12, &VAR_17->t_self);

 FUNC_12(VAR_16);
 FUNC_14(VAR_12, VAR_10);


 VAR_13 = FUNC_15(VAR_5, VAR_10);

 VAR_17 = FUNC_7(VAR_0,
        FUNC_5(VAR_18),
        FUNC_4(VAR_19));
 if (!FUNC_3(VAR_17))
  FUNC_8(VAR_7, "cache lookup failed for attribute %d of relation %u",
    VAR_19, VAR_18);

 ((Form_pg_attribute) FUNC_2(VAR_17))->atthasdef = 0;

 FUNC_1(VAR_13, &VAR_17->t_self, VAR_17);





 FUNC_14(VAR_13, VAR_10);


 FUNC_9(VAR_14, VAR_9);
}
