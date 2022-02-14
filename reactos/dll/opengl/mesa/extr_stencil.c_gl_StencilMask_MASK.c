
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ WriteMask; } ;
struct TYPE_7__ {TYPE_1__ Stencil; } ;
typedef scalar_t__ GLuint ;
typedef scalar_t__ GLstencil ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

void FUNC_2( GLcontext *VAR_1, GLuint VAR_2 )
{
   if (FUNC_0(VAR_1)) {
      FUNC_1( VAR_1, VAR_0, "glStencilMask" );
      return;
   }
   VAR_1->Stencil.WriteMask = (GLstencil) VAR_2;
}
