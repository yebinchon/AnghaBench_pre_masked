
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int dim1; int * values; } ;
struct TYPE_10__ {int stxrelid; TYPE_1__ stxkeys; int stxname; int stxnamespace; } ;
struct TYPE_9__ {char* data; } ;
typedef TYPE_2__ StringInfoData ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_statistic_ext ;
typedef int Datum ;
typedef int AttrNumber ;
typedef int ArrayType ;


 scalar_t__ FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_1 ;
 int * FUNC_6 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,int ,int*) ;
 int FUNC_14 (TYPE_2__*,char*,char*) ;
 int FUNC_15 (TYPE_2__*,char) ;
 int FUNC_16 (TYPE_2__*,char*) ;
 int FUNC_17 (int ,char*,...) ;
 char* FUNC_18 (int ,int ) ;
 char* FUNC_19 (int ,int ,int) ;
 char* FUNC_20 (int ) ;
 int FUNC_21 (TYPE_2__*) ;
 char* FUNC_22 (char*) ;
 char* FUNC_23 (char*,int ) ;

__attribute__((used)) static char *
FUNC_24(Oid VAR_8, bool VAR_9)
{
 Form_pg_statistic_ext VAR_10;
 HeapTuple VAR_11;
 StringInfoData VAR_12;
 int VAR_13;
 char *VAR_14;
 ArrayType *VAR_15;
 char *VAR_16;
 Datum VAR_17;
 bool VAR_18;
 bool VAR_19;
 bool VAR_20;
 bool VAR_21;
 int VAR_22;

 VAR_11 = FUNC_12(VAR_4, FUNC_10(VAR_8));

 if (!FUNC_8(VAR_11))
 {
  if (VAR_9)
   return ((void*)0);
  FUNC_17(VAR_2, "cache lookup failed for statistics object %u", VAR_8);
 }

 VAR_10 = (Form_pg_statistic_ext) FUNC_7(VAR_11);

 FUNC_21(&VAR_12);

 VAR_14 = FUNC_20(VAR_10->stxnamespace);
 FUNC_14(&VAR_12, "CREATE STATISTICS %s",
      FUNC_23(VAR_14,
            FUNC_9(VAR_10->stxname)));




 VAR_17 = FUNC_13(VAR_4, VAR_11,
       VAR_0, &VAR_18);
 FUNC_5(!VAR_18);
 VAR_15 = FUNC_6(VAR_17);
 if (FUNC_4(VAR_15) != 1 ||
  FUNC_3(VAR_15) ||
  FUNC_2(VAR_15) != VAR_1)
  FUNC_17(VAR_2, "stxkind is not a 1-D char array");
 VAR_16 = (char *) FUNC_0(VAR_15);

 VAR_19 = 0;
 VAR_20 = 0;
 VAR_21 = 0;

 for (VAR_22 = 0; VAR_22 < FUNC_1(VAR_15)[0]; VAR_22++)
 {
  if (VAR_16[VAR_22] == VAR_7)
   VAR_19 = 1;
  if (VAR_16[VAR_22] == VAR_5)
   VAR_20 = 1;
  if (VAR_16[VAR_22] == VAR_6)
   VAR_21 = 1;
 }
 if (!VAR_19 || !VAR_20 || !VAR_21)
 {
  bool VAR_23 = 0;

  FUNC_16(&VAR_12, " (");

  if (VAR_19)
  {
   FUNC_16(&VAR_12, "ndistinct");
   VAR_23 = 1;
  }

  if (VAR_20)
  {
   FUNC_14(&VAR_12, "%sdependencies", VAR_23 ? ", " : "");
   VAR_23 = 1;
  }

  if (VAR_21)
   FUNC_14(&VAR_12, "%smcv", VAR_23 ? ", " : "");

  FUNC_15(&VAR_12, ')');
 }

 FUNC_16(&VAR_12, " ON ");

 for (VAR_13 = 0; VAR_13 < VAR_10->stxkeys.dim1; VAR_13++)
 {
  AttrNumber VAR_24 = VAR_10->stxkeys.values[VAR_13];
  char *VAR_25;

  if (VAR_13 > 0)
   FUNC_16(&VAR_12, ", ");

  VAR_25 = FUNC_19(VAR_10->stxrelid, VAR_24, 0);

  FUNC_16(&VAR_12, FUNC_22(VAR_25));
 }

 FUNC_14(&VAR_12, " FROM %s",
      FUNC_18(VAR_10->stxrelid, VAR_3));

 FUNC_11(VAR_11);

 return VAR_12.data;
}
