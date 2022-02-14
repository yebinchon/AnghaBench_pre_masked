
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * EnvColor; int EnvMode; } ;
struct TYPE_6__ {TYPE_1__ Texture; } ;
typedef int GLint ;
typedef scalar_t__ GLenum ;
typedef TYPE_2__ GLcontext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;


 int FUNC_1 (TYPE_2__*,int ,char*) ;

void FUNC_2( GLcontext *VAR_2,
                     GLenum VAR_3, GLenum VAR_4, GLint *VAR_5 )
{
   if (VAR_3!=VAR_1) {
      FUNC_1( VAR_2, VAR_0, "glGetTexEnvfv(target)" );
      return;
   }
   switch (VAR_4) {
      case 128:
         *VAR_5 = (GLint) VAR_2->Texture.EnvMode;
  break;
      case 129:
  VAR_5[0] = FUNC_0( VAR_2->Texture.EnvColor[0] );
  VAR_5[1] = FUNC_0( VAR_2->Texture.EnvColor[1] );
  VAR_5[2] = FUNC_0( VAR_2->Texture.EnvColor[2] );
  VAR_5[3] = FUNC_0( VAR_2->Texture.EnvColor[3] );
  break;
      default:
         FUNC_1( VAR_2, VAR_0, "glGetTexEnvfv(pname)" );
   }
}
