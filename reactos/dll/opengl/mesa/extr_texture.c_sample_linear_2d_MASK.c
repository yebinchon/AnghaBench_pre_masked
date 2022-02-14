
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_texture_object {int * Image; } ;
typedef size_t GLuint ;
typedef int GLubyte ;
typedef int GLfloat ;


 int FUNC_0 (struct gl_texture_object const*,int ,int const,int const,int *,int *,int *,int *) ;

__attribute__((used)) static void FUNC_1( const struct gl_texture_object *VAR_0, GLuint VAR_1,
                              const GLfloat VAR_2[], const GLfloat VAR_3[],
                              const GLfloat VAR_4[], const GLfloat VAR_5[],
                              GLubyte VAR_6[], GLubyte VAR_7[], GLubyte VAR_8[],
                              GLubyte VAR_9[] )
{
   GLuint VAR_10;
   for (VAR_10=0;VAR_10<VAR_1;VAR_10++) {
      FUNC_0( VAR_0, VAR_0->Image[0], VAR_2[VAR_10], VAR_3[VAR_10],
                        &VAR_6[VAR_10], &VAR_7[VAR_10], &VAR_8[VAR_10], &VAR_9[VAR_10]);
   }
}
