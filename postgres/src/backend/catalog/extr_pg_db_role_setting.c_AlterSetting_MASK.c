
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int repl_repl ;
typedef int nulls ;
struct TYPE_13__ {scalar_t__ kind; int name; } ;
typedef TYPE_1__ VariableSetStmt ;
struct TYPE_14__ {int t_self; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_2__* HeapTuple ;
typedef int Datum ;
typedef int ArrayType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,int *,TYPE_2__*) ;
 int * FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_4 (TYPE_1__*) ;
 int VAR_6 ;
 int * FUNC_5 (int *,int ,char*) ;
 int * FUNC_6 (int *,int ) ;
 int * FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,int ,int ,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int VAR_9 ;
 int FUNC_13 (int *,int,int ,int ,int ) ;
 scalar_t__ VAR_10 ;
 TYPE_2__* FUNC_14 (int ,int *,int*) ;
 int FUNC_15 (TYPE_2__*,int,int ,int*) ;
 TYPE_2__* FUNC_16 (TYPE_2__*,int ,int *,int*,int*) ;
 int FUNC_17 (int*,int,int) ;
 int FUNC_18 (int ,int ,int,int *,int,int *) ;
 int FUNC_19 (int ) ;
 TYPE_2__* FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ) ;

void
FUNC_23(Oid VAR_11, Oid VAR_12, VariableSetStmt *VAR_13)
{
 char *VAR_14;
 HeapTuple VAR_15;
 Relation VAR_16;
 ScanKeyData VAR_17[2];
 SysScanDesc VAR_18;

 VAR_14 = FUNC_4(VAR_13);



 VAR_16 = FUNC_22(VAR_5, VAR_9);
 FUNC_13(&VAR_17[0],
    VAR_1,
    VAR_3, VAR_6,
    FUNC_10(VAR_11));
 FUNC_13(&VAR_17[1],
    VAR_2,
    VAR_3, VAR_6,
    FUNC_10(VAR_12));
 VAR_18 = FUNC_18(VAR_16, VAR_4, 1,
         ((void*)0), 2, VAR_17);
 VAR_15 = FUNC_20(VAR_18);
 if (VAR_13->kind == VAR_10)
 {
  if (FUNC_8(VAR_15))
  {
   ArrayType *VAR_19 = ((void*)0);
   Datum VAR_20;
   bool VAR_21;

   VAR_20 = FUNC_15(VAR_15, VAR_0,
         FUNC_12(VAR_16), &VAR_21);

   if (!VAR_21)
    VAR_19 = FUNC_7(FUNC_3(VAR_20));

   if (VAR_19)
   {
    Datum VAR_22[VAR_7];
    bool VAR_23[VAR_7];
    bool VAR_24[VAR_7];
    HeapTuple VAR_25;

    FUNC_17(VAR_24, 0, sizeof(VAR_24));

    VAR_22[VAR_0 - 1] =
     FUNC_11(VAR_19);
    VAR_24[VAR_0 - 1] = 1;
    VAR_23[VAR_0 - 1] = 0;

    VAR_25 = FUNC_16(VAR_15, FUNC_12(VAR_16),
            VAR_22, VAR_23, VAR_24);
    FUNC_2(VAR_16, &VAR_15->t_self, VAR_25);
   }
   else
    FUNC_0(VAR_16, &VAR_15->t_self);
  }
 }
 else if (FUNC_8(VAR_15))
 {
  Datum VAR_26[VAR_7];
  bool VAR_27[VAR_7];
  bool VAR_28[VAR_7];
  HeapTuple VAR_29;
  Datum VAR_30;
  bool VAR_31;
  ArrayType *VAR_32;

  FUNC_17(VAR_28, 0, sizeof(VAR_28));
  VAR_28[VAR_0 - 1] = 1;
  VAR_27[VAR_0 - 1] = 0;


  VAR_30 = FUNC_15(VAR_15, VAR_0,
        FUNC_12(VAR_16), &VAR_31);
  VAR_32 = VAR_31 ? ((void*)0) : FUNC_3(VAR_30);


  if (VAR_14)
   VAR_32 = FUNC_5(VAR_32, VAR_13->name, VAR_14);
  else
   VAR_32 = FUNC_6(VAR_32, VAR_13->name);

  if (VAR_32)
  {
   VAR_26[VAR_0 - 1] =
    FUNC_11(VAR_32);

   VAR_29 = FUNC_16(VAR_15, FUNC_12(VAR_16),
           VAR_26, VAR_27, VAR_28);
   FUNC_2(VAR_16, &VAR_15->t_self, VAR_29);
  }
  else
   FUNC_0(VAR_16, &VAR_15->t_self);
 }
 else if (VAR_14)
 {

  HeapTuple VAR_33;
  Datum VAR_34[VAR_7];
  bool VAR_35[VAR_7];
  ArrayType *VAR_36;

  FUNC_17(VAR_35, 0, sizeof(VAR_35));

  VAR_36 = FUNC_5(((void*)0), VAR_13->name, VAR_14);

  VAR_34[VAR_1 - 1] =
   FUNC_10(VAR_11);
  VAR_34[VAR_2 - 1] = FUNC_10(VAR_12);
  VAR_34[VAR_0 - 1] = FUNC_11(VAR_36);
  VAR_33 = FUNC_14(FUNC_12(VAR_16), VAR_34, VAR_35);

  FUNC_1(VAR_16, VAR_33);
 }

 FUNC_9(VAR_5,
         VAR_11, 0, VAR_12, 0);

 FUNC_19(VAR_18);


 FUNC_21(VAR_16, VAR_8);
}
