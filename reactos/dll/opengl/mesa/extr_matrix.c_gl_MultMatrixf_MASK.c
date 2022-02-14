
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int MatrixMode; } ;
struct TYPE_8__ {void* NewTextureMatrix; int TextureMatrix; void* NewProjectionMatrix; int ProjectionMatrix; void* NewModelViewMatrix; int ModelViewMatrix; TYPE_1__ Transform; } ;
typedef int GLfloat ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;



 void* VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (int ,int ,int const*) ;

void FUNC_4( GLcontext *VAR_2, const GLfloat *VAR_3 )
{
   if (FUNC_0(VAR_2)) {
      FUNC_1( VAR_2, VAR_0, "glMultMatrix" );
      return;
   }
   switch (VAR_2->Transform.MatrixMode) {
      case 130:
         FUNC_3( VAR_2->ModelViewMatrix, VAR_2->ModelViewMatrix, VAR_3 );
  VAR_2->NewModelViewMatrix = VAR_1;
  break;
      case 129:
  FUNC_3( VAR_2->ProjectionMatrix, VAR_2->ProjectionMatrix, VAR_3 );
  VAR_2->NewProjectionMatrix = VAR_1;
  break;
      case 128:
  FUNC_3( VAR_2->TextureMatrix, VAR_2->TextureMatrix, VAR_3 );
  VAR_2->NewTextureMatrix = VAR_1;
  break;
      default:
         FUNC_2(VAR_2, "Bad matrix mode in gl_MultMatrixf");
   }
}
