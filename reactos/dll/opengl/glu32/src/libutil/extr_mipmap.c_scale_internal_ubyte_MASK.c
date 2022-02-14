
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float GLubyte ;
typedef int GLint ;


 int FUNC_0 (float) ;
 int FUNC_1 (int,int,int,float const*,float*,int,int,int) ;

__attribute__((used)) static void FUNC_2(GLint VAR_0, GLint VAR_1,
      GLint VAR_2, const GLubyte *VAR_3,
      GLint VAR_4, GLint VAR_5,
      GLubyte *VAR_6, GLint VAR_7,
      GLint VAR_8, GLint VAR_9)
{
    float VAR_10;
    float VAR_11;
    float VAR_12;

    float VAR_13[4];
    float VAR_14;
    int VAR_15,VAR_16,VAR_17,VAR_18;

    const char *VAR_19, *VAR_20;
    const char *VAR_21;
    int VAR_22;

    int VAR_23, VAR_24, VAR_25, VAR_26;
    float VAR_27, VAR_28;
    float VAR_29, VAR_30, VAR_31, VAR_32;
    float VAR_33, VAR_34;
    int VAR_35, VAR_36;
    int VAR_37, VAR_38;
    const char *VAR_39, *VAR_40;

    if (VAR_1 == VAR_4*2 && VAR_2 == VAR_5*2) {
 FUNC_1(VAR_0, VAR_1, VAR_2,
 (const GLubyte *)VAR_3, (GLubyte *)VAR_6,
 VAR_7, VAR_8, VAR_9);
 return;
    }
    VAR_11 = (float) VAR_2/VAR_5;
    VAR_10 = (float) VAR_1/VAR_4;
    VAR_35 = FUNC_0(VAR_11);
    VAR_33 = VAR_11 - VAR_35;
    VAR_36 = FUNC_0(VAR_10);
    VAR_34 = VAR_10 - VAR_36;

    VAR_14 = VAR_10 * VAR_11;

    VAR_25 = 0;
    VAR_31 = 0;
    VAR_26 = VAR_35;
    VAR_32 = VAR_33;

    for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {

        if (VAR_26 >= VAR_2)
            VAR_26 = VAR_2 - 1;
 VAR_23 = 0;
 VAR_29 = 0;
 VAR_24 = VAR_36;
 VAR_30 = VAR_34;

 for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {






     VAR_13[0] = VAR_13[1] = VAR_13[2] = VAR_13[3] = 0.0;


     VAR_18 = VAR_23*VAR_9;
     if((VAR_26>VAR_25) && (VAR_24>VAR_23)) {

  VAR_28 = 1-VAR_31;
  VAR_19 = (const char *)VAR_3 + VAR_18 + VAR_25 * VAR_8;
  VAR_12 = VAR_28 * (1-VAR_29);
  for (VAR_17 = 0, VAR_21 = VAR_19; VAR_17 < VAR_0;
       VAR_17++, VAR_21 += VAR_7) {
   VAR_13[VAR_17] += (GLubyte)(*(VAR_21)) * VAR_12;
  }
  VAR_39 = VAR_19;
  for(VAR_37 = VAR_23+1; VAR_37 < VAR_24; VAR_37++) {
      VAR_19 += VAR_9;
      for (VAR_17 = 0, VAR_21 = VAR_19; VAR_17 < VAR_0;
    VAR_17++, VAR_21 += VAR_7) {
   VAR_13[VAR_17] += (GLubyte)(*(VAR_21)) * VAR_28;
      }
  }
  VAR_19 += VAR_9;
  VAR_40 = VAR_19;
  VAR_12 = VAR_28 * VAR_30;
  for (VAR_17 = 0, VAR_21 = VAR_19; VAR_17 < VAR_0;
       VAR_17++, VAR_21 += VAR_7) {
   VAR_13[VAR_17] += (GLubyte)(*(VAR_21)) * VAR_12;
  }


  VAR_28 = VAR_32;
  VAR_12 = VAR_28 * (1-VAR_29);
  VAR_19 = (const char *)VAR_3 + VAR_18 + VAR_26 * VAR_8;
  for (VAR_17 = 0, VAR_21 = VAR_19; VAR_17 < VAR_0;
       VAR_17++, VAR_21 += VAR_7) {
   VAR_13[VAR_17] += (GLubyte)(*(VAR_21)) * VAR_12;
  }
  for(VAR_37 = VAR_23+1; VAR_37 < VAR_24; VAR_37++) {
      VAR_19 += VAR_9;
      for (VAR_17 = 0, VAR_21 = VAR_19; VAR_17 < VAR_0;
    VAR_17++, VAR_21 += VAR_7) {
   VAR_13[VAR_17] += (GLubyte)(*(VAR_21)) * VAR_28;
      }
  }
  VAR_19 += VAR_9;
  VAR_12 = VAR_28 * VAR_30;
  for (VAR_17 = 0, VAR_21 = VAR_19; VAR_17 < VAR_0;
       VAR_17++, VAR_21 += VAR_7) {
   VAR_13[VAR_17] += (GLubyte)(*(VAR_21)) * VAR_12;
  }



  for(VAR_38 = VAR_25+1; VAR_38 < VAR_26; VAR_38++) {
      VAR_39 += VAR_8;
      VAR_40 += VAR_8;
      for (VAR_17 = 0; VAR_17 < VAR_0;
    VAR_17++, VAR_39 += VAR_7, VAR_40 += VAR_7) {
   VAR_13[VAR_17] += (GLubyte)(*(VAR_39))*(1-VAR_29)
    +(GLubyte)(*(VAR_40))*VAR_30;
      }
  }
     } else if (VAR_26 > VAR_25) {
  VAR_27 = VAR_30 - VAR_29;
  VAR_12 = (1-VAR_31)*VAR_27;
  VAR_19 = (const char *)VAR_3 + VAR_18 + VAR_25*VAR_8;
  for (VAR_17 = 0, VAR_21 = VAR_19; VAR_17 < VAR_0;
       VAR_17++, VAR_21 += VAR_7) {
   VAR_13[VAR_17] += (GLubyte)(*(VAR_21)) * VAR_12;
  }
  for(VAR_38 = VAR_25+1; VAR_38 < VAR_26; VAR_38++) {
      VAR_19 += VAR_8;
      for (VAR_17 = 0, VAR_21 = VAR_19; VAR_17 < VAR_0;
    VAR_17++, VAR_21 += VAR_7) {
   VAR_13[VAR_17] += (GLubyte)(*(VAR_21)) * VAR_27;
      }
  }
  VAR_12 = VAR_27 * VAR_32;
  VAR_19 += VAR_8;
  for (VAR_17 = 0, VAR_21 = VAR_19; VAR_17 < VAR_0;
       VAR_17++, VAR_21 += VAR_7) {
   VAR_13[VAR_17] += (GLubyte)(*(VAR_21)) * VAR_12;
  }
     } else if (VAR_24 > VAR_23) {
  VAR_28 = VAR_32 - VAR_31;
  VAR_12 = (1-VAR_29)*VAR_28;
  VAR_19 = (const char *)VAR_3 + VAR_18 + VAR_25*VAR_8;
  for (VAR_17 = 0, VAR_21 = VAR_19; VAR_17 < VAR_0;
       VAR_17++, VAR_21 += VAR_7) {
   VAR_13[VAR_17] += (GLubyte)(*(VAR_21)) * VAR_12;
  }
  for (VAR_37 = VAR_23+1; VAR_37 < VAR_24; VAR_37++) {
      VAR_19 += VAR_9;
      for (VAR_17 = 0, VAR_21 = VAR_19; VAR_17 < VAR_0;
    VAR_17++, VAR_21 += VAR_7) {
   VAR_13[VAR_17] += (GLubyte)(*(VAR_21)) * VAR_28;
      }
  }
  VAR_19 += VAR_9;
  VAR_12 = VAR_28 * VAR_30;
  for (VAR_17 = 0, VAR_21 = VAR_19; VAR_17 < VAR_0;
       VAR_17++, VAR_21 += VAR_7) {
   VAR_13[VAR_17] += (GLubyte)(*(VAR_21)) * VAR_12;
  }
     } else {
  VAR_12 = (VAR_32-VAR_31)*(VAR_30-VAR_29);
  VAR_19 = (const char *)VAR_3 + VAR_18 + VAR_25 * VAR_8;
  for (VAR_17 = 0, VAR_21 = VAR_19; VAR_17 < VAR_0;
       VAR_17++, VAR_21 += VAR_7) {
   VAR_13[VAR_17] += (GLubyte)(*(VAR_21)) * VAR_12;
  }
     }




     VAR_20 = (const char *)VAR_3 + VAR_18 + VAR_9 +
   (VAR_25+1)*VAR_8;
     for (VAR_38 = VAR_25+1; VAR_38 < VAR_26; VAR_38++) {
  VAR_19 = VAR_20;
  for(VAR_37 = VAR_23+1; VAR_37 < VAR_24; VAR_37++) {
      for (VAR_17 = 0, VAR_21 = VAR_19; VAR_17 < VAR_0;
    VAR_17++, VAR_21 += VAR_7) {
   VAR_13[VAR_17] += (GLubyte)(*(VAR_21));
      }
      VAR_19 += VAR_9;
  }
  VAR_20 += VAR_8;
     }

     VAR_22 = (VAR_16 + (VAR_15 * VAR_4)) * VAR_0;
     for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {
  VAR_6[VAR_22 + VAR_17] = VAR_13[VAR_17]/VAR_14;

     }
     VAR_23 = VAR_24;
     VAR_29 = VAR_30;
     VAR_24 += VAR_36;
     VAR_30 += VAR_34;
     if(VAR_30 > 1) {
  VAR_30 -= 1.0;
  VAR_24++;
     }
 }
 VAR_25 = VAR_26;
 VAR_31 = VAR_32;
 VAR_26 += VAR_35;
 VAR_32 += VAR_33;
 if(VAR_32 > 1) {
     VAR_32 -= 1.0;
     VAR_26++;
 }
    }
}
