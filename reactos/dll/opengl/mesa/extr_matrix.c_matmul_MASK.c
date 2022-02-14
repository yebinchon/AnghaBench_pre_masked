
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLint ;
typedef int GLfloat ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3( GLfloat *VAR_0, const GLfloat *VAR_1, const GLfloat *VAR_2 )
{

   GLint VAR_3;






   for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
      GLfloat VAR_4=VAR_1[(0<<2)+VAR_3], VAR_5=VAR_1[(1<<2)+VAR_3], VAR_6=VAR_1[(2<<2)+VAR_3], VAR_7=VAR_1[(3<<2)+VAR_3];
      VAR_0[(0<<2)+VAR_3] = VAR_4 * VAR_2[(0<<2)+0] + VAR_5 * VAR_2[(0<<2)+1] + VAR_6 * VAR_2[(0<<2)+2] + VAR_7 * VAR_2[(0<<2)+3];
      VAR_0[(1<<2)+VAR_3] = VAR_4 * VAR_2[(1<<2)+0] + VAR_5 * VAR_2[(1<<2)+1] + VAR_6 * VAR_2[(1<<2)+2] + VAR_7 * VAR_2[(1<<2)+3];
      VAR_0[(2<<2)+VAR_3] = VAR_4 * VAR_2[(2<<2)+0] + VAR_5 * VAR_2[(2<<2)+1] + VAR_6 * VAR_2[(2<<2)+2] + VAR_7 * VAR_2[(2<<2)+3];
      VAR_0[(3<<2)+VAR_3] = VAR_4 * VAR_2[(3<<2)+0] + VAR_5 * VAR_2[(3<<2)+1] + VAR_6 * VAR_2[(3<<2)+2] + VAR_7 * VAR_2[(3<<2)+3];
   }




}
