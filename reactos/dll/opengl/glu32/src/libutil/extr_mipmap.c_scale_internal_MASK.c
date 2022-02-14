
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float GLushort ;
typedef int GLint ;


 int FUNC_0 (float) ;
 int FUNC_1 (int,int,int,float const*,float*) ;

__attribute__((used)) static void FUNC_2(GLint VAR_0, GLint VAR_1, GLint VAR_2,
      const GLushort *VAR_3,
      GLint VAR_4, GLint VAR_5,
      GLushort *VAR_6)
{
    float VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    float VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    float VAR_17,VAR_18;
    float VAR_19;

    float VAR_20[4];
    float VAR_21;
    int VAR_22,VAR_23,VAR_24,VAR_25,VAR_26,VAR_27,VAR_28;
    int VAR_29;

    if (VAR_1 == VAR_4*2 && VAR_2 == VAR_5*2) {
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_6);
 return;
    }
    VAR_15 = (float) VAR_2/VAR_5;
    VAR_10 = (float) VAR_1/VAR_4;
    VAR_11 = VAR_10/2;
    VAR_16 = VAR_15/2;
    for (VAR_22 = 0; VAR_22 < VAR_5; VAR_22++) {
 VAR_12 = VAR_15 * (VAR_22+0.5);
 if (VAR_2 > VAR_5) {
     VAR_14 = VAR_12 + VAR_16;
     VAR_13 = VAR_12 - VAR_16;
 } else {
     VAR_14 = VAR_12 + 0.5;
     VAR_13 = VAR_12 - 0.5;
 }
 for (VAR_23 = 0; VAR_23 < VAR_4; VAR_23++) {
     VAR_7 = VAR_10 * (VAR_23+0.5);
     if (VAR_1 > VAR_4) {
  VAR_9 = VAR_7 + VAR_11;
  VAR_8 = VAR_7 - VAR_11;
     } else {
  VAR_9 = VAR_7 + 0.5;
  VAR_8 = VAR_7 - 0.5;
     }






     VAR_20[0] = VAR_20[1] = VAR_20[2] = VAR_20[3] = 0.0;
     VAR_21 = 0.0;

     VAR_12 = VAR_13;
     VAR_25 = FUNC_0(VAR_12);
     while (VAR_12 < VAR_14) {
  VAR_28 = (VAR_25 + VAR_2) % VAR_2;
  if (VAR_14 < VAR_25+1) {
      VAR_18 = VAR_14 - VAR_12;
  } else {
      VAR_18 = VAR_25+1 - VAR_12;
  }

  VAR_7 = VAR_8;
  VAR_26 = FUNC_0(VAR_7);

  while (VAR_7 < VAR_9) {
      VAR_27 = (VAR_26 + VAR_1) % VAR_1;
      if (VAR_9 < VAR_26+1) {
   VAR_17 = VAR_9 - VAR_7;
      } else {
   VAR_17 = VAR_26+1 - VAR_7;
      }

      VAR_19 = VAR_17 * VAR_18;
      VAR_21 += VAR_19;
      VAR_29 = (VAR_27 + (VAR_28 * VAR_1)) * VAR_0;
      for (VAR_24 = 0; VAR_24 < VAR_0; VAR_24++) {
   VAR_20[VAR_24] += VAR_3[VAR_29 + VAR_24] * VAR_19;
      }

      VAR_26++;
      VAR_7 = VAR_26;
  }
  VAR_25++;
  VAR_12 = VAR_25;
     }

     VAR_29 = (VAR_23 + (VAR_22 * VAR_4)) * VAR_0;
     for (VAR_24 = 0; VAR_24 < VAR_0; VAR_24++) {



  VAR_6[VAR_29 + VAR_24] = (VAR_20[VAR_24]+0.5)/VAR_21;
     }
 }
    }
}
