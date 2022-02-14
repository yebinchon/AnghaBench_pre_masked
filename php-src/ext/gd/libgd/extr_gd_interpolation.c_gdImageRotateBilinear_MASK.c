
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {unsigned int width; unsigned int height; } ;
typedef TYPE_1__ gdRect ;
typedef TYPE_2__* gdImagePtr ;
typedef scalar_t__ gdFixed ;
struct TYPE_11__ {int saveAlphaFlag; int** tpixels; } ;


 scalar_t__ FUNC_0 (unsigned int,int ,int) ;
 float const VAR_0 ;
 float FUNC_1 (float) ;
 TYPE_2__* FUNC_2 (unsigned int,unsigned int) ;
 unsigned int FUNC_3 (TYPE_2__*) ;
 unsigned int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,float const,TYPE_1__*) ;
 int FUNC_6 (unsigned char const,unsigned char const,unsigned char const,unsigned char const) ;
 unsigned int const FUNC_7 (int const) ;
 unsigned int const FUNC_8 (int const) ;
 unsigned int const FUNC_9 (int const) ;
 unsigned int const FUNC_10 (int const) ;
 scalar_t__ FUNC_11 (float) ;
 unsigned int FUNC_12 (scalar_t__ const) ;
 scalar_t__ const FUNC_13 (unsigned int const) ;
 scalar_t__ const FUNC_14 (scalar_t__ const,scalar_t__ const) ;
 float FUNC_15 (float) ;

