
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int width; int height; } ;
typedef TYPE_1__ gdRect ;
typedef TYPE_2__* gdImagePtr ;
typedef scalar_t__ gdFixed ;
struct TYPE_12__ {int saveAlphaFlag; int** tpixels; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const,int) ;
 float FUNC_1 (float) ;
 TYPE_2__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,float const,TYPE_1__*) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (scalar_t__ const,scalar_t__ const) ;
 scalar_t__ FUNC_8 (float) ;
 int FUNC_9 (scalar_t__ const) ;
 long FUNC_10 (scalar_t__) ;
 void* FUNC_11 (int const) ;
 scalar_t__ const FUNC_12 (scalar_t__,scalar_t__ const) ;
 void* FUNC_13 (TYPE_2__*,long,long,int const) ;
 float FUNC_14 (float) ;

gdImagePtr FUNC_15(gdImagePtr VAR_1, const float VAR_2, const int VAR_3)
{
 float VAR_4 = ((float) (-VAR_2 / 180.0f) * (float)VAR_0);
 const int VAR_5 = FUNC_3(VAR_1);
 const int VAR_6 = FUNC_4(VAR_1);
 const gdFixed VAR_7 = FUNC_8(0.5f);
 const gdFixed VAR_8 = FUNC_11(VAR_6/2);
 const gdFixed VAR_9 = FUNC_11(VAR_5/2);
 const gdFixed VAR_10 = FUNC_8(FUNC_1(-VAR_4));
 const gdFixed VAR_11 = FUNC_8(FUNC_14(-VAR_4));

 unsigned int VAR_12;
 unsigned int VAR_13 = 0;
 unsigned int VAR_14;
 gdImagePtr VAR_15;
 int VAR_16, VAR_17;
 gdRect VAR_18;

 const gdFixed VAR_19 = VAR_11;
 const gdFixed VAR_20 = VAR_10;
 const gdFixed VAR_21 = VAR_20 > 0 && VAR_19 > 0 ?
       (VAR_20 > VAR_19 ? FUNC_7(VAR_19, VAR_20) : FUNC_7(VAR_20, VAR_19))
      : 0;


 if (VAR_3 < 0) {
  return ((void*)0);
 }

    FUNC_5(VAR_1, VAR_2, &VAR_18);
    VAR_16 = VAR_18.width;
    VAR_17 = VAR_18.height;

 VAR_15 = FUNC_2(VAR_16, VAR_17);
 if (!VAR_15) {
  return ((void*)0);
 }
 VAR_15->saveAlphaFlag = 1;

 for (VAR_14 = 0; VAR_14 < VAR_17; VAR_14++) {
  unsigned int VAR_22;
  VAR_12 = 0;
  for (VAR_22 = 0; VAR_22 < VAR_16; VAR_22++) {
   gdFixed VAR_23 = FUNC_11((int)VAR_14 - (int)VAR_17/ 2);
   gdFixed VAR_24 = FUNC_11((int)VAR_22 - (int)VAR_16 / 2);
   gdFixed VAR_25 = FUNC_12(VAR_24,VAR_11) + FUNC_12(VAR_23,VAR_10) + VAR_7 + VAR_8;
   gdFixed VAR_26 = FUNC_12(VAR_24,VAR_10) - FUNC_12(VAR_23,VAR_11) + VAR_7 + VAR_9;
   long VAR_27 = FUNC_10(VAR_25);
   long VAR_28 = FUNC_10(VAR_26);

   if ((VAR_28 <= 0) || (VAR_27 <= 0) || (VAR_27 >= VAR_6) || (VAR_28 >= VAR_5)) {
    VAR_15->tpixels[VAR_13][VAR_12++] = VAR_3;
   } else if ((VAR_28 <= 1) || (VAR_27 <= 1) || (VAR_27 >= VAR_6 - 1) || (VAR_28 >= VAR_5 - 1)) {
    register int VAR_29 = FUNC_13(VAR_1, VAR_28, VAR_27, VAR_3);
    VAR_29 = VAR_29 | (( FUNC_6(VAR_29) + ((int)(127* FUNC_9(VAR_21)))) << 24);

    VAR_15->tpixels[VAR_13][VAR_12++] = FUNC_0(VAR_3, VAR_29);
   } else {
    VAR_15->tpixels[VAR_13][VAR_12++] = FUNC_13(VAR_1, VAR_28, VAR_27, VAR_3);
   }
  }
  VAR_13++;
 }
 return VAR_15;
}
