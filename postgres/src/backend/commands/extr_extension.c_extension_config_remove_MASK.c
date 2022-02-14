
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int repl_val ;
typedef int repl_repl ;
typedef int repl_null ;
struct TYPE_8__ {int t_self; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef TYPE_1__* HeapTuple ;
typedef int Datum ;
typedef int ArrayType ;


 scalar_t__ FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int *,TYPE_1__*) ;
 int * FUNC_7 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int VAR_10 ;
 int FUNC_12 (int *,int ,int ,int ,int ) ;
 scalar_t__ VAR_11 ;
 int * FUNC_13 (int*,int,scalar_t__,int,int,char) ;
 int FUNC_14 (int *,scalar_t__,int,int,char,int**,int *,int*) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (TYPE_1__*,int,int ,int*) ;
 TYPE_1__* FUNC_17 (TYPE_1__*,int ,int*,int*,int*) ;
 int FUNC_18 (int*,int,int) ;
 int FUNC_19 (int ,int ,int,int *,int,int *) ;
 int FUNC_20 (int ) ;
 TYPE_1__* FUNC_21 (int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ) ;

__attribute__((used)) static void
FUNC_24(Oid VAR_12, Oid VAR_13)
{
 Relation VAR_14;
 ScanKeyData VAR_15[1];
 SysScanDesc VAR_16;
 HeapTuple VAR_17;
 Datum VAR_18;
 int VAR_19;
 int VAR_20;
 bool VAR_21;
 Datum VAR_22[VAR_8];
 bool VAR_23[VAR_8];
 bool VAR_24[VAR_8];
 ArrayType *VAR_25;


 VAR_14 = FUNC_23(VAR_6, VAR_10);

 FUNC_12(&VAR_15[0],
    VAR_2,
    VAR_3, VAR_7,
    FUNC_9(VAR_12));

 VAR_16 = FUNC_19(VAR_14, VAR_5, 1,
         ((void*)0), 1, VAR_15);

 VAR_17 = FUNC_21(VAR_16);

 if (!FUNC_8(VAR_17))
  FUNC_15(VAR_4, "could not find tuple for extension %u",
    VAR_12);


 VAR_18 = FUNC_16(VAR_17, VAR_1,
         FUNC_11(VAR_14), &VAR_21);
 if (VAR_21)
 {

  VAR_25 = ((void*)0);
  VAR_19 = 0;
  VAR_20 = -1;
 }
 else
 {
  Oid *VAR_26;
  int VAR_27;

  VAR_25 = FUNC_7(VAR_18);

  VAR_19 = FUNC_1(VAR_25)[0];
  if (FUNC_5(VAR_25) != 1 ||
   FUNC_4(VAR_25)[0] != 1 ||
   VAR_19 < 0 ||
   FUNC_3(VAR_25) ||
   FUNC_2(VAR_25) != VAR_9)
   FUNC_15(VAR_4, "extconfig is not a 1-D Oid array");
  VAR_26 = (Oid *) FUNC_0(VAR_25);

  VAR_20 = -1;

  for (VAR_27 = 0; VAR_27 < VAR_19; VAR_27++)
  {
   if (VAR_26[VAR_27] == VAR_13)
   {
    VAR_20 = VAR_27;
    break;
   }
  }
 }


 if (VAR_20 < 0)
 {
  FUNC_20(VAR_16);
  FUNC_22(VAR_14, VAR_10);
  return;
 }


 FUNC_18(VAR_22, 0, sizeof(VAR_22));
 FUNC_18(VAR_23, 0, sizeof(VAR_23));
 FUNC_18(VAR_24, 0, sizeof(VAR_24));

 if (VAR_19 <= 1)
 {

  VAR_23[VAR_1 - 1] = 1;
 }
 else
 {

  Datum *VAR_28;
  int VAR_29;
  int VAR_30;


  FUNC_14(VAR_25, VAR_9, sizeof(Oid), 1, 'i',
        &VAR_28, ((void*)0), &VAR_29);

  for (VAR_30 = VAR_20; VAR_30 < VAR_19 - 1; VAR_30++)
   VAR_28[VAR_30] = VAR_28[VAR_30 + 1];

  VAR_25 = FUNC_13(VAR_28, VAR_19 - 1,
       VAR_9, sizeof(Oid), 1, 'i');

  VAR_22[VAR_1 - 1] = FUNC_10(VAR_25);
 }
 VAR_24[VAR_1 - 1] = 1;


 VAR_18 = FUNC_16(VAR_17, VAR_0,
         FUNC_11(VAR_14), &VAR_21);
 if (VAR_21)
 {
  FUNC_15(VAR_4, "extconfig and extcondition arrays do not match");
 }
 else
 {
  VAR_25 = FUNC_7(VAR_18);

  if (FUNC_5(VAR_25) != 1 ||
   FUNC_4(VAR_25)[0] != 1 ||
   FUNC_3(VAR_25) ||
   FUNC_2(VAR_25) != VAR_11)
   FUNC_15(VAR_4, "extcondition is not a 1-D text array");
  if (FUNC_1(VAR_25)[0] != VAR_19)
   FUNC_15(VAR_4, "extconfig and extcondition arrays do not match");
 }

 if (VAR_19 <= 1)
 {

  VAR_23[VAR_0 - 1] = 1;
 }
 else
 {

  Datum *VAR_31;
  int VAR_32;
  int VAR_33;


  FUNC_14(VAR_25, VAR_11, -1, 0, 'i',
        &VAR_31, ((void*)0), &VAR_32);

  for (VAR_33 = VAR_20; VAR_33 < VAR_19 - 1; VAR_33++)
   VAR_31[VAR_33] = VAR_31[VAR_33 + 1];

  VAR_25 = FUNC_13(VAR_31, VAR_19 - 1,
       VAR_11, -1, 0, 'i');

  VAR_22[VAR_0 - 1] = FUNC_10(VAR_25);
 }
 VAR_24[VAR_0 - 1] = 1;

 VAR_17 = FUNC_17(VAR_17, FUNC_11(VAR_14),
          VAR_22, VAR_23, VAR_24);

 FUNC_6(VAR_14, &VAR_17->t_self, VAR_17);

 FUNC_20(VAR_16);

 FUNC_22(VAR_14, VAR_10);
}
