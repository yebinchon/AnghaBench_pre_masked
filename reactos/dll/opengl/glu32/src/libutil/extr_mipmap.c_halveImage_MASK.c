
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLushort ;
typedef int GLuint ;
typedef int GLint ;



__attribute__((used)) static void FUNC_0(GLint VAR_0, GLuint VAR_1, GLuint VAR_2,
         const GLushort *VAR_3, GLushort *VAR_4)
{
    int VAR_5, VAR_6, VAR_7;
    int VAR_8, VAR_9;
    int VAR_10;
    GLushort *VAR_11;
    const GLushort *VAR_12;

    VAR_8 = VAR_1 / 2;
    VAR_9 = VAR_2 / 2;
    VAR_10 = VAR_1 * VAR_0;
    VAR_11 = VAR_4;
    VAR_12 = VAR_3;


    for (VAR_5 = 0; VAR_5 < VAR_9; VAR_5++) {
 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
     for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_11[0] = (VAR_12[0] + VAR_12[VAR_0] + VAR_12[VAR_10] +
   VAR_12[VAR_10+VAR_0] + 2) / 4;
  VAR_11++; VAR_12++;
     }
     VAR_12 += VAR_0;
 }
 VAR_12 += VAR_10;
    }
}
