
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int MatrixMode; } ;
struct TYPE_8__ {void* NewTextureMatrix; void* TextureMatrixType; int TextureMatrix; void* NewProjectionMatrix; void* ProjectionMatrixType; int ProjectionMatrix; void* NewModelViewMatrix; void* ModelViewMatrixType; int ModelViewInv; int ModelViewMatrix; TYPE_1__ Transform; } ;
typedef int GLfloat ;
typedef TYPE_2__ GLcontext ;


 void* VAR_0 ;
 int VAR_1 ;



 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;

void FUNC_4( GLcontext *VAR_4 )
{
   if (FUNC_0(VAR_4)) {
      FUNC_2( VAR_4, VAR_1, "glLoadIdentity" );
      return;
   }
   switch (VAR_4->Transform.MatrixMode) {
      case 130:
         FUNC_1( VAR_4->ModelViewMatrix, VAR_2, 16*sizeof(GLfloat) );
         FUNC_1( VAR_4->ModelViewInv, VAR_2, 16*sizeof(GLfloat) );
         VAR_4->ModelViewMatrixType = VAR_3;
  VAR_4->NewModelViewMatrix = VAR_0;
  break;
      case 129:
  FUNC_1( VAR_4->ProjectionMatrix, VAR_2, 16*sizeof(GLfloat) );
         VAR_4->ProjectionMatrixType = VAR_3;
  VAR_4->NewProjectionMatrix = VAR_0;
  break;
      case 128:
  FUNC_1( VAR_4->TextureMatrix, VAR_2, 16*sizeof(GLfloat) );
         VAR_4->TextureMatrixType = VAR_3;
  VAR_4->NewTextureMatrix = VAR_0;
  break;
      default:
         FUNC_3(VAR_4, "Bad matrix mode in gl_LoadIdentity");
   }
}