gdImagePtr FUNC_16(gdImagePtr VAR_1, const float VAR_2, const int VAR_3)
{
 float VAR_4 = (float)((- VAR_2 / 180.0f) * VAR_0);
 const unsigned int VAR_5 = FUNC_3(VAR_1);
 const unsigned int VAR_6 = FUNC_4(VAR_1);
 unsigned int VAR_7, VAR_8;
 const gdFixed VAR_9 = FUNC_11(0.5f);
 const gdFixed VAR_10 = FUNC_13(VAR_6/2);
 const gdFixed VAR_11 = FUNC_13(VAR_5/2);
 const gdFixed VAR_12 = FUNC_11(FUNC_1(-VAR_4));
 const gdFixed VAR_13 = FUNC_11(FUNC_15(-VAR_4));
 const gdFixed VAR_14 = FUNC_13(1);
 unsigned int VAR_15;
 unsigned int VAR_16;
 unsigned int VAR_17 = 0;
 unsigned int VAR_18, VAR_19;
 gdImagePtr VAR_20;
 gdRect VAR_21;

 FUNC_5(VAR_1, VAR_2, &VAR_21);

 VAR_7 = VAR_21.width;
 VAR_8 = VAR_21.height;

 VAR_20 = FUNC_2(VAR_7, VAR_8);
 if (VAR_20 == ((void*)0)) {
  return ((void*)0);
 }
 VAR_20->saveAlphaFlag = 1;

 for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
  unsigned int VAR_22;
  VAR_16 = 0;

  for (VAR_22=0; VAR_22 < VAR_7; VAR_22++) {
   const gdFixed VAR_23 = FUNC_13((int)VAR_15 - (int)VAR_8/2);
   const gdFixed VAR_24 = FUNC_13((int)VAR_22 - (int)VAR_7/2);
   const gdFixed VAR_25 = FUNC_14(VAR_24,VAR_13) + FUNC_14(VAR_23,VAR_12) + VAR_9 + VAR_10;
   const gdFixed VAR_26 = FUNC_14(VAR_24,VAR_12) - FUNC_14(VAR_23,VAR_13) + VAR_9 + VAR_11;
   const unsigned int VAR_27 = FUNC_12(VAR_25);
   const unsigned int VAR_28 = FUNC_12(VAR_26);

   if ((VAR_27 >= 0) && (VAR_27 < VAR_6 - 1) && (VAR_28 >= 0) && (VAR_28 < VAR_5 - 1)) {
    const gdFixed VAR_29 = VAR_25 - FUNC_13(VAR_27);
    const gdFixed VAR_30 = VAR_26 - FUNC_13(VAR_28);
    const gdFixed VAR_31 = FUNC_14(VAR_14-VAR_29, VAR_14-VAR_30);
    const gdFixed VAR_32 = FUNC_14(VAR_14-VAR_29, VAR_30);
    const gdFixed VAR_33 = FUNC_14(VAR_29, VAR_14-VAR_30);
    const gdFixed VAR_34 = FUNC_14(VAR_29, VAR_30);

    if (VAR_27 < VAR_6-1) {
     VAR_18 = VAR_28;
     VAR_19 = VAR_27 + 1;
    }

    if (!((VAR_28 >= VAR_5-1) || (VAR_27 >= VAR_6-1))) {
     VAR_18 = VAR_28 + 1;
     VAR_19 = VAR_27 + 1;
    }
    {
     const int VAR_35 = VAR_1->tpixels[VAR_19][VAR_18];
     register int VAR_36, VAR_37, VAR_38;

     if (VAR_19 + 1 >= VAR_6) {
      VAR_36 = VAR_35;
      VAR_37 = VAR_35;
      VAR_38 = VAR_35;
     } else if (VAR_18 + 1 >= VAR_5) {
      VAR_36 = VAR_35;
      VAR_37 = VAR_35;
      VAR_38 = VAR_35;
     } else {
         VAR_36 = VAR_1->tpixels[VAR_19][VAR_18 + 1];
      VAR_37 = VAR_1->tpixels[VAR_19 + 1][VAR_18];
      VAR_38 = VAR_1->tpixels[VAR_19 + 1][VAR_18 + 1];
     }
     {
      const gdFixed VAR_39 = FUNC_13(FUNC_10(VAR_35));
      const gdFixed VAR_40 = FUNC_13(FUNC_10(VAR_36));
      const gdFixed VAR_41 = FUNC_13(FUNC_10(VAR_37));
      const gdFixed VAR_42 = FUNC_13(FUNC_10(VAR_38));
      const gdFixed VAR_43 = FUNC_13(FUNC_9(VAR_35));
      const gdFixed VAR_44 = FUNC_13(FUNC_9(VAR_36));
      const gdFixed VAR_45 = FUNC_13(FUNC_9(VAR_37));
      const gdFixed VAR_46 = FUNC_13(FUNC_9(VAR_38));
      const gdFixed VAR_47 = FUNC_13(FUNC_8(VAR_35));
      const gdFixed VAR_48 = FUNC_13(FUNC_8(VAR_36));
      const gdFixed VAR_49 = FUNC_13(FUNC_8(VAR_37));
      const gdFixed VAR_50 = FUNC_13(FUNC_8(VAR_38));
      const gdFixed VAR_51 = FUNC_13(FUNC_7(VAR_35));
      const gdFixed VAR_52 = FUNC_13(FUNC_7(VAR_36));
      const gdFixed VAR_53 = FUNC_13(FUNC_7(VAR_37));
      const gdFixed VAR_54 = FUNC_13(FUNC_7(VAR_38));
      const gdFixed VAR_55 = FUNC_14(VAR_31, VAR_39) + FUNC_14(VAR_32, VAR_40) + FUNC_14(VAR_33, VAR_41) + FUNC_14(VAR_34, VAR_42);
      const gdFixed VAR_56 = FUNC_14(VAR_31, VAR_43) + FUNC_14(VAR_32, VAR_44) + FUNC_14(VAR_33, VAR_45) + FUNC_14(VAR_34, VAR_46);
      const gdFixed VAR_57 = FUNC_14(VAR_31, VAR_47) + FUNC_14(VAR_32, VAR_48) + FUNC_14(VAR_33, VAR_49) + FUNC_14(VAR_34, VAR_50);
      const gdFixed VAR_58 = FUNC_14(VAR_31, VAR_51) + FUNC_14(VAR_32, VAR_52) + FUNC_14(VAR_33, VAR_53) + FUNC_14(VAR_34, VAR_54);

      const unsigned char VAR_59 = (unsigned char) FUNC_0(FUNC_12(VAR_55), 0, 255);
      const unsigned char VAR_60 = (unsigned char) FUNC_0(FUNC_12(VAR_56), 0, 255);
      const unsigned char VAR_61 = (unsigned char) FUNC_0(FUNC_12(VAR_57), 0, 255);
      const unsigned char VAR_62 = (unsigned char) FUNC_0(FUNC_12(VAR_58), 0, 127);

      VAR_20->tpixels[VAR_17][VAR_16++] = FUNC_6(VAR_59, VAR_60, VAR_61, VAR_62);
     }
    }
   } else {
    VAR_20->tpixels[VAR_17][VAR_16++] = VAR_3;
   }
  }
  VAR_17++;
 }
 return VAR_20;
}
