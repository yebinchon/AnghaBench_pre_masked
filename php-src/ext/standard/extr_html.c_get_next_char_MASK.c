
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum entity_charset { ____Placeholder_entity_charset } entity_charset ;


 int FUNC_0 (size_t,int) ;
 int FUNC_1 (size_t,int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;






 int FUNC_3 (unsigned char) ;
 int FUNC_4 (unsigned char) ;
 int FUNC_5 (unsigned char) ;
 int FUNC_6 (unsigned char) ;
 int FUNC_7 (unsigned char const) ;
 int FUNC_8 (unsigned char const) ;

__attribute__((used)) static inline unsigned int FUNC_9(
  enum entity_charset VAR_1,
  const unsigned char *VAR_2,
  size_t VAR_3,
  size_t *VAR_4,
  int *VAR_5)
{
 size_t VAR_6 = *VAR_4;
 unsigned int VAR_7 = 0;

 *VAR_5 = VAR_0;
 FUNC_2(VAR_6 <= VAR_3);

 if (!FUNC_0(VAR_6, 1))
  FUNC_1(VAR_6, 1);

 switch (VAR_1) {
 case 128:
  {




   unsigned char VAR_8;
   VAR_8 = VAR_2[VAR_6];
   if (VAR_8 < 0x80) {
    VAR_7 = VAR_8;
    VAR_6++;
   } else if (VAR_8 < 0xc2) {
    FUNC_1(VAR_6, 1);
   } else if (VAR_8 < 0xe0) {
    if (!FUNC_0(VAR_6, 2))
     FUNC_1(VAR_6, 1);

    if (!FUNC_8(VAR_2[VAR_6 + 1])) {
     FUNC_1(VAR_6, FUNC_7(VAR_2[VAR_6 + 1]) ? 1 : 2);
    }
    VAR_7 = ((VAR_8 & 0x1f) << 6) | (VAR_2[VAR_6 + 1] & 0x3f);
    if (VAR_7 < 0x80) {
     FUNC_1(VAR_6, 2);
    }
    VAR_6 += 2;
   } else if (VAR_8 < 0xf0) {
    size_t VAR_9 = VAR_3 - VAR_6;

    if (VAR_9 < 3 ||
      !FUNC_8(VAR_2[VAR_6 + 1]) || !FUNC_8(VAR_2[VAR_6 + 2])) {
     if (VAR_9 < 2 || FUNC_7(VAR_2[VAR_6 + 1]))
      FUNC_1(VAR_6, 1);
     else if (VAR_9 < 3 || FUNC_7(VAR_2[VAR_6 + 2]))
      FUNC_1(VAR_6, 2);
     else
      FUNC_1(VAR_6, 3);
    }

    VAR_7 = ((VAR_8 & 0x0f) << 12) | ((VAR_2[VAR_6 + 1] & 0x3f) << 6) | (VAR_2[VAR_6 + 2] & 0x3f);
    if (VAR_7 < 0x800) {
     FUNC_1(VAR_6, 3);
    } else if (VAR_7 >= 0xd800 && VAR_7 <= 0xdfff) {
     FUNC_1(VAR_6, 3);
    }
    VAR_6 += 3;
   } else if (VAR_8 < 0xf5) {
    size_t VAR_10 = VAR_3 - VAR_6;

    if (VAR_10 < 4 ||
      !FUNC_8(VAR_2[VAR_6 + 1]) || !FUNC_8(VAR_2[VAR_6 + 2]) ||
      !FUNC_8(VAR_2[VAR_6 + 3])) {
     if (VAR_10 < 2 || FUNC_7(VAR_2[VAR_6 + 1]))
      FUNC_1(VAR_6, 1);
     else if (VAR_10 < 3 || FUNC_7(VAR_2[VAR_6 + 2]))
      FUNC_1(VAR_6, 2);
     else if (VAR_10 < 4 || FUNC_7(VAR_2[VAR_6 + 3]))
      FUNC_1(VAR_6, 3);
     else
      FUNC_1(VAR_6, 4);
    }

    VAR_7 = ((VAR_8 & 0x07) << 18) | ((VAR_2[VAR_6 + 1] & 0x3f) << 12) | ((VAR_2[VAR_6 + 2] & 0x3f) << 6) | (VAR_2[VAR_6 + 3] & 0x3f);
    if (VAR_7 < 0x10000 || VAR_7 > 0x10FFFF) {
     FUNC_1(VAR_6, 4);
    }
    VAR_6 += 4;
   } else {
    FUNC_1(VAR_6, 1);
   }
  }
  break;

 case 133:

  {
   unsigned char VAR_11 = VAR_2[VAR_6];
   if (VAR_11 >= 0x81 && VAR_11 <= 0xFE) {
    unsigned char VAR_12;
    if (!FUNC_0(VAR_6, 2))
     FUNC_1(VAR_6, 1);

    VAR_12 = VAR_2[VAR_6 + 1];

    if ((VAR_12 >= 0x40 && VAR_12 <= 0x7E) ||
      (VAR_12 >= 0xA1 && VAR_12 <= 0xFE)) {
     VAR_7 = (VAR_11 << 8) | VAR_12;
    } else {
     FUNC_1(VAR_6, 1);
    }
    VAR_6 += 2;
   } else {
    VAR_7 = VAR_11;
    VAR_6 += 1;
   }
  }
  break;

 case 132:
  {
   unsigned char VAR_13 = VAR_2[VAR_6];
   if (VAR_13 >= 0x81 && VAR_13 <= 0xFE) {
    unsigned char VAR_14;
    if (!FUNC_0(VAR_6, 2))
     FUNC_1(VAR_6, 1);

    VAR_14 = VAR_2[VAR_6 + 1];

    if ((VAR_14 >= 0x40 && VAR_14 <= 0x7E) ||
      (VAR_14 >= 0xA1 && VAR_14 <= 0xFE)) {
     VAR_7 = (VAR_13 << 8) | VAR_14;
    } else if (VAR_14 != 0x80 && VAR_14 != 0xFF) {
     FUNC_1(VAR_6, 1);
    } else {
     FUNC_1(VAR_6, 2);
    }
    VAR_6 += 2;
   } else {
    VAR_7 = VAR_13;
    VAR_6 += 1;
   }
  }
  break;

 case 130:
  {
   unsigned char VAR_15 = VAR_2[VAR_6];
   if (VAR_15 >= 0xA1 && VAR_15 <= 0xFE) {
    unsigned char VAR_16;
    if (!FUNC_0(VAR_6, 2))
     FUNC_1(VAR_6, 1);

    VAR_16 = VAR_2[VAR_6 + 1];

    if (FUNC_4(VAR_16)) {
     VAR_7 = (VAR_15 << 8) | VAR_16;
    } else if (FUNC_3(VAR_16)) {
     FUNC_1(VAR_6, 1);
    } else {
     FUNC_1(VAR_6, 2);
    }
    VAR_6 += 2;
   } else if (FUNC_3(VAR_15)) {
    VAR_7 = VAR_15;
    VAR_6 += 1;
   } else {
    FUNC_1(VAR_6, 1);
   }
  }
  break;

 case 129:
  {
   unsigned char VAR_17 = VAR_2[VAR_6];
   if ((VAR_17 >= 0x81 && VAR_17 <= 0x9F) || (VAR_17 >= 0xE0 && VAR_17 <= 0xFC)) {
    unsigned char VAR_18;
    if (!FUNC_0(VAR_6, 2))
     FUNC_1(VAR_6, 1);

    VAR_18 = VAR_2[VAR_6 + 1];

    if (FUNC_6(VAR_18)) {
     VAR_7 = (VAR_17 << 8) | VAR_18;
    } else if (FUNC_5(VAR_18)) {
     FUNC_1(VAR_6, 1);
    } else {
     FUNC_1(VAR_6, 2);
    }
    VAR_6 += 2;
   } else if (VAR_17 < 0x80 || (VAR_17 >= 0xA1 && VAR_17 <= 0xDF)) {
    VAR_7 = VAR_17;
    VAR_6 += 1;
   } else {
    FUNC_1(VAR_6, 1);
   }
  }
  break;

 case 131:
  {
   unsigned char VAR_19 = VAR_2[VAR_6];

   if (VAR_19 >= 0xA1 && VAR_19 <= 0xFE) {
    unsigned VAR_20;
    if (!FUNC_0(VAR_6, 2))
     FUNC_1(VAR_6, 1);
    VAR_20 = VAR_2[VAR_6 + 1];

    if (VAR_20 >= 0xA1 && VAR_20 <= 0xFE) {

     VAR_7 = (VAR_19 << 8) | VAR_20;
    } else {
     FUNC_1(VAR_6, (VAR_20 != 0xA0 && VAR_20 != 0xFF) ? 1 : 2);
    }
    VAR_6 += 2;
   } else if (VAR_19 == 0x8E) {
    unsigned VAR_21;
    if (!FUNC_0(VAR_6, 2))
     FUNC_1(VAR_6, 1);

    VAR_21 = VAR_2[VAR_6 + 1];
    if (VAR_21 >= 0xA1 && VAR_21 <= 0xDF) {

     VAR_7 = (VAR_19 << 8) | VAR_21;
    } else {
     FUNC_1(VAR_6, (VAR_21 != 0xA0 && VAR_21 != 0xFF) ? 1 : 2);
    }
    VAR_6 += 2;
   } else if (VAR_19 == 0x8F) {
    size_t VAR_22 = VAR_3 - VAR_6;

    if (VAR_22 < 3 || !(VAR_2[VAR_6 + 1] >= 0xA1 && VAR_2[VAR_6 + 1] <= 0xFE) ||
      !(VAR_2[VAR_6 + 2] >= 0xA1 && VAR_2[VAR_6 + 2] <= 0xFE)) {
     if (VAR_22 < 2 || (VAR_2[VAR_6 + 1] != 0xA0 && VAR_2[VAR_6 + 1] != 0xFF))
      FUNC_1(VAR_6, 1);
     else if (VAR_22 < 3 || (VAR_2[VAR_6 + 2] != 0xA0 && VAR_2[VAR_6 + 2] != 0xFF))
      FUNC_1(VAR_6, 2);
     else
      FUNC_1(VAR_6, 3);
    } else {

     VAR_7 = (VAR_19 << 16) | (VAR_2[VAR_6 + 1] << 8) | VAR_2[VAR_6 + 2];
    }
    VAR_6 += 3;
   } else if (VAR_19 != 0xA0 && VAR_19 != 0xFF) {

    VAR_7 = VAR_19;
    VAR_6 += 1;
   } else {
    FUNC_1(VAR_6, 1);
   }
  }
  break;
 default:

  VAR_7 = VAR_2[VAR_6++];
  break;
 }

 *VAR_4 = VAR_6;
   return VAR_7;
}
