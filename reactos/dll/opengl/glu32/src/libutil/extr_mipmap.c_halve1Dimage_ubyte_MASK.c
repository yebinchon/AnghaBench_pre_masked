
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;
typedef int GLubyte ;
typedef int GLint ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(GLint VAR_0, GLuint VAR_1, GLuint VAR_2,
          const GLubyte *VAR_3, GLubyte *VAR_4,
          GLint VAR_5, GLint VAR_6,
          GLint VAR_7)
{
   GLint VAR_8= VAR_1 / 2;
   GLint VAR_9= VAR_2 / 2;
   const char *VAR_10= (const char *) VAR_3;
   GLubyte *VAR_11= VAR_4;
   int VAR_12;

   FUNC_0(VAR_1 == 1 || VAR_2 == 1);
   FUNC_0(VAR_1 != VAR_2);

   if (VAR_2 == 1) {
      FUNC_0(VAR_1 != 1);
      VAR_9= 1;

      for (VAR_12= 0; VAR_12< VAR_8; VAR_12++) {
  int VAR_13;
  for (VAR_13= 0; VAR_13< VAR_0; VAR_13++) {
     *VAR_11= (*(const GLubyte*)VAR_10 +
   *(const GLubyte*)(VAR_10+VAR_7)) / 2;

     VAR_10+= VAR_5;
     VAR_11++;
  }
  VAR_10+= VAR_7;
      }
      {
  int VAR_14= VAR_6 - (VAR_1*VAR_7);
  VAR_10+= VAR_14;
      }
   }
   else if (VAR_1 == 1) {
      int VAR_15= VAR_6 - (VAR_1 * VAR_7);
      FUNC_0(VAR_2 != 1);
      VAR_8= 1;



      for (VAR_12= 0; VAR_12< VAR_9; VAR_12++) {
  int VAR_16;
  for (VAR_16= 0; VAR_16< VAR_0; VAR_16++) {
     *VAR_11= (*(const GLubyte*)VAR_10 + *(const GLubyte*)(VAR_10+VAR_6)) / 2;

     VAR_10+= VAR_5;
     VAR_11++;
  }
  VAR_10+= VAR_15;
  VAR_10+= VAR_6;
      }
   }

   FUNC_0(VAR_10 == &((const char *)VAR_3)[VAR_6*VAR_2]);
   FUNC_0((char *)VAR_11 == &((char *)VAR_4)
   [VAR_0 * VAR_5 * VAR_8 * VAR_9]);
}
