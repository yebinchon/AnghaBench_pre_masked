
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLdouble ;



__attribute__((used)) static void FUNC_0(const GLdouble VAR_0[16], const GLdouble VAR_1[4],
        GLdouble VAR_2[4])
{
    int VAR_3;

    for (VAR_3=0; VAR_3<4; VAR_3++) {
 VAR_2[VAR_3] =
     VAR_1[0] * VAR_0[0*4+VAR_3] +
     VAR_1[1] * VAR_0[1*4+VAR_3] +
     VAR_1[2] * VAR_0[2*4+VAR_3] +
     VAR_1[3] * VAR_0[3*4+VAR_3];
    }
}
