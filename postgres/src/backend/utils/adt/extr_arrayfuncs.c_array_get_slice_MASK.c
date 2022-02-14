
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ int32 ;
typedef int bits8 ;
struct TYPE_13__ {int ndim; int elemtype; scalar_t__ dataoffset; } ;
typedef int Oid ;
typedef int Datum ;
typedef TYPE_1__ ArrayType ;


 char* FUNC_0 (TYPE_1__*) ;
 int* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int,int ) ;
 int FUNC_8 (int,int*) ;
 TYPE_1__* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (TYPE_1__*,int,int*,int*,char*,int *,int*,int*,int,int,char) ;
 int FUNC_14 (char*,int *,int,int*,int*,int*,int*,int,int,char) ;
 TYPE_1__* FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int,int*,int*,int*) ;
 int FUNC_20 (int*,int*,int) ;
 scalar_t__ FUNC_21 (int) ;

Datum
FUNC_22(Datum VAR_4,
    int VAR_5,
    int *VAR_6,
    int *VAR_7,
    bool *VAR_8,
    bool *VAR_9,
    int VAR_10,
    int VAR_11,
    bool VAR_12,
    char VAR_13)
{
 ArrayType *VAR_14;
 ArrayType *VAR_15;
 int VAR_16,
    VAR_17,
      *VAR_18,
      *VAR_19,
      *VAR_20;
 int VAR_21[1],
    VAR_22[1];
 Oid VAR_23;
 char *VAR_24;
 bits8 *VAR_25;
 int32 VAR_26;
 int VAR_27,
    VAR_28[VAR_3];

 if (VAR_10 > 0)
 {






  FUNC_16(VAR_1,
    (FUNC_17(VAR_0),
     FUNC_18("slices of fixed-length arrays not implemented")));






  VAR_17 = 1;
  VAR_21[0] = VAR_10 / VAR_11;
  VAR_22[0] = 0;
  VAR_18 = VAR_21;
  VAR_19 = VAR_22;
  VAR_23 = VAR_2;
  VAR_24 = (char *) FUNC_10(VAR_4);
  VAR_25 = ((void*)0);
 }
 else
 {

  VAR_14 = FUNC_9(VAR_4);

  VAR_17 = FUNC_4(VAR_14);
  VAR_18 = FUNC_1(VAR_14);
  VAR_19 = FUNC_3(VAR_14);
  VAR_23 = FUNC_2(VAR_14);
  VAR_24 = FUNC_0(VAR_14);
  VAR_25 = FUNC_5(VAR_14);
 }






 if (VAR_17 < VAR_5 || VAR_17 <= 0 || VAR_17 > VAR_3)
  return FUNC_11(FUNC_15(VAR_23));

 for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16++)
 {
  if (!VAR_9[VAR_16] || VAR_7[VAR_16] < VAR_19[VAR_16])
   VAR_7[VAR_16] = VAR_19[VAR_16];
  if (!VAR_8[VAR_16] || VAR_6[VAR_16] >= (VAR_18[VAR_16] + VAR_19[VAR_16]))
   VAR_6[VAR_16] = VAR_18[VAR_16] + VAR_19[VAR_16] - 1;
  if (VAR_7[VAR_16] > VAR_6[VAR_16])
   return FUNC_11(FUNC_15(VAR_23));
 }

 for (; VAR_16 < VAR_17; VAR_16++)
 {
  VAR_7[VAR_16] = VAR_19[VAR_16];
  VAR_6[VAR_16] = VAR_18[VAR_16] + VAR_19[VAR_16] - 1;
  if (VAR_7[VAR_16] > VAR_6[VAR_16])
   return FUNC_11(FUNC_15(VAR_23));
 }

 FUNC_19(VAR_17, VAR_28, VAR_7, VAR_6);

 VAR_27 = FUNC_14(VAR_24, VAR_25,
        VAR_17, VAR_18, VAR_19,
        VAR_7, VAR_6,
        VAR_11, VAR_12, VAR_13);





 if (VAR_25)
 {
  VAR_26 = FUNC_7(VAR_17, FUNC_8(VAR_17, VAR_28));
  VAR_27 += VAR_26;
 }
 else
 {
  VAR_26 = 0;
  VAR_27 += FUNC_6(VAR_17);
 }

 VAR_15 = (ArrayType *) FUNC_21(VAR_27);
 FUNC_12(VAR_15, VAR_27);
 VAR_15->ndim = VAR_17;
 VAR_15->dataoffset = VAR_26;
 VAR_15->elemtype = VAR_23;
 FUNC_20(FUNC_1(VAR_15), VAR_28, VAR_17 * sizeof(int));





 VAR_20 = FUNC_3(VAR_15);
 for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++)
  VAR_20[VAR_16] = 1;

 FUNC_13(VAR_15,
      VAR_17, VAR_18, VAR_19,
      VAR_24, VAR_25,
      VAR_7, VAR_6,
      VAR_11, VAR_12, VAR_13);

 return FUNC_11(VAR_15);
}
