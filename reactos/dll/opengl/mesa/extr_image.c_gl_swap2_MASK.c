
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLushort ;
typedef size_t GLuint ;



void FUNC_0( GLushort *VAR_0, GLuint VAR_1 )
{
   register GLuint VAR_2;

   for (VAR_2=0;VAR_2<VAR_1;VAR_2++) {
      VAR_0[VAR_2] = (VAR_0[VAR_2] >> 8) | ((VAR_0[VAR_2] << 8) & 0xff00);
   }
}
