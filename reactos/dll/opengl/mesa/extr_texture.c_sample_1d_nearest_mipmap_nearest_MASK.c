
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gl_texture_object {TYPE_1__** Image; } ;
struct TYPE_2__ {scalar_t__ WidthLog2; } ;
typedef int GLubyte ;
typedef scalar_t__ GLint ;
typedef float GLfloat ;


 int FUNC_0 (struct gl_texture_object const*,TYPE_1__*,float,int *,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_1( const struct gl_texture_object *VAR_0,
                                  GLfloat VAR_1, GLfloat VAR_2,
                                  GLubyte *VAR_3, GLubyte *VAR_4,
                                  GLubyte *VAR_5, GLubyte *VAR_6 )
{
   GLint VAR_7;
   if (VAR_2<=0.5F) {
      VAR_7 = 0;
   }
   else {
      GLint VAR_8 = VAR_0->Image[0]->WidthLog2;
      VAR_7 = (GLint) (VAR_2 + 0.499999F);
      if (VAR_7>VAR_8 ) {
         VAR_7 = VAR_8;
      }
   }
   FUNC_0( VAR_0, VAR_0->Image[VAR_7],
                      VAR_1, VAR_3, VAR_4, VAR_5, VAR_6 );
}
