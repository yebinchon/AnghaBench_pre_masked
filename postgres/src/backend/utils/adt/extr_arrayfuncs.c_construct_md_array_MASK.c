
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_8__ {int ndim; int elemtype; scalar_t__ dataoffset; } ;
typedef int Oid ;
typedef int Datum ;
typedef TYPE_1__ ArrayType ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,int*) ;
 int FUNC_6 (TYPE_1__*,int *,int*,int,int,int,char,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_11 (scalar_t__,char) ;
 TYPE_1__* FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,int,...) ;
 int FUNC_16 (int ,int*,int) ;
 scalar_t__ FUNC_17 (scalar_t__) ;

ArrayType *
FUNC_18(Datum *VAR_5,
       bool *VAR_6,
       int VAR_7,
       int *VAR_8,
       int *VAR_9,
       Oid VAR_10, int VAR_11, bool VAR_12, char VAR_13)
{
 ArrayType *VAR_14;
 bool VAR_15;
 int32 VAR_16;
 int32 VAR_17;
 int VAR_18;
 int VAR_19;

 if (VAR_7 < 0)
  FUNC_13(VAR_2,
    (FUNC_14(VAR_0),
     FUNC_15("invalid number of dimensions: %d", VAR_7)));
 if (VAR_7 > VAR_3)
  FUNC_13(VAR_2,
    (FUNC_14(VAR_1),
     FUNC_15("number of array dimensions (%d) exceeds the maximum allowed (%d)",
      VAR_7, VAR_3)));

 VAR_19 = FUNC_5(VAR_7, VAR_8);


 if (VAR_19 <= 0)
  return FUNC_12(VAR_10);


 VAR_16 = 0;
 VAR_15 = 0;
 for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++)
 {
  if (VAR_6 && VAR_6[VAR_18])
  {
   VAR_15 = 1;
   continue;
  }

  if (VAR_11 == -1)
   VAR_5[VAR_18] = FUNC_8(FUNC_7(VAR_5[VAR_18]));
  VAR_16 = FUNC_10(VAR_16, VAR_11, VAR_5[VAR_18]);
  VAR_16 = FUNC_11(VAR_16, VAR_13);

  if (!FUNC_4(VAR_16))
   FUNC_13(VAR_2,
     (FUNC_14(VAR_1),
      FUNC_15("array size exceeds the maximum allowed (%d)",
       (int) VAR_4)));
 }


 if (VAR_15)
 {
  VAR_17 = FUNC_3(VAR_7, VAR_19);
  VAR_16 += VAR_17;
 }
 else
 {
  VAR_17 = 0;
  VAR_16 += FUNC_2(VAR_7);
 }
 VAR_14 = (ArrayType *) FUNC_17(VAR_16);
 FUNC_9(VAR_14, VAR_16);
 VAR_14->ndim = VAR_7;
 VAR_14->dataoffset = VAR_17;
 VAR_14->elemtype = VAR_10;
 FUNC_16(FUNC_0(VAR_14), VAR_8, VAR_7 * sizeof(int));
 FUNC_16(FUNC_1(VAR_14), VAR_9, VAR_7 * sizeof(int));

 FUNC_6(VAR_14,
     VAR_5, VAR_6, VAR_19,
     VAR_11, VAR_12, VAR_13,
     0);

 return VAR_14;
}
