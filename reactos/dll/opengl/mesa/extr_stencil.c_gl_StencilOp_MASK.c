
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int FailFunc; int ZFailFunc; int ZPassFunc; } ;
struct TYPE_7__ {TYPE_1__ Stencil; } ;
typedef int GLenum ;
typedef TYPE_2__ GLcontext ;




 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

void FUNC_2( GLcontext *VAR_2, GLenum VAR_3, GLenum VAR_4, GLenum VAR_5 )
{
   if (FUNC_0(VAR_2)) {
      FUNC_1( VAR_2, VAR_1, "glStencilOp" );
      return;
   }
   switch (VAR_3) {
      case 130:
      case 128:
      case 129:
      case 132:
      case 133:
      case 131:
         VAR_2->Stencil.FailFunc = VAR_3;
         break;
      default:
         FUNC_1( VAR_2, VAR_0, "glStencilOp" );
         return;
   }
   switch (VAR_4) {
      case 130:
      case 128:
      case 129:
      case 132:
      case 133:
      case 131:
         VAR_2->Stencil.ZFailFunc = VAR_4;
         break;
      default:
         FUNC_1( VAR_2, VAR_0, "glStencilOp" );
         return;
   }
   switch (VAR_5) {
      case 130:
      case 128:
      case 129:
      case 132:
      case 133:
      case 131:
         VAR_2->Stencil.ZPassFunc = VAR_5;
         break;
      default:
         FUNC_1( VAR_2, VAR_0, "glStencilOp" );
         return;
   }
}
