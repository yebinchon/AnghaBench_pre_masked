
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLdouble ;



__attribute__((used)) static void FUNC_0(const GLdouble VAR_0[16], const GLdouble VAR_1[16],
    GLdouble VAR_2[16])
{
    int VAR_3, VAR_4;

    for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
     VAR_2[VAR_3*4+VAR_4] =
  VAR_0[VAR_3*4+0]*VAR_1[0*4+VAR_4] +
  VAR_0[VAR_3*4+1]*VAR_1[1*4+VAR_4] +
  VAR_0[VAR_3*4+2]*VAR_1[2*4+VAR_4] +
  VAR_0[VAR_3*4+3]*VAR_1[3*4+VAR_4];
 }
    }
}
