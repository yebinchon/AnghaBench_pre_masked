
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* BackAlpha; struct TYPE_4__* FrontAlpha; struct TYPE_4__* Stencil; struct TYPE_4__* Accum; struct TYPE_4__* Depth; } ;
typedef TYPE_1__ GLframebuffer ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1( GLframebuffer *VAR_0 )
{
   if (VAR_0) {
      if (VAR_0->Depth) {
         FUNC_0( VAR_0->Depth );
      }
      if (VAR_0->Accum) {
         FUNC_0( VAR_0->Accum );
      }
      if (VAR_0->Stencil) {
         FUNC_0( VAR_0->Stencil );
      }
      if (VAR_0->FrontAlpha) {
         FUNC_0( VAR_0->FrontAlpha );
      }
      if (VAR_0->BackAlpha) {
         FUNC_0( VAR_0->BackAlpha );
      }
      FUNC_0(VAR_0);
   }
}
