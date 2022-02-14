
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int valuesAtt ;
typedef int replacesAtt ;
typedef int nullsAtt ;
struct TYPE_11__ {int atttypmod; int atttypid; } ;
struct TYPE_10__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_attribute ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int*,int,int) ;
 int VAR_6 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_7 ;
 TYPE_1__* FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,char*,char*,int ) ;
 TYPE_1__* FUNC_13 (TYPE_1__*,int ,int*,int*,int*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;

void
FUNC_16(Oid VAR_8, char *VAR_9, char *VAR_10)
{
 Datum VAR_11[VAR_6];
 bool VAR_12[VAR_6];
 bool VAR_13[VAR_6];
 Datum VAR_14;
 Form_pg_attribute VAR_15;
 Relation VAR_16,
    VAR_17;
 HeapTuple VAR_18,
    VAR_19;


 VAR_17 = FUNC_15(VAR_8, VAR_0);


 VAR_16 = FUNC_15(VAR_3, VAR_7);
 VAR_18 = FUNC_11(VAR_8, VAR_9);
 if (!FUNC_4(VAR_18))
  FUNC_12(VAR_4, "cache lookup failed for attribute %s of relation %u",
    VAR_9, VAR_8);
 VAR_15 = (Form_pg_attribute) FUNC_3(VAR_18);


 VAR_14 = FUNC_8(VAR_5,
          FUNC_1(VAR_10),
          FUNC_7(VAR_15->atttypid),
          FUNC_5(VAR_15->atttypmod));


 FUNC_6(VAR_11, 0, sizeof(VAR_11));
 FUNC_6(VAR_12, 0, sizeof(VAR_12));
 FUNC_6(VAR_13, 0, sizeof(VAR_13));

 VAR_11[VAR_1 - 1] = FUNC_0(1);
 VAR_13[VAR_1 - 1] = 1;
 VAR_11[VAR_2 - 1] = VAR_14;
 VAR_13[VAR_2 - 1] = 1;

 VAR_19 = FUNC_13(VAR_18, FUNC_9(VAR_16),
          VAR_11, VAR_12, VAR_13);
 FUNC_2(VAR_16, &VAR_19->t_self, VAR_19);


 FUNC_10(VAR_18);
 FUNC_14(VAR_16, VAR_7);
 FUNC_14(VAR_17, VAR_0);
}
