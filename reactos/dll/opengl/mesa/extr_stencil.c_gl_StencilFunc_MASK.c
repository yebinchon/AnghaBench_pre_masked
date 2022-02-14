
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Function; int ValueMask; int Ref; } ;
struct TYPE_7__ {TYPE_1__ Stencil; } ;
typedef int GLuint ;
typedef int GLint ;
typedef int GLenum ;
typedef TYPE_2__ GLcontext ;


 int FUNC_0 (int,int ,int) ;




 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;

void FUNC_3( GLcontext *VAR_3, GLenum VAR_4, GLint VAR_5, GLuint VAR_6 )
{
   GLint VAR_7;

   if (FUNC_1(VAR_3)) {
      FUNC_2( VAR_3, VAR_1, "glStencilFunc" );
      return;
   }

   switch (VAR_4) {
      case 129:
      case 130:
      case 131:
      case 132:
      case 133:
      case 134:
      case 128:
      case 135:
         VAR_3->Stencil.Function = VAR_4;
         break;
      default:
         FUNC_2( VAR_3, VAR_0, "glStencilFunc" );
         return;
   }

   VAR_7 = (1 << VAR_2) - 1;
   VAR_3->Stencil.Ref = FUNC_0( VAR_5, 0, VAR_7 );
   VAR_3->Stencil.ValueMask = VAR_6;
}
