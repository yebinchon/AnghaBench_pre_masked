
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct gl_texture_image {scalar_t__ Width; scalar_t__ Format; scalar_t__ Border; scalar_t__ Height; } ;
struct TYPE_13__ {TYPE_4__* Proxy2D; TYPE_3__* Proxy1D; TYPE_2__* Current2D; TYPE_1__* Current1D; } ;
struct TYPE_14__ {TYPE_5__ Texture; } ;
struct TYPE_12__ {struct gl_texture_image** Image; } ;
struct TYPE_11__ {struct gl_texture_image** Image; } ;
struct TYPE_10__ {struct gl_texture_image** Image; } ;
struct TYPE_9__ {struct gl_texture_image** Image; } ;
typedef scalar_t__ GLint ;
typedef int GLenum ;
typedef TYPE_6__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_6__*,int ,char*) ;

void FUNC_1( GLcontext *VAR_3, GLenum VAR_4, GLint VAR_5,
                                GLenum VAR_6, GLint *VAR_7 )
{
   struct gl_texture_image *VAR_8;

   if (VAR_5<0 || VAR_5>=VAR_2) {
      FUNC_0( VAR_3, VAR_1, "glGetTexLevelParameter[if]v" );
      return;
   }

   switch (VAR_4) {
      case 140:
         VAR_8 = VAR_3->Texture.Current1D->Image[VAR_5];
         switch (VAR_6) {
     case 128:
        *VAR_7 = VAR_8->Width;
        break;
     case 135:
        *VAR_7 = VAR_8->Format;
        break;
     case 136:
        *VAR_7 = VAR_8->Border;
        break;
            case 129:
            case 134:
            case 137:
            case 138:
            case 131:
            case 130:
               *VAR_7 = 8;
               break;
            case 132:
               *VAR_7 = 8;
               break;
     default:
        FUNC_0( VAR_3, VAR_0,
                         "glGetTexLevelParameter[if]v(pname)" );
  }
  break;
      case 139:
         VAR_8 = VAR_3->Texture.Current2D->Image[VAR_5];
  switch (VAR_6) {
     case 128:
        *VAR_7 = VAR_8->Width;
        break;
     case 133:
        *VAR_7 = VAR_8->Height;
        break;
     case 135:
        *VAR_7 = VAR_8->Format;
        break;
     case 136:
        *VAR_7 = VAR_8->Border;
        break;
            case 129:
            case 134:
            case 137:
            case 138:
            case 131:
            case 130:
               *VAR_7 = 8;
               break;
            case 132:
               *VAR_7 = 8;
               break;
     default:
        FUNC_0( VAR_3, VAR_0,
                         "glGetTexLevelParameter[if]v(pname)" );
  }
  break;
      case 142:
         VAR_8 = VAR_3->Texture.Proxy1D->Image[VAR_5];
         switch (VAR_6) {
     case 128:
        *VAR_7 = VAR_8->Width;
        break;
     case 135:
        *VAR_7 = VAR_8->Format;
        break;
     case 136:
        *VAR_7 = VAR_8->Border;
        break;
            case 129:
            case 134:
            case 137:
            case 138:
            case 131:
            case 130:
               *VAR_7 = 8;
               break;
            case 132:
               *VAR_7 = 8;
               break;
     default:
        FUNC_0( VAR_3, VAR_0,
                         "glGetTexLevelParameter[if]v(pname)" );
  }
  break;
      case 141:
         VAR_8 = VAR_3->Texture.Proxy2D->Image[VAR_5];
  switch (VAR_6) {
     case 128:
        *VAR_7 = VAR_8->Width;
        break;
     case 133:
        *VAR_7 = VAR_8->Height;
        break;
     case 135:
        *VAR_7 = VAR_8->Format;
        break;
     case 136:
        *VAR_7 = VAR_8->Border;
        break;
            case 129:
            case 134:
            case 137:
            case 138:
            case 131:
            case 130:
               *VAR_7 = 8;
               break;
            case 132:
               *VAR_7 = 8;
               break;
     default:
        FUNC_0( VAR_3, VAR_0,
                         "glGetTexLevelParameter[if]v(pname)" );
  }
  break;
     default:
  FUNC_0(VAR_3, VAR_0, "glGetTexLevelParameter[if]v(target)");
   }
}
