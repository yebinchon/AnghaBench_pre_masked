
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GLushort ;
typedef int GLuint ;
typedef int GLshort ;
typedef int GLint ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int,int const*,int*,int,int,int,int) ;

__attribute__((used)) static void FUNC_3(GLint VAR_0, GLuint VAR_1, GLuint VAR_2,
   const GLshort *VAR_3, GLshort *VAR_4,
   GLint VAR_5, GLint VAR_6, GLint VAR_7,
   GLint VAR_8)
{
    int VAR_9, VAR_10, VAR_11;
    int VAR_12, VAR_13;
    int VAR_14;
    GLshort *VAR_15;
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
  VAR_15[0] = (*(const GLshort*)VAR_16 +
   *(const GLshort*)(VAR_16+VAR_7) +
   *(const GLshort*)(VAR_16+VAR_6) +
   *(const GLshort*)(VAR_16+VAR_6+VAR_7) + 2) / 4;
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
  GLushort VAR_17;
  GLint VAR_18;
  VAR_17 = FUNC_0(VAR_16);
  VAR_18 = *(const GLshort*)&VAR_17;
  VAR_17 = FUNC_0(VAR_16+VAR_7);
  VAR_18 += *(const GLshort*)&VAR_17;
  VAR_17 = FUNC_0(VAR_16+VAR_6);
  VAR_18 += *(const GLshort*)&VAR_17;
  VAR_17 = FUNC_0(VAR_16+VAR_6+VAR_7);
  VAR_18 += *(const GLshort*)&VAR_17;
  VAR_15[0] = (GLshort)((VAR_18+2)/4);
  VAR_15++; VAR_16 += VAR_5;
     }
     VAR_16 += VAR_7;
 }
 VAR_16 += VAR_14;
 VAR_16 += VAR_6;
    }
}
