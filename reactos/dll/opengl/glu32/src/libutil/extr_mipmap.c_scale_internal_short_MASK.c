
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GLushort ;
typedef float GLshort ;
typedef int GLint ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (float) ;
 int FUNC_2 (int,int,int,float const*,float*,int,int,int,int) ;

__attribute__((used)) static void FUNC_3(GLint VAR_0, GLint VAR_1,
      GLint VAR_2, const GLshort *VAR_3,
      GLint VAR_4, GLint VAR_5,
      GLshort *VAR_6, GLint VAR_7,
      GLint VAR_8, GLint VAR_9,
      GLint VAR_10)
{
    float VAR_11;
    float VAR_12;
    float VAR_13;

    float VAR_14[4];
    float VAR_15;
    int VAR_16,VAR_17,VAR_18,VAR_19;

    const char *VAR_20, *VAR_21;
    const char *VAR_22;
    int VAR_23;

    int VAR_24, VAR_25, VAR_26, VAR_27;
    float VAR_28, VAR_29;
    float VAR_30, VAR_31, VAR_32, VAR_33;
    float VAR_34, VAR_35;
    int VAR_36, VAR_37;
    int VAR_38, VAR_39;
    const char *VAR_40, *VAR_41;

    GLushort VAR_42;

    if (VAR_1 == VAR_4*2 && VAR_2 == VAR_5*2) {
 FUNC_2(VAR_0, VAR_1, VAR_2,
 (const GLshort *)VAR_3, (GLshort *)VAR_6,
 VAR_7, VAR_8, VAR_9, VAR_10);
 return;
    }
    VAR_12 = (float) VAR_2/VAR_5;
    VAR_11 = (float) VAR_1/VAR_4;
    VAR_36 = FUNC_1(VAR_12);
    VAR_34 = VAR_12 - VAR_36;
    VAR_37 = FUNC_1(VAR_11);
    VAR_35 = VAR_11 - VAR_37;

    VAR_15 = VAR_11 * VAR_12;

    VAR_26 = 0;
    VAR_32 = 0;
    VAR_27 = VAR_36;
    VAR_33 = VAR_34;

    for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16++) {

        if (VAR_27 >= VAR_2)
            VAR_27 = VAR_2 - 1;
 VAR_24 = 0;
 VAR_30 = 0;
 VAR_25 = VAR_37;
 VAR_31 = VAR_35;

 for (VAR_17 = 0; VAR_17 < VAR_4; VAR_17++) {





     VAR_14[0] = VAR_14[1] = VAR_14[2] = VAR_14[3] = 0.0;


     VAR_19 = VAR_24*VAR_9;
     if((VAR_27>VAR_26) && (VAR_25>VAR_24)) {

  VAR_29 = 1-VAR_32;
  VAR_20 = (const char *)VAR_3 + VAR_19 + VAR_26 * VAR_8;
  VAR_13 = VAR_29 * (1-VAR_30);
  for (VAR_18 = 0, VAR_22 = VAR_20; VAR_18 < VAR_0;
       VAR_18++, VAR_22 += VAR_7) {
      if (VAR_10) {
   VAR_42 = FUNC_0(VAR_22);
   VAR_14[VAR_18] += *(const GLshort*)&VAR_42 * VAR_13;
      } else {
   VAR_14[VAR_18] += *(const GLshort*)VAR_22 * VAR_13;
      }
  }
  VAR_40 = VAR_20;
  for(VAR_38 = VAR_24+1; VAR_38 < VAR_25; VAR_38++) {
      VAR_20 += VAR_9;
      for (VAR_18 = 0, VAR_22 = VAR_20; VAR_18 < VAR_0;
    VAR_18++, VAR_22 += VAR_7) {
   if (VAR_10) {
       VAR_42 = FUNC_0(VAR_22);
       VAR_14[VAR_18] += *(const GLshort*)&VAR_42 * VAR_29;
   } else {
       VAR_14[VAR_18] += *(const GLshort*)VAR_22 * VAR_29;
   }
      }
  }
  VAR_20 += VAR_9;
  VAR_41 = VAR_20;
  VAR_13 = VAR_29 * VAR_31;
  for (VAR_18 = 0, VAR_22 = VAR_20; VAR_18 < VAR_0;
       VAR_18++, VAR_22 += VAR_7) {
      if (VAR_10) {
   VAR_42 = FUNC_0(VAR_22);
   VAR_14[VAR_18] += *(const GLshort*)&VAR_42 * VAR_13;
      } else {
   VAR_14[VAR_18] += *(const GLshort*)VAR_22 * VAR_13;
      }
  }


  VAR_29 = VAR_33;
  VAR_13 = VAR_29 * (1-VAR_30);
  VAR_20 = (const char *)VAR_3 + VAR_19 + VAR_27 * VAR_8;
  for (VAR_18 = 0, VAR_22 = VAR_20; VAR_18 < VAR_0;
       VAR_18++, VAR_22 += VAR_7) {
      if (VAR_10) {
   VAR_42 = FUNC_0(VAR_22);
   VAR_14[VAR_18] += *(const GLshort*)&VAR_42 * VAR_13;
      } else {
   VAR_14[VAR_18] += *(const GLshort*)VAR_22 * VAR_13;
      }
  }
  for(VAR_38 = VAR_24+1; VAR_38 < VAR_25; VAR_38++) {
      VAR_20 += VAR_9;
      for (VAR_18 = 0, VAR_22 = VAR_20; VAR_18 < VAR_0;
    VAR_18++, VAR_22 += VAR_7) {
   if (VAR_10) {
       VAR_42 = FUNC_0(VAR_22);
       VAR_14[VAR_18] += *(const GLshort*)&VAR_42 * VAR_29;
   } else {
       VAR_14[VAR_18] += *(const GLshort*)VAR_22 * VAR_29;
   }
      }
  }
  VAR_20 += VAR_9;
  VAR_13 = VAR_29 * VAR_31;
  for (VAR_18 = 0, VAR_22 = VAR_20; VAR_18 < VAR_0;
       VAR_18++, VAR_22 += VAR_7) {
      if (VAR_10) {
   VAR_42 = FUNC_0(VAR_22);
   VAR_14[VAR_18] += *(const GLshort*)&VAR_42 * VAR_13;
      } else {
   VAR_14[VAR_18] += *(const GLshort*)VAR_22 * VAR_13;
      }
  }


  for(VAR_39 = VAR_26+1; VAR_39 < VAR_27; VAR_39++) {
      VAR_40 += VAR_8;
      VAR_41 += VAR_8;
      for (VAR_18 = 0; VAR_18 < VAR_0;
    VAR_18++, VAR_40 += VAR_7, VAR_41 += VAR_7) {
   if (VAR_10) {
       VAR_42 = FUNC_0(VAR_40);
       VAR_14[VAR_18] += *(const GLshort*)&VAR_42 * (1-VAR_30);
       VAR_42 = FUNC_0(VAR_41);
       VAR_14[VAR_18] += *(const GLshort*)&VAR_42 * VAR_31;
   } else {
       VAR_14[VAR_18] += *(const GLshort*)VAR_40 * (1-VAR_30)
           + *(const GLshort*)VAR_41 * VAR_31;
   }
      }
  }
     } else if (VAR_27 > VAR_26) {
  VAR_28 = VAR_31 - VAR_30;
  VAR_13 = (1-VAR_32)*VAR_28;
  VAR_20 = (const char *)VAR_3 + VAR_19 + VAR_26*VAR_8;
  for (VAR_18 = 0, VAR_22 = VAR_20; VAR_18 < VAR_0;
       VAR_18++, VAR_22 += VAR_7) {
      if (VAR_10) {
   VAR_42 = FUNC_0(VAR_22);
   VAR_14[VAR_18] += *(const GLshort*)&VAR_42 * VAR_13;
      } else {
   VAR_14[VAR_18] += *(const GLshort*)VAR_22 * VAR_13;
      }
  }
  for(VAR_39 = VAR_26+1; VAR_39 < VAR_27; VAR_39++) {
      VAR_20 += VAR_8;
      for (VAR_18 = 0, VAR_22 = VAR_20; VAR_18 < VAR_0;
    VAR_18++, VAR_22 += VAR_7) {
   if (VAR_10) {
       VAR_42 = FUNC_0(VAR_22);
       VAR_14[VAR_18] += *(const GLshort*)&VAR_42 * VAR_28;
   } else {
       VAR_14[VAR_18] += *(const GLshort*)VAR_22 * VAR_28;
   }
      }
  }
  VAR_13 = VAR_28 * VAR_33;
  VAR_20 += VAR_8;
  for (VAR_18 = 0, VAR_22 = VAR_20; VAR_18 < VAR_0;
       VAR_18++, VAR_22 += VAR_7) {
      if (VAR_10) {
   VAR_42 = FUNC_0(VAR_22);
   VAR_14[VAR_18] += *(const GLshort*)&VAR_42 * VAR_13;
      } else {
   VAR_14[VAR_18] += *(const GLshort*)VAR_22 * VAR_13;
      }
  }
     } else if (VAR_25 > VAR_24) {
  VAR_29 = VAR_33 - VAR_32;
  VAR_13 = (1-VAR_30)*VAR_29;

      VAR_20 = (const char *)VAR_3 + VAR_19 + VAR_26*VAR_8;
  for (VAR_18 = 0, VAR_22 = VAR_20; VAR_18 < VAR_0;
       VAR_18++, VAR_22 += VAR_7) {
      if (VAR_10) {
   VAR_42 = FUNC_0(VAR_22);
   VAR_14[VAR_18] += *(const GLshort*)&VAR_42 * VAR_13;
      } else {
   VAR_14[VAR_18] += *(const GLshort*)VAR_22 * VAR_13;
      }
  }
  for (VAR_38 = VAR_24+1; VAR_38 < VAR_25; VAR_38++) {
      VAR_20 += VAR_9;
      for (VAR_18 = 0, VAR_22 = VAR_20; VAR_18 < VAR_0;
    VAR_18++, VAR_22 += VAR_7) {
   if (VAR_10) {
       VAR_42 = FUNC_0(VAR_22);
       VAR_14[VAR_18] += *(const GLshort*)&VAR_42 * VAR_29;
   } else {
       VAR_14[VAR_18] += *(const GLshort*)VAR_22 * VAR_29;
   }
      }
  }
  VAR_20 += VAR_9;
  VAR_13 = VAR_29 * VAR_31;
  for (VAR_18 = 0, VAR_22 = VAR_20; VAR_18 < VAR_0;
       VAR_18++, VAR_22 += VAR_7) {
      if (VAR_10) {
   VAR_42 = FUNC_0(VAR_22);
   VAR_14[VAR_18] += *(const GLshort*)&VAR_42 * VAR_13;
      } else {
   VAR_14[VAR_18] += *(const GLshort*)VAR_22 * VAR_13;
      }
  }
     } else {
  VAR_13 = (VAR_33-VAR_32)*(VAR_31-VAR_30);
  VAR_20 = (const char *)VAR_3 + VAR_19 + VAR_26 * VAR_8;
  for (VAR_18 = 0, VAR_22 = VAR_20; VAR_18 < VAR_0;
       VAR_18++, VAR_22 += VAR_7) {
      if (VAR_10) {
   VAR_42 = FUNC_0(VAR_22);
   VAR_14[VAR_18] += *(const GLshort*)&VAR_42 * VAR_13;
      } else {
   VAR_14[VAR_18] += *(const GLshort*)VAR_22 * VAR_13;
      }
  }
     }


     VAR_21 = (const char *)VAR_3 + VAR_19 + VAR_9 +
   (VAR_26+1)*VAR_8;
     for (VAR_39 = VAR_26+1; VAR_39 < VAR_27; VAR_39++) {
  VAR_20 = VAR_21;
  for(VAR_38 = VAR_24+1; VAR_38 < VAR_25; VAR_38++) {
      for (VAR_18 = 0, VAR_22 = VAR_20; VAR_18 < VAR_0;
    VAR_18++, VAR_22 += VAR_7) {
   if (VAR_10) {
       VAR_42 = FUNC_0(VAR_22);
       VAR_14[VAR_18] += *(const GLshort*)&VAR_42;
   } else {
       VAR_14[VAR_18] += *(const GLshort*)VAR_22;
   }
      }
      VAR_20 += VAR_9;
  }
  VAR_21 += VAR_8;
     }

     VAR_23 = (VAR_17 + (VAR_16 * VAR_4)) * VAR_0;
     for (VAR_18 = 0; VAR_18 < VAR_0; VAR_18++) {
  VAR_6[VAR_23 + VAR_18] = VAR_14[VAR_18]/VAR_15;

     }
     VAR_24 = VAR_25;
     VAR_30 = VAR_31;
     VAR_25 += VAR_37;
     VAR_31 += VAR_35;
     if(VAR_31 > 1) {
  VAR_31 -= 1.0;
  VAR_25++;
     }
 }
 VAR_26 = VAR_27;
 VAR_32 = VAR_33;
 VAR_27 += VAR_36;
 VAR_33 += VAR_34;
 if(VAR_33 > 1) {
     VAR_33 -= 1.0;
     VAR_27++;
 }
    }
}
