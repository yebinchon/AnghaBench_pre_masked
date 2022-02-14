
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct gl_texture_object {int PaletteSize; int PaletteIntFormat; int Palette; scalar_t__ PaletteFormat; } ;
struct gl_image {int Width; int Components; int Data; } ;
struct TYPE_9__ {int (* UpdateTexturePalette ) (TYPE_3__*,struct gl_texture_object*) ;} ;
struct TYPE_8__ {struct gl_texture_object* Proxy2D; struct gl_texture_object* Proxy1D; struct gl_texture_object* Current2D; struct gl_texture_object* Current1D; } ;
struct TYPE_10__ {TYPE_2__ Driver; TYPE_1__ Texture; } ;
typedef int GLenum ;
typedef TYPE_3__ GLcontext ;
typedef scalar_t__ GLboolean ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*,struct gl_texture_object*) ;

void FUNC_6( GLcontext *VAR_6, GLenum VAR_7,
                    GLenum VAR_8, struct gl_image *VAR_9 )
{
   struct gl_texture_object *VAR_10;
   GLboolean VAR_11 = VAR_0;

   if (FUNC_0(VAR_6)) {
      FUNC_3( VAR_6, VAR_2, "glGetBooleanv" );
      return;
   }

   switch (VAR_7) {
      case 129:
         VAR_10 = VAR_6->Texture.Current1D;
         break;
      case 128:
         VAR_10 = VAR_6->Texture.Current2D;
         break;
      case 131:
         VAR_10 = VAR_6->Texture.Proxy1D;
         VAR_11 = VAR_4;
         break;
      case 130:
         VAR_10 = VAR_6->Texture.Proxy2D;
         VAR_11 = VAR_4;
         break;
      default:
         FUNC_3(VAR_6, VAR_1, "glColorTableEXT(target)");
         return;
   }



   if (VAR_9->Width < 1 || VAR_9->Width > VAR_5
       || !FUNC_4(VAR_9->Width)) {
      FUNC_3(VAR_6, VAR_3, "glColorTableEXT(width)");
      if (VAR_11) {
         VAR_10->PaletteSize = 0;
         VAR_10->PaletteIntFormat = 0;
         VAR_10->PaletteFormat = 0;
      }
      return;
   }


  VAR_10->PaletteSize = VAR_9->Width;
  VAR_10->PaletteIntFormat = VAR_8;
  VAR_10->PaletteFormat = FUNC_2(VAR_8);
  if (!VAR_11) {
     FUNC_1(VAR_10->Palette, VAR_9->Data, VAR_9->Width*VAR_9->Components);
     if (VAR_6->Driver.UpdateTexturePalette) {
        (*VAR_6->Driver.UpdateTexturePalette)( VAR_6, VAR_10 );
     }
   }
}
