
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int (* TexEnv ) (TYPE_3__*,scalar_t__,scalar_t__ const*) ;} ;
struct TYPE_8__ {void** EnvColor; scalar_t__ EnvMode; } ;
struct TYPE_10__ {TYPE_2__ Driver; TYPE_1__ Texture; } ;
typedef int GLint ;
typedef scalar_t__ GLfloat ;
typedef scalar_t__ GLenum ;
typedef TYPE_3__ GLcontext ;


 void* FUNC_0 (scalar_t__ const,double,double) ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,scalar_t__ const*) ;

void FUNC_4( GLcontext *VAR_5,
                  GLenum VAR_6, GLenum VAR_7, const GLfloat *VAR_8 )
{
   if (FUNC_1(VAR_5)) {
      FUNC_2( VAR_5, VAR_1, "glTexEnv" );
      return;
   }

   if (VAR_6!=VAR_2) {
      FUNC_2( VAR_5, VAR_0, "glTexEnv(target)" );
      return;
   }

   if (VAR_7==VAR_4) {
      GLenum VAR_9 = (GLenum) (GLint) *VAR_8;
      switch (VAR_9) {
  case 129:
  case 131:
  case 130:
  case 128:
     VAR_5->Texture.EnvMode = VAR_9;
     break;
  default:
     FUNC_2( VAR_5, VAR_0, "glTexEnv(param)" );
     return;
      }
   }
   else if (VAR_7==VAR_3) {
      VAR_5->Texture.EnvColor[0] = FUNC_0( VAR_8[0], 0.0, 1.0 );
      VAR_5->Texture.EnvColor[1] = FUNC_0( VAR_8[1], 0.0, 1.0 );
      VAR_5->Texture.EnvColor[2] = FUNC_0( VAR_8[2], 0.0, 1.0 );
      VAR_5->Texture.EnvColor[3] = FUNC_0( VAR_8[3], 0.0, 1.0 );
   }
   else {
      FUNC_2( VAR_5, VAR_0, "glTexEnv(pname)" );
      return;
   }


   if (VAR_5->Driver.TexEnv) {
      (*VAR_5->Driver.TexEnv)( VAR_5, VAR_7, VAR_8 );
   }
}
