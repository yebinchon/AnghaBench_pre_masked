
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int Height; int Width; scalar_t__ Enabled; } ;
struct TYPE_7__ {scalar_t__ DrawBuffer; int* ClearColor; } ;
struct TYPE_11__ {TYPE_4__* Buffer; TYPE_3__ Scissor; TYPE_2__* Visual; TYPE_1__ Color; } ;
struct TYPE_10__ {int* FrontAlpha; int* BackAlpha; int Ymin; int Width; int Height; int Xmin; } ;
struct TYPE_8__ {int AlphaScale; scalar_t__ BackAlphaEnabled; scalar_t__ FrontAlphaEnabled; } ;
typedef int GLubyte ;
typedef int GLint ;
typedef TYPE_5__ GLcontext ;


 int* FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int*,int,int) ;

void FUNC_2( GLcontext* VAR_3 )
{
   GLint VAR_4;


   for (VAR_4=0;VAR_4<2;VAR_4++) {


      GLubyte *VAR_5 = ((void*)0);
      if (VAR_4==0
          && ( VAR_3->Color.DrawBuffer==VAR_1
              || VAR_3->Color.DrawBuffer==VAR_2)
          && VAR_3->Visual->FrontAlphaEnabled && VAR_3->Buffer->FrontAlpha) {
         VAR_5 = VAR_3->Buffer->FrontAlpha;
      }
      else if (VAR_4==1
               && ( VAR_3->Color.DrawBuffer==VAR_0
                   || VAR_3->Color.DrawBuffer==VAR_2)
               && VAR_3->Visual->BackAlphaEnabled && VAR_3->Buffer->BackAlpha) {
         VAR_5 = VAR_3->Buffer->BackAlpha;
      }


      if (VAR_5) {
         GLubyte VAR_6 = (GLint) (VAR_3->Color.ClearColor[3]
                                   * VAR_3->Visual->AlphaScale);
         if (VAR_3->Scissor.Enabled) {

            GLint VAR_7, VAR_8;
            for (VAR_8=0;VAR_8<VAR_3->Scissor.Height;VAR_8++) {
               GLubyte *VAR_9 = FUNC_0(VAR_3->Buffer->Xmin,
                                          VAR_3->Buffer->Ymin+VAR_8);
               for (VAR_7=0;VAR_7<VAR_3->Scissor.Width;VAR_7++) {
                  *VAR_9++ = VAR_6;
               }
            }
         }
         else {

            FUNC_1( VAR_5, VAR_6, VAR_3->Buffer->Width*VAR_3->Buffer->Height );
         }
      }
   }
}
