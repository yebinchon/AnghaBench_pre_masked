
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;
typedef int GLint ;
typedef scalar_t__ GLfloat ;
typedef int GLenum ;
typedef int GLdouble ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

GLfloat *FUNC_2( GLenum VAR_0,
           GLint VAR_1, GLint VAR_2,
           const GLdouble *VAR_3 )
{
   GLfloat *VAR_4, *VAR_5;
   GLuint VAR_6, VAR_7, VAR_8 = FUNC_0(VAR_0);

   if (!VAR_3 || VAR_8==0) {
      return ((void*)0);
   }

   VAR_4 = (GLfloat *) FUNC_1(VAR_2 * VAR_8 * sizeof(GLfloat));

   if(VAR_4)
      for(VAR_6=0, VAR_5=VAR_4; VAR_6<VAR_2; VAR_6++, VAR_3+=VAR_1)
 for(VAR_7=0; VAR_7<VAR_8; VAR_7++)
   *VAR_5++ = (GLfloat) VAR_3[VAR_7];

   return VAR_4;
}
