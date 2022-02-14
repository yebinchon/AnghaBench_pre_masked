
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ DrawBuffer; } ;
struct TYPE_10__ {TYPE_3__* Buffer; TYPE_2__ Color; TYPE_1__* Visual; } ;
struct TYPE_9__ {int Width; int Height; int * BackAlpha; int * Alpha; int * FrontAlpha; } ;
struct TYPE_7__ {scalar_t__ BackAlphaEnabled; scalar_t__ FrontAlphaEnabled; } ;
typedef int GLubyte ;
typedef int GLint ;
typedef TYPE_4__ GLcontext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3( GLcontext* VAR_3 )
{
   GLint VAR_4 = VAR_3->Buffer->Width * VAR_3->Buffer->Height * sizeof(GLubyte);

   if (VAR_3->Visual->FrontAlphaEnabled) {
      if (VAR_3->Buffer->FrontAlpha) {
         FUNC_0( VAR_3->Buffer->FrontAlpha );
      }
      VAR_3->Buffer->FrontAlpha = (GLubyte *) FUNC_2( VAR_4 );
      if (!VAR_3->Buffer->FrontAlpha) {

         FUNC_1( VAR_3, VAR_2, "Couldn't allocate front alpha buffer" );
      }
   }
   if (VAR_3->Visual->BackAlphaEnabled) {
      if (VAR_3->Buffer->BackAlpha) {
         FUNC_0( VAR_3->Buffer->BackAlpha );
      }
      VAR_3->Buffer->BackAlpha = (GLubyte *) FUNC_2( VAR_4 );
      if (!VAR_3->Buffer->BackAlpha) {

         FUNC_1( VAR_3, VAR_2, "Couldn't allocate back alpha buffer" );
      }
   }
   if (VAR_3->Color.DrawBuffer==VAR_1) {
      VAR_3->Buffer->Alpha = VAR_3->Buffer->FrontAlpha;
   }
   if (VAR_3->Color.DrawBuffer==VAR_0) {
      VAR_3->Buffer->Alpha = VAR_3->Buffer->BackAlpha;
   }
}
