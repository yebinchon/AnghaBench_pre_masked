
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gl_texture_object {TYPE_1__** Image; } ;
struct TYPE_2__ {scalar_t__ MaxLog2; } ;
typedef int GLubyte ;
typedef scalar_t__ GLint ;
typedef float GLfloat ;


 int FUNC_0 (struct gl_texture_object const*,TYPE_1__*,float,float,int *,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_1( const struct gl_texture_object *VAR_0,
                                 GLfloat VAR_1, GLfloat VAR_2, GLfloat VAR_3,
                                 GLubyte *VAR_4, GLubyte *VAR_5,
                                 GLubyte *VAR_6, GLubyte *VAR_7 )
{
   GLint VAR_8;
   if (VAR_3<=0.5F) {
      VAR_8 = 0;
   }
   else {
      GLint VAR_9 = VAR_0->Image[0]->MaxLog2;
      VAR_8 = (GLint) (VAR_3 + 0.499999F);
      if (VAR_8>VAR_9) {
         VAR_8 = VAR_9;
      }
   }
   FUNC_0( VAR_0, VAR_0->Image[VAR_8],
                     VAR_1, VAR_2, VAR_4, VAR_5, VAR_6, VAR_7 );
}
