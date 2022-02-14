
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int EnvColor; int EnvMode; } ;
struct TYPE_6__ {TYPE_1__ Texture; } ;
typedef int GLfloat ;
typedef scalar_t__ GLenum ;
typedef TYPE_2__ GLcontext ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;


 int FUNC_2 (TYPE_2__*,int ,char*) ;

void FUNC_3( GLcontext *VAR_2,
                     GLenum VAR_3, GLenum VAR_4, GLfloat *VAR_5 )
{
   if (VAR_3!=VAR_1) {
      FUNC_2( VAR_2, VAR_0, "glGetTexEnvfv(target)" );
      return;
   }
   switch (VAR_4) {
      case 128:
         *VAR_5 = FUNC_1(VAR_2->Texture.EnvMode);
  break;
      case 129:
  FUNC_0( VAR_5, VAR_2->Texture.EnvColor );
  break;
      default:
         FUNC_2( VAR_2, VAR_0, "glGetTexEnvfv(pname)" );
   }
}
