
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int Clear; } ;
struct TYPE_8__ {scalar_t__ Enabled; } ;
struct TYPE_11__ {TYPE_4__* Buffer; TYPE_3__ Stencil; TYPE_2__ Scissor; TYPE_1__* Visual; } ;
struct TYPE_10__ {scalar_t__ Xmax; scalar_t__ Xmin; scalar_t__ Ymin; scalar_t__ Ymax; int Width; int Height; int * Stencil; } ;
struct TYPE_7__ {scalar_t__ StencilBits; } ;
typedef int GLstencil ;
typedef scalar_t__ GLint ;
typedef TYPE_5__ GLcontext ;


 int FUNC_0 (int *,int ,int) ;
 int * FUNC_1 (scalar_t__,scalar_t__) ;

void FUNC_2( GLcontext *VAR_0 )
{
   if (VAR_0->Visual->StencilBits==0 || !VAR_0->Buffer->Stencil) {

      return;
   }

   if (VAR_0->Scissor.Enabled) {

      GLint VAR_1;
      GLint VAR_2 = VAR_0->Buffer->Xmax - VAR_0->Buffer->Xmin + 1;
      for (VAR_1=VAR_0->Buffer->Ymin; VAR_1<=VAR_0->Buffer->Ymax; VAR_1++) {
         GLstencil *VAR_3 = FUNC_1( VAR_0->Buffer->Xmin, VAR_1 );
         FUNC_0( VAR_3, VAR_0->Stencil.Clear, VAR_2 * sizeof(GLstencil) );
      }
   }
   else {

      FUNC_0( VAR_0->Buffer->Stencil, VAR_0->Stencil.Clear,
              VAR_0->Buffer->Width * VAR_0->Buffer->Height * sizeof(GLstencil) );
   }
}
