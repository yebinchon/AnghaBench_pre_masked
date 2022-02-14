
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int repl_val ;
typedef int repl_repl ;
typedef int repl_null ;
struct TYPE_11__ {int stxstattarget; int defnames; int missing_ok; } ;
struct TYPE_10__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef TYPE_1__* HeapTuple ;
typedef int Datum ;
typedef TYPE_2__ AlterStatsStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 int FUNC_2 (int ,char**,char**) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* FUNC_12 (int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (TYPE_1__*) ;
 TYPE_1__* FUNC_19 (TYPE_1__*,int ,int*,int*,int*) ;
 int FUNC_20 (int*,int,int) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ) ;

ObjectAddress
FUNC_24(AlterStatsStmt *VAR_12)
{
 Relation VAR_13;
 Oid VAR_14;
 HeapTuple VAR_15;
 HeapTuple VAR_16;
 Datum VAR_17[VAR_6];
 bool VAR_18[VAR_6];
 bool VAR_19[VAR_6];
 ObjectAddress VAR_20;
 int VAR_21 = VAR_12->stxstattarget;


 if (VAR_21 < -1)
 {
  FUNC_14(VAR_3,
    (FUNC_15(VAR_2),
     FUNC_16("statistics target %d is too low",
      VAR_21)));
 }
 else if (VAR_21 > 10000)
 {
  VAR_21 = 10000;
  FUNC_14(VAR_11,
    (FUNC_15(VAR_2),
     FUNC_16("lowering statistics target to %d",
      VAR_21)));
 }


 VAR_14 = FUNC_17(VAR_12->defnames, VAR_12->missing_ok);






 if (!FUNC_9(VAR_14))
 {
  char *VAR_22;
  char *VAR_23;

  FUNC_0(VAR_12->missing_ok);

  FUNC_2(VAR_12->defnames, &VAR_22, &VAR_23);

  if (VAR_22)
   FUNC_14(VAR_5,
     (FUNC_16("statistics object \"%s.%s\" does not exist, skipping",
       VAR_22, VAR_23)));
  else
   FUNC_14(VAR_5,
     (FUNC_16("statistics object \"%s\" does not exist, skipping",
       VAR_23)));

  return VAR_4;
 }


 VAR_13 = FUNC_23(VAR_10, VAR_8);

 VAR_15 = FUNC_12(VAR_9, FUNC_8(VAR_14));


 if (!FUNC_21(VAR_14, FUNC_3()))
  FUNC_13(VAR_0, VAR_7,
        FUNC_6(VAR_12->defnames));


 FUNC_20(VAR_17, 0, sizeof(VAR_17));
 FUNC_20(VAR_18, 0, sizeof(VAR_18));
 FUNC_20(VAR_19, 0, sizeof(VAR_19));


 VAR_19[VAR_1 - 1] = 1;
 VAR_17[VAR_1 - 1] = FUNC_4(VAR_21);

 VAR_16 = FUNC_19(VAR_15, FUNC_10(VAR_13),
          VAR_17, VAR_18, VAR_19);


 FUNC_1(VAR_13, &VAR_16->t_self, VAR_16);

 FUNC_5(VAR_10, VAR_14, 0);

 FUNC_7(VAR_20, VAR_10, VAR_14);






 FUNC_18(VAR_16);
 FUNC_11(VAR_15);

 FUNC_22(VAR_13, VAR_8);

 return VAR_20;
}
