
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* DepthBias; void* DepthScale; void* AlphaBias; void* AlphaScale; void* BlueBias; void* BlueScale; void* GreenBias; void* GreenScale; void* RedBias; void* RedScale; void* IndexOffset; void* IndexShift; void* MapStencilFlag; void* MapColorFlag; } ;
struct TYPE_8__ {TYPE_1__ Pixel; } ;
typedef void* GLint ;
typedef void* GLfloat ;
typedef int GLenum ;
typedef TYPE_2__ GLcontext ;
 void* VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;




 void* VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3( GLcontext *VAR_4, GLenum VAR_5, GLfloat VAR_6 )
{
   if (FUNC_0(VAR_4)) {
      FUNC_1( VAR_4, VAR_2, "glPixelTransfer" );
      return;
   }

   switch (VAR_5) {
      case 131:
         VAR_4->Pixel.MapColorFlag = VAR_6 ? VAR_3 : VAR_0;
  break;
      case 130:
         VAR_4->Pixel.MapStencilFlag = VAR_6 ? VAR_3 : VAR_0;
  break;
      case 132:
         VAR_4->Pixel.IndexShift = (GLint) VAR_6;
  break;
      case 133:
         VAR_4->Pixel.IndexOffset = (GLint) VAR_6;
  break;
      case 128:
         VAR_4->Pixel.RedScale = VAR_6;
  break;
      case 129:
         VAR_4->Pixel.RedBias = VAR_6;
  break;
      case 134:
         VAR_4->Pixel.GreenScale = VAR_6;
  break;
      case 135:
         VAR_4->Pixel.GreenBias = VAR_6;
  break;
      case 138:
         VAR_4->Pixel.BlueScale = VAR_6;
  break;
      case 139:
         VAR_4->Pixel.BlueBias = VAR_6;
  break;
      case 140:
         VAR_4->Pixel.AlphaScale = VAR_6;
  break;
      case 141:
         VAR_4->Pixel.AlphaBias = VAR_6;
  break;
      case 136:
         VAR_4->Pixel.DepthScale = VAR_6;
  break;
      case 137:
         VAR_4->Pixel.DepthBias = VAR_6;
  break;
      default:
         FUNC_1( VAR_4, VAR_1, "glPixelTransfer(pname)" );
         return;
   }
   FUNC_2( VAR_4 );
}
