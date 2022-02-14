
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLfloat ;


 int FUNC_0 (int,int) ;

void FUNC_1( GLfloat VAR_0[4], const GLfloat VAR_1[4], const GLfloat VAR_2[16] )
{
   GLfloat VAR_3=VAR_1[0], VAR_4=VAR_1[1], VAR_5=VAR_1[2], VAR_6=VAR_1[3];

   VAR_0[0] = VAR_3 * VAR_2[0*4+0] + VAR_4 * VAR_2[0*4+1] + VAR_5 * VAR_2[0*4+2] + VAR_6 * VAR_2[0*4+3];
   VAR_0[1] = VAR_3 * VAR_2[1*4+0] + VAR_4 * VAR_2[1*4+1] + VAR_5 * VAR_2[1*4+2] + VAR_6 * VAR_2[1*4+3];
   VAR_0[2] = VAR_3 * VAR_2[2*4+0] + VAR_4 * VAR_2[2*4+1] + VAR_5 * VAR_2[2*4+2] + VAR_6 * VAR_2[2*4+3];
   VAR_0[3] = VAR_3 * VAR_2[3*4+0] + VAR_4 * VAR_2[3*4+1] + VAR_5 * VAR_2[3*4+2] + VAR_6 * VAR_2[3*4+3];

}
