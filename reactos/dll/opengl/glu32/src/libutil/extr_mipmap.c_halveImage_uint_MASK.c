
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;
typedef int GLint ;
typedef int GLdouble ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int,int const*,int*,int,int,int,int) ;

__attribute__((used)) static void FUNC_3(GLint VAR_0, GLuint VAR_1, GLuint VAR_2,
   const GLuint *VAR_3, GLuint *VAR_4,
   GLint VAR_5, GLint VAR_6, GLint VAR_7,
   GLint VAR_8)
{
    int VAR_9, VAR_10, VAR_11;
    int VAR_12, VAR_13;
    int VAR_14;
    GLuint *VAR_15;
    const char *VAR_16;


    if (VAR_1 == 1 || VAR_2 == 1) {
       FUNC_1( !(VAR_1 == 1 && VAR_2 == 1) );
       FUNC_2(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4,
    VAR_5,VAR_6,VAR_7, VAR_8);
       return;
    }

    VAR_12 = VAR_1 / 2;
    VAR_13 = VAR_2 / 2;
    VAR_14 = VAR_6 - (VAR_1*VAR_7);
    VAR_15 = VAR_4;
    VAR_16 = (const char *)VAR_3;


    if (!VAR_8)
    for (VAR_9 = 0; VAR_9 < VAR_13; VAR_9++) {
 for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
     for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {

  VAR_15[0] = ((double)*(const GLuint*)VAR_16 +
   (double)*(const GLuint*)(VAR_16+VAR_7) +
   (double)*(const GLuint*)(VAR_16+VAR_6) +
   (double)*(const GLuint*)(VAR_16+VAR_6+VAR_7))/4 + 0.5;
  VAR_15++; VAR_16 += VAR_5;

     }
     VAR_16 += VAR_7;
 }
 VAR_16 += VAR_14;
 VAR_16 += VAR_6;
    }
    else
    for (VAR_9 = 0; VAR_9 < VAR_13; VAR_9++) {
 for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
     for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {

  GLdouble VAR_17;
  VAR_17 = (GLdouble)FUNC_0(VAR_16) +
        (GLdouble)FUNC_0(VAR_16+VAR_7) +
        (GLdouble)FUNC_0(VAR_16+VAR_6) +
        (GLdouble)FUNC_0(VAR_16+VAR_6+VAR_7);
  VAR_15[0] = (GLuint)(VAR_17/4 + 0.5);

  VAR_15++; VAR_16 += VAR_5;
     }
     VAR_16 += VAR_7;
 }
 VAR_16 += VAR_14;
 VAR_16 += VAR_6;
    }
}
