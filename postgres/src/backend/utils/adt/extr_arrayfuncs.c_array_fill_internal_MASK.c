
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_7__ {scalar_t__ element_type; int typlen; int typbyval; char typalign; } ;
struct TYPE_6__ {TYPE_1__* flinfo; } ;
struct TYPE_5__ {scalar_t__ fn_extra; int fn_mcxt; } ;
typedef scalar_t__ Oid ;
typedef TYPE_2__* FunctionCallInfo ;
typedef int Datum ;
typedef int ArrayType ;
typedef TYPE_3__ ArrayMetaState ;


 char* FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int,int,char,char*) ;
 int FUNC_7 (int,int*) ;
 int FUNC_8 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int ,int,int ) ;
 int FUNC_14 (int,char) ;
 int * FUNC_15 (scalar_t__) ;
 int * FUNC_16 (int,int*,int*,int,scalar_t__,int) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*,...) ;
 int FUNC_21 (scalar_t__,int*,int*,char*) ;

__attribute__((used)) static ArrayType *
FUNC_22(ArrayType *VAR_8, ArrayType *VAR_9,
     Datum VAR_10, bool VAR_11, Oid VAR_12,
     FunctionCallInfo VAR_13)
{
 ArrayType *VAR_14;
 int *VAR_15;
 int *VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19[VAR_6];
 int16 VAR_20;
 bool VAR_21;
 char VAR_22;
 ArrayMetaState *VAR_23;




 if (FUNC_2(VAR_8) > 1)
  FUNC_17(VAR_4,
    (FUNC_18(VAR_0),
     FUNC_20("wrong number of array subscripts"),
     FUNC_19("Dimension array must be one dimensional.")));

 if (FUNC_12(VAR_8))
  FUNC_17(VAR_4,
    (FUNC_18(VAR_2),
     FUNC_20("dimension values cannot be null")));

 VAR_15 = (int *) FUNC_0(VAR_8);
 VAR_17 = (FUNC_2(VAR_8) > 0) ? FUNC_1(VAR_8)[0] : 0;

 if (VAR_17 < 0)
  FUNC_17(VAR_4,
    (FUNC_18(VAR_1),
     FUNC_20("invalid number of dimensions: %d", VAR_17)));
 if (VAR_17 > VAR_6)
  FUNC_17(VAR_4,
    (FUNC_18(VAR_3),
     FUNC_20("number of array dimensions (%d) exceeds the maximum allowed (%d)",
      VAR_17, VAR_6)));

 if (VAR_9 != ((void*)0))
 {
  if (FUNC_2(VAR_9) > 1)
   FUNC_17(VAR_4,
     (FUNC_18(VAR_0),
      FUNC_20("wrong number of array subscripts"),
      FUNC_19("Dimension array must be one dimensional.")));

  if (FUNC_12(VAR_9))
   FUNC_17(VAR_4,
     (FUNC_18(VAR_2),
      FUNC_20("dimension values cannot be null")));

  if (VAR_17 != ((FUNC_2(VAR_9) > 0) ? FUNC_1(VAR_9)[0] : 0))
   FUNC_17(VAR_4,
     (FUNC_18(VAR_0),
      FUNC_20("wrong number of array subscripts"),
      FUNC_19("Low bound array has different size than dimensions array.")));

  VAR_16 = (int *) FUNC_0(VAR_9);
 }
 else
 {
  int VAR_24;

  for (VAR_24 = 0; VAR_24 < VAR_6; VAR_24++)
   VAR_19[VAR_24] = 1;

  VAR_16 = VAR_19;
 }

 VAR_18 = FUNC_7(VAR_17, VAR_15);


 if (VAR_18 <= 0)
  return FUNC_15(VAR_12);





 VAR_23 = (ArrayMetaState *) VAR_13->flinfo->fn_extra;
 if (VAR_23 == ((void*)0))
 {
  VAR_13->flinfo->fn_extra = FUNC_9(VAR_13->flinfo->fn_mcxt,
               sizeof(ArrayMetaState));
  VAR_23 = (ArrayMetaState *) VAR_13->flinfo->fn_extra;
  VAR_23->element_type = VAR_5;
 }

 if (VAR_23->element_type != VAR_12)
 {

  FUNC_21(VAR_12,
        &VAR_23->typlen,
        &VAR_23->typbyval,
        &VAR_23->typalign);
  VAR_23->element_type = VAR_12;
 }

 VAR_20 = VAR_23->typlen;
 VAR_21 = VAR_23->typbyval;
 VAR_22 = VAR_23->typalign;


 if (!VAR_11)
 {
  int VAR_25;
  char *VAR_26;
  int VAR_27;
  int VAR_28;


  if (VAR_20 == -1)
   VAR_10 = FUNC_11(FUNC_10(VAR_10));

  VAR_27 = FUNC_13(0, VAR_20, VAR_10);
  VAR_27 = FUNC_14(VAR_27, VAR_22);
  FUNC_8(VAR_27 > 0);

  VAR_28 = VAR_27 * VAR_18;


  if (VAR_28 / VAR_27 != VAR_18 ||
   !FUNC_5(VAR_28))
   FUNC_17(VAR_4,
     (FUNC_18(VAR_3),
      FUNC_20("array size exceeds the maximum allowed (%d)",
       (int) VAR_7)));





  VAR_28 += FUNC_3(VAR_17);

  VAR_14 = FUNC_16(VAR_17, VAR_15, VAR_16, VAR_28,
            VAR_12, 0);

  VAR_26 = FUNC_0(VAR_14);
  for (VAR_25 = 0; VAR_25 < VAR_18; VAR_25++)
   VAR_26 += FUNC_6(VAR_10, VAR_20, VAR_21, VAR_22, VAR_26);
 }
 else
 {
  int VAR_29;
  int VAR_30;

  VAR_30 = FUNC_4(VAR_17, VAR_18);
  VAR_29 = VAR_30;

  VAR_14 = FUNC_16(VAR_17, VAR_15, VAR_16, VAR_29,
            VAR_12, VAR_30);


 }

 return VAR_14;
}
