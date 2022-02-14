
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;
typedef int GLint ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(GLint VAR_1, GLuint VAR_2, GLuint VAR_3,
        const GLint *VAR_4, GLint *VAR_5,
        GLint VAR_6, GLint VAR_7,
        GLint VAR_8, GLint VAR_9)
{
   GLint VAR_10= VAR_2 / 2;
   GLint VAR_11= VAR_3 / 2;
   const char *VAR_12= (const char *) VAR_4;
   GLint *VAR_13= VAR_5;
   int VAR_14;

   FUNC_1(VAR_2 == 1 || VAR_3 == 1);
   FUNC_1(VAR_2 != VAR_3);

   if (VAR_3 == 1) {
      FUNC_1(VAR_2 != 1);
      VAR_11= 1;

      for (VAR_14= 0; VAR_14< VAR_10; VAR_14++) {
  int VAR_15;
  for (VAR_15= 0; VAR_15< VAR_1; VAR_15++) {

     GLuint VAR_16[2];
     if (VAR_9) {
        VAR_16[0]= FUNC_0(VAR_12);
        VAR_16[1]= FUNC_0(VAR_12+VAR_8);
     }
     else {
        VAR_16[0]= *(const GLuint*)VAR_12;
        VAR_16[1]= *(const GLuint*)(VAR_12+VAR_8);
     }
     *VAR_13= ((float)VAR_16[0]+(float)VAR_16[1])/2.0;

     VAR_12+= VAR_6;
     VAR_13++;
  }
  VAR_12+= VAR_8;
      }
      {
  int VAR_17= VAR_7 - (VAR_2*VAR_8);
  VAR_12+= VAR_17;
      }
   }
   else if (VAR_2 == 1) {
      int VAR_18= VAR_7 - (VAR_2 * VAR_8);
      FUNC_1(VAR_3 != 1);
      VAR_10= 1;



      for (VAR_14= 0; VAR_14< VAR_11; VAR_14++) {
  int VAR_19;
  for (VAR_19= 0; VAR_19< VAR_1; VAR_19++) {

     GLuint VAR_20[2];
     if (VAR_9) {
        VAR_20[0]= FUNC_0(VAR_12);
        VAR_20[1]= FUNC_0(VAR_12+VAR_7);
     }
     else {
        VAR_20[0]= *(const GLuint*)VAR_12;
        VAR_20[1]= *(const GLuint*)(VAR_12+VAR_7);
     }
     *VAR_13= ((float)VAR_20[0]+(float)VAR_20[1])/2.0;

     VAR_12+= VAR_6;
     VAR_13++;
  }
  VAR_12+= VAR_18;
  VAR_12+= VAR_7;
      }

      FUNC_1(VAR_12 == &((const char *)VAR_4)[VAR_7*VAR_3]);
   }

   FUNC_1((char *)VAR_13 == &((char *)VAR_5)
   [VAR_1 * VAR_6 * VAR_10 * VAR_11]);

}
