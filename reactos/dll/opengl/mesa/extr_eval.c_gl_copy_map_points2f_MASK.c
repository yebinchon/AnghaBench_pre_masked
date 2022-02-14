
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;
typedef int GLint ;
typedef int GLfloat ;
typedef int GLenum ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

GLfloat *FUNC_2( GLenum VAR_0,
           GLint VAR_1, GLint VAR_2,
           GLint VAR_3, GLint VAR_4,
           const GLfloat *VAR_5 )
{
   GLfloat *VAR_6, *VAR_7;
   GLuint VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
   GLint VAR_14;

   VAR_11 = FUNC_0(VAR_0);

   if (!VAR_5 || VAR_11==0) {
      return ((void*)0);
   }




   VAR_12 = (VAR_2 == 2 && VAR_4 == 2)? 0 : VAR_2*VAR_4;
   VAR_13 = (VAR_2 > VAR_4 ? VAR_2 : VAR_4)*VAR_11;

   if(VAR_13>VAR_12)
     VAR_6 = (GLfloat *) FUNC_1((VAR_2*VAR_4*VAR_11+VAR_13)*sizeof(GLfloat));
   else
     VAR_6 = (GLfloat *) FUNC_1((VAR_2*VAR_4*VAR_11+VAR_12)*sizeof(GLfloat));


   VAR_14 = VAR_1 - VAR_4*VAR_3;

   if (VAR_6)
      for (VAR_8=0, VAR_7=VAR_6; VAR_8<VAR_2; VAR_8++, VAR_5 += VAR_14)
  for (VAR_9=0; VAR_9<VAR_4; VAR_9++, VAR_5 += VAR_3)
     for (VAR_10=0; VAR_10<VAR_11; VAR_10++)
        *VAR_7++ = VAR_5[VAR_10];

   return VAR_6;
}
