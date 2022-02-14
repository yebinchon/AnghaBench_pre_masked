
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* Current2D; TYPE_1__* Current1D; } ;
struct TYPE_10__ {TYPE_3__ Texture; } ;
struct TYPE_8__ {float* BorderColor; float Priority; int WrapT; int WrapS; int MinFilter; int MagFilter; } ;
struct TYPE_7__ {float* BorderColor; float Priority; int WrapT; int WrapS; int MinFilter; int MagFilter; } ;
typedef float GLfloat ;
typedef int GLenum ;
typedef TYPE_4__ GLcontext ;


 float FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;

void FUNC_2( GLcontext *VAR_2,
                           GLenum VAR_3, GLenum VAR_4, GLfloat *VAR_5 )
{
   switch (VAR_3) {
      case 136:
         switch (VAR_4) {
     case 133:
        *VAR_5 = FUNC_0(VAR_2->Texture.Current1D->MagFilter);
        break;
     case 132:
        *VAR_5 = FUNC_0(VAR_2->Texture.Current1D->MinFilter);
        break;
     case 129:
        *VAR_5 = FUNC_0(VAR_2->Texture.Current1D->WrapS);
        break;
     case 128:
        *VAR_5 = FUNC_0(VAR_2->Texture.Current1D->WrapT);
        break;
     case 134:
               VAR_5[0] = VAR_2->Texture.Current1D->BorderColor[0] / 255.0f;
               VAR_5[1] = VAR_2->Texture.Current1D->BorderColor[1] / 255.0f;
               VAR_5[2] = VAR_2->Texture.Current1D->BorderColor[2] / 255.0f;
               VAR_5[3] = VAR_2->Texture.Current1D->BorderColor[3] / 255.0f;
        break;
     case 130:
               *VAR_5 = FUNC_0(VAR_1);
        break;
            case 131:
               *VAR_5 = VAR_2->Texture.Current1D->Priority;
        break;
     default:
        FUNC_1( VAR_2, VAR_0, "glGetTexParameterfv(pname)" );
  }
         break;
      case 135:
         switch (VAR_4) {
     case 133:
        *VAR_5 = FUNC_0(VAR_2->Texture.Current2D->MagFilter);
        break;
     case 132:
        *VAR_5 = FUNC_0(VAR_2->Texture.Current2D->MinFilter);
        break;
     case 129:
        *VAR_5 = FUNC_0(VAR_2->Texture.Current2D->WrapS);
        break;
     case 128:
        *VAR_5 = FUNC_0(VAR_2->Texture.Current2D->WrapT);
        break;
     case 134:
               VAR_5[0] = VAR_2->Texture.Current2D->BorderColor[0] / 255.0f;
               VAR_5[1] = VAR_2->Texture.Current2D->BorderColor[1] / 255.0f;
               VAR_5[2] = VAR_2->Texture.Current2D->BorderColor[2] / 255.0f;
               VAR_5[3] = VAR_2->Texture.Current2D->BorderColor[3] / 255.0f;
               break;
     case 130:
               *VAR_5 = FUNC_0(VAR_1);
        break;
     case 131:
               *VAR_5 = VAR_2->Texture.Current2D->Priority;
        break;
     default:
        FUNC_1( VAR_2, VAR_0, "glGetTexParameterfv(pname)" );
  }
  break;
      default:
         FUNC_1( VAR_2, VAR_0, "glGetTexParameterfv(target)" );
   }
}
