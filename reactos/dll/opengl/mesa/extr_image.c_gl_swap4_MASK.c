
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t GLuint ;



void FUNC_0( GLuint *VAR_0, GLuint VAR_1 )
{
   register GLuint VAR_2, VAR_3, VAR_4;

   for (VAR_2=0;VAR_2<VAR_1;VAR_2++) {
      VAR_4 = VAR_0[VAR_2];
      VAR_3 = (VAR_4 >> 24)
 | ((VAR_4 >> 8) & 0xff00)
 | ((VAR_4 << 8) & 0xff0000)
 | ((VAR_4 << 24) & 0xff000000);
      VAR_0[VAR_2] = VAR_3;
   }
}
