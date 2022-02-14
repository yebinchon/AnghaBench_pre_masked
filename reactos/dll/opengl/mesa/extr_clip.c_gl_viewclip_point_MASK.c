
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;
typedef int GLfloat ;



GLuint FUNC_0( const GLfloat VAR_0[] )
{
   if ( VAR_0[0] > VAR_0[3] || VAR_0[0] < -VAR_0[3]
       || VAR_0[1] > VAR_0[3] || VAR_0[1] < -VAR_0[3]
       || VAR_0[2] > VAR_0[3] || VAR_0[2] < -VAR_0[3] ) {
      return 0;
   }
   else {
      return 1;
   }
}
