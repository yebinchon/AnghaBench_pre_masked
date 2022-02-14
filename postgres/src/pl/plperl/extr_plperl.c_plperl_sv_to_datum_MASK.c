
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32 ;
typedef scalar_t__ TypeFuncClass ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_11__ {TYPE_1__* prodesc; } ;
struct TYPE_10__ {scalar_t__ tdtypeid; } ;
struct TYPE_9__ {int trftypes; int lang_oid; } ;
typedef int SV ;
typedef scalar_t__ Oid ;
typedef scalar_t__ FunctionCallInfo ;
typedef int FmgrInfo ;
typedef int Datum ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (scalar_t__,int *,scalar_t__*) ;
 int FUNC_10 () ;
 TYPE_6__* VAR_8 ;
 int FUNC_11 (int ,int,scalar_t__,int *,int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__*,TYPE_2__**) ;
 int * FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (scalar_t__,int ,int ) ;
 TYPE_2__* FUNC_19 (scalar_t__,int ,int) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (int *,scalar_t__,int ) ;
 int FUNC_22 (int *,TYPE_2__*) ;
 char* FUNC_23 (int *) ;
 int FUNC_24 (scalar_t__) ;

__attribute__((used)) static Datum
FUNC_25(SV *VAR_9, Oid VAR_10, int32 VAR_11,
       FunctionCallInfo VAR_12,
       FmgrInfo *VAR_13, Oid VAR_14,
       bool *VAR_15)
{
 FmgrInfo VAR_16;
 Oid VAR_17;


 FUNC_10();

 *VAR_15 = 0;






 if (!VAR_9 || !FUNC_5(VAR_9) || VAR_10 == VAR_7)
 {

  if (!VAR_13)
  {
   FUNC_9(VAR_10, &VAR_16, &VAR_14);
   VAR_13 = &VAR_16;
  }
  *VAR_15 = 1;

  return FUNC_1(VAR_13, ((void*)0), VAR_14, VAR_11);
 }
 else if ((VAR_17 = FUNC_18(VAR_10, VAR_8->prodesc->lang_oid, VAR_8->prodesc->trftypes)))
  return FUNC_2(VAR_17, FUNC_3(VAR_9));
 else if (FUNC_6(VAR_9))
 {

  SV *VAR_18 = FUNC_17(VAR_9);

  if (VAR_18)
  {

   return FUNC_21(VAR_18, VAR_10, VAR_11);
  }
  else if (FUNC_8(FUNC_7(VAR_9)) == VAR_3)
  {

   Datum VAR_19;
   TupleDesc VAR_20;
   bool VAR_21;

   if (!FUNC_24(VAR_10))
    FUNC_12(VAR_2,
      (FUNC_13(VAR_0),
       FUNC_14("cannot convert Perl hash to non-composite type %s",
        FUNC_15(VAR_10))));

   VAR_20 = FUNC_19(VAR_10, VAR_11, 1);
   if (VAR_20 != ((void*)0))
   {

    VAR_21 = (VAR_10 != VAR_20->tdtypeid);
   }
   else
   {

    TypeFuncClass VAR_22;

    if (VAR_12)
     VAR_22 = FUNC_16(VAR_12, &VAR_10, &VAR_20);
    else
     VAR_22 = VAR_6;
    if (VAR_22 != VAR_4 &&
     VAR_22 != VAR_5)
     FUNC_12(VAR_2,
       (FUNC_13(VAR_1),
        FUNC_14("function returning record called in context "
         "that cannot accept type record")));
    FUNC_0(VAR_20);
    VAR_21 = (VAR_22 == VAR_5);
   }

   VAR_19 = FUNC_22(VAR_9, VAR_20);

   if (VAR_21)
    FUNC_11(VAR_19, 0, VAR_10, ((void*)0), ((void*)0));


   FUNC_4(VAR_20);

   return VAR_19;
  }





  return FUNC_25(FUNC_7(VAR_9), VAR_10, VAR_11,
          VAR_12, VAR_13, VAR_14,
          VAR_15);
 }
 else
 {

  Datum VAR_23;
  char *VAR_24 = FUNC_23(VAR_9);


  if (!VAR_13)
  {
   FUNC_9(VAR_10, &VAR_16, &VAR_14);
   VAR_13 = &VAR_16;
  }

  VAR_23 = FUNC_1(VAR_13, VAR_24, VAR_14, VAR_11);
  FUNC_20(VAR_24);

  return VAR_23;
 }
}
