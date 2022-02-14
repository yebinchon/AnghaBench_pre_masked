
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef long uint32 ;
struct TYPE_26__ {int root; } ;
struct TYPE_23__ {int * data; } ;
struct TYPE_24__ {TYPE_1__ binary; } ;
struct TYPE_25__ {scalar_t__ type; TYPE_2__ val; } ;
typedef TYPE_3__ JsonbValue ;
typedef int JsonbContainer ;
typedef TYPE_4__ Jsonb ;
typedef int FunctionCallInfo ;
typedef TYPE_4__* Datum ;
typedef int ArrayType ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 long FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,scalar_t__) ;
 int FUNC_10 (TYPE_3__*) ;
 TYPE_4__* FUNC_11 (TYPE_3__*) ;
 int * FUNC_12 (int) ;
 TYPE_4__* FUNC_13 (int ) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;
 int VAR_3 ;
 char* FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (TYPE_4__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_19 (TYPE_4__*) ;
 scalar_t__ FUNC_20 (int *) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int *,int ,int,int,char,TYPE_4__***,int**,int*) ;
 int FUNC_23 (int ,char*) ;
 scalar_t__ VAR_5 ;
 TYPE_3__* FUNC_24 (int *,long) ;
 TYPE_3__* FUNC_25 (int *,int ,scalar_t__,TYPE_3__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 long FUNC_26 (char*,char**,int) ;

__attribute__((used)) static Datum
FUNC_27(FunctionCallInfo VAR_8, bool VAR_9)
{
 Jsonb *VAR_10 = FUNC_13(0);
 ArrayType *VAR_11 = FUNC_12(1);
 Datum *VAR_12;
 bool *VAR_13;
 int VAR_14;
 int VAR_15;
 bool VAR_16 = 0,
    VAR_17 = 0;
 JsonbValue *VAR_18 = ((void*)0);
 JsonbValue VAR_19;
 JsonbContainer *VAR_20;
 if (FUNC_20(VAR_11))
  FUNC_15();

 FUNC_22(VAR_11, VAR_3, -1, 0, 'i',
       &VAR_12, &VAR_13, &VAR_14);


 VAR_20 = &VAR_10->root;

 if (FUNC_3(VAR_10))
  VAR_16 = 1;
 else if (FUNC_2(VAR_10) && !FUNC_4(VAR_10))
  VAR_17 = 1;
 else
 {
  FUNC_0(FUNC_2(VAR_10) && FUNC_4(VAR_10));

  if (VAR_14 <= 0)
   VAR_18 = FUNC_24(VAR_20, 0);
 }
 if (VAR_14 <= 0 && VAR_18 == ((void*)0))
 {
  if (VAR_9)
  {
   FUNC_16(FUNC_21(FUNC_9(((void*)0),
               VAR_20,
               FUNC_19(VAR_10))));
  }
  else
  {

   FUNC_14(VAR_10);
  }
 }

 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
 {
  if (VAR_16)
  {
   VAR_18 = FUNC_25(VAR_20,
            FUNC_18(VAR_12[VAR_15]),
            FUNC_19(VAR_12[VAR_15]) - VAR_4,
            &VAR_19);
  }
  else if (VAR_17)
  {
   long VAR_21;
   uint32 VAR_22;
   char *VAR_23 = FUNC_17(VAR_12[VAR_15]);
   char *VAR_24;

   VAR_5 = 0;
   VAR_21 = FUNC_26(VAR_23, &VAR_24, 10);
   if (VAR_24 == VAR_23 || *VAR_24 != '\0' || VAR_5 != 0 ||
    VAR_21 > VAR_1 || VAR_21 < VAR_2)
    FUNC_15();

   if (VAR_21 >= 0)
   {
    VAR_22 = (uint32) VAR_21;
   }
   else
   {

    uint32 VAR_25;


    if (!FUNC_5(VAR_20))
     FUNC_23(VAR_0, "not a jsonb array");

    VAR_25 = FUNC_8(VAR_20);

    if (-VAR_21 > VAR_25)
     FUNC_15();
    else
     VAR_22 = VAR_25 + VAR_21;
   }

   VAR_18 = FUNC_24(VAR_20, VAR_22);
  }
  else
  {

   FUNC_15();
  }

  if (VAR_18 == ((void*)0))
   FUNC_15();
  else if (VAR_15 == VAR_14 - 1)
   break;

  if (VAR_18->type == VAR_6)
  {
   VAR_20 = VAR_18->val.binary.data;
   VAR_16 = FUNC_6(VAR_20);
   VAR_17 = FUNC_5(VAR_20);
   FUNC_0(!FUNC_7(VAR_20));
  }
  else
  {
   FUNC_0(FUNC_1(VAR_18));
   VAR_16 = 0;
   VAR_17 = 0;
  }
 }

 if (VAR_9)
 {
  if (VAR_18->type == VAR_7)
   FUNC_15();

  FUNC_16(FUNC_10(VAR_18));
 }
 else
 {
  Jsonb *VAR_26 = FUNC_11(VAR_18);


  FUNC_14(VAR_26);
 }
}
