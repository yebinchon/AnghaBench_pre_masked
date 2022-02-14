
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct gl_texture_object {int PaletteIntFormat; int PaletteSize; } ;
struct TYPE_6__ {struct gl_texture_object* Current2D; struct gl_texture_object* Current1D; } ;
struct TYPE_7__ {TYPE_1__ Texture; } ;
typedef int GLint ;
typedef int GLenum ;
typedef TYPE_2__ GLcontext ;
 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

void FUNC_2( GLcontext *VAR_2, GLenum VAR_3,
                                  GLenum VAR_4, GLint *VAR_5 )
{
   struct gl_texture_object *VAR_6;

   if (FUNC_0(VAR_2)) {
      FUNC_1( VAR_2, VAR_1, "glGetColorTableParameter" );
      return;
   }

   switch (VAR_3) {
      case 129:
         VAR_6 = VAR_2->Texture.Current1D;
         break;
      case 128:
         VAR_6 = VAR_2->Texture.Current2D;
         break;
      default:
         FUNC_1(VAR_2, VAR_0, "glGetColorTableParameter(target)");
         return;
   }

   switch (VAR_4) {
      case 135:
         if (VAR_6)
            *VAR_5 = VAR_6->PaletteIntFormat;
         break;
      case 130:
         if (VAR_6)
            *VAR_5 = VAR_6->PaletteSize;
         break;
      case 131:
         *VAR_5 = 8;
         break;
      case 134:
         *VAR_5 = 8;
         break;
      case 136:
         *VAR_5 = 8;
         break;
      case 137:
         *VAR_5 = 8;
         break;
      case 132:
         *VAR_5 = 8;
         break;
      case 133:
         *VAR_5 = 8;
         break;
      default:
         FUNC_1(VAR_2, VAR_0, "glGetColorTableParameter" );
         return;
   }
}
