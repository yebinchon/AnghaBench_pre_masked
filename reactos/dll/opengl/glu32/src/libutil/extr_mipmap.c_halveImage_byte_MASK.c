
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;
typedef int GLint ;
typedef int GLbyte ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int,int const*,int*,int,int,int) ;

__attribute__((used)) static void FUNC_2(GLint VAR_0, GLuint VAR_1, GLuint VAR_2,
   const GLbyte *VAR_3, GLbyte *VAR_4,
   GLint VAR_5,
   GLint VAR_6, GLint VAR_7)
{
    int VAR_8, VAR_9, VAR_10;
    int VAR_11, VAR_12;
    int VAR_13;
    GLbyte *VAR_14;
    const char *VAR_15;


    if (VAR_1 == 1 || VAR_2 == 1) {
       FUNC_0( !(VAR_1 == 1 && VAR_2 == 1) );
       FUNC_1(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4,
    VAR_5,VAR_6,VAR_7);
       return;
    }

    VAR_11 = VAR_1 / 2;
    VAR_12 = VAR_2 / 2;
    VAR_13 = VAR_6 - (VAR_1*VAR_7);
    VAR_14 = VAR_4;
    VAR_15 = (const char *)VAR_3;


    for (VAR_8 = 0; VAR_8 < VAR_12; VAR_8++) {
 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
     for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  VAR_14[0] = (*(const GLbyte*)VAR_15 +
   *(const GLbyte*)(VAR_15+VAR_7) +
   *(const GLbyte*)(VAR_15+VAR_6) +
   *(const GLbyte*)(VAR_15+VAR_6+VAR_7) + 2) / 4;
  VAR_14++; VAR_15 += VAR_5;
     }
     VAR_15 += VAR_7;
 }
 VAR_15 += VAR_13;
 VAR_15 += VAR_6;
    }
}
