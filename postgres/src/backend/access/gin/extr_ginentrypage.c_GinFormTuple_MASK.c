
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_19__ {int index; int * tupdesc; scalar_t__ oneCol; } ;
struct TYPE_18__ {int t_info; } ;
typedef scalar_t__ Size ;
typedef scalar_t__ Pointer ;
typedef int OffsetNumber ;
typedef TYPE_1__* IndexTuple ;
typedef TYPE_2__ GinState ;
typedef int GinNullCategory ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 char* FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,scalar_t__,scalar_t__,int ) ;
 TYPE_1__* FUNC_16 (int ,int *,int*) ;
 int FUNC_17 (char*,scalar_t__,scalar_t__) ;
 int FUNC_18 (char*,int ,int) ;
 int FUNC_19 (TYPE_1__*) ;
 TYPE_1__* FUNC_20 (TYPE_1__*,int) ;

IndexTuple
FUNC_21(GinState *VAR_5,
    OffsetNumber VAR_6, Datum VAR_7, GinNullCategory VAR_8,
    Pointer VAR_9, Size VAR_10, int VAR_11,
    bool VAR_12)
{
 Datum VAR_13[2];
 bool VAR_14[2];
 IndexTuple VAR_15;
 uint32 VAR_16;


 if (VAR_5->oneCol)
 {
  VAR_13[0] = VAR_7;
  VAR_14[0] = (VAR_8 != VAR_2);
 }
 else
 {
  VAR_13[0] = FUNC_12(VAR_6);
  VAR_14[0] = 0;
  VAR_13[1] = VAR_7;
  VAR_14[1] = (VAR_8 != VAR_2);
 }

 VAR_15 = FUNC_16(VAR_5->tupdesc[VAR_6 - 1], VAR_13, VAR_14);
 VAR_16 = FUNC_7(VAR_15);

 if (FUNC_6(VAR_15))
 {
  uint32 VAR_17;

  FUNC_0(VAR_8 != VAR_2);
  VAR_17 = FUNC_1(VAR_15, VAR_5) + sizeof(GinNullCategory);
  VAR_16 = FUNC_9(VAR_16, VAR_17);
 }

 VAR_16 = FUNC_11(VAR_16);

 FUNC_5(VAR_15, VAR_16);
 FUNC_3(VAR_15, VAR_11);





 VAR_16 += VAR_10;

 VAR_16 = FUNC_8(VAR_16);

 if (VAR_16 > VAR_3)
 {
  if (VAR_12)
   FUNC_13(VAR_1,
     (FUNC_14(VAR_0),
      FUNC_15("index row size %zu exceeds maximum %zu for index \"%s\"",
       (Size) VAR_16, (Size) VAR_3,
       FUNC_10(VAR_5->index))));
  FUNC_19(VAR_15);
  return ((void*)0);
 }




 if (VAR_16 != FUNC_7(VAR_15))
 {
  VAR_15 = FUNC_20(VAR_15, VAR_16);





  FUNC_18((char *) VAR_15 + FUNC_7(VAR_15),
      0, VAR_16 - FUNC_7(VAR_15));

  VAR_15->t_info &= ~VAR_4;
  VAR_15->t_info |= VAR_16;
 }




 if (VAR_9)
 {
  char *VAR_18 = FUNC_2(VAR_15);

  FUNC_17(VAR_18, VAR_9, VAR_10);
 }




 if (VAR_8 != VAR_2)
 {
  FUNC_0(FUNC_6(VAR_15));
  FUNC_4(VAR_15, VAR_5, VAR_8);
 }
 return VAR_15;
}
