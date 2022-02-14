
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int RedScale; int RedBias; int GreenScale; int GreenBias; int BlueScale; int BlueBias; int AlphaScale; int AlphaBias; } ;
struct TYPE_5__ {TYPE_1__ Pixel; } ;
typedef size_t GLint ;
typedef int GLfloat ;
typedef TYPE_2__ GLcontext ;


 int FUNC_0 (int,float,float) ;

__attribute__((used)) static void FUNC_1( GLcontext *VAR_0,
                                 GLint VAR_1,
     GLfloat VAR_2[], GLfloat VAR_3[],
     GLfloat VAR_4[], GLfloat VAR_5[] )
{
   register GLint VAR_6;
   register GLfloat VAR_7, VAR_8, VAR_9, VAR_10;

   for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
      VAR_7 = VAR_2[VAR_6] * VAR_0->Pixel.RedScale + VAR_0->Pixel.RedBias;
      VAR_8 = VAR_3[VAR_6] * VAR_0->Pixel.GreenScale + VAR_0->Pixel.GreenBias;
      VAR_9 = VAR_4[VAR_6] * VAR_0->Pixel.BlueScale + VAR_0->Pixel.BlueBias;
      VAR_10 = VAR_5[VAR_6] * VAR_0->Pixel.AlphaScale + VAR_0->Pixel.AlphaBias;
      VAR_2[VAR_6] = FUNC_0( VAR_7, 0.0F, 1.0F );
      VAR_3[VAR_6] = FUNC_0( VAR_8, 0.0F, 1.0F );
      VAR_4[VAR_6] = FUNC_0( VAR_9, 0.0F, 1.0F );
      VAR_5[VAR_6] = FUNC_0( VAR_10, 0.0F, 1.0F );
   }
}
