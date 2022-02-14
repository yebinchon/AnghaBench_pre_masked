
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* (* RendererString ) () ;} ;
struct TYPE_7__ {TYPE_1__ Driver; } ;
typedef int const GLubyte ;
typedef int GLenum ;
typedef TYPE_2__ GLcontext ;



 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 () ;

const GLubyte *FUNC_5( GLcontext *VAR_2, GLenum VAR_3 )
{
   static char VAR_4[1000];
   static char *VAR_5 = "Brian Paul & ReactOS Developers";
   static char *VAR_6 = "1.1";
   static char *VAR_7 = "GL_EXT_paletted_texture GL_EXT_bgra GL_WIN_swap_hint";

   if (FUNC_0(VAR_2)) {
      FUNC_1( VAR_2, VAR_1, "glGetString" );
      return (GLubyte *) 0;
   }

   switch (VAR_3) {
      case 129:
         return (GLubyte *) VAR_5;
      case 130:
         FUNC_3(VAR_4, "Mesa");
         if (VAR_2->Driver.RendererString) {
            FUNC_2(VAR_4, " ");
            FUNC_2(VAR_4, (*VAR_2->Driver.RendererString)());
         }
         return (GLubyte *) VAR_4;
      case 128:
         return (GLubyte *) VAR_6;
      case 131:
         return (GLubyte *) VAR_7;
      default:
         FUNC_1( VAR_2, VAR_0, "glGetString" );
         return (GLubyte *) 0;
   }
}
