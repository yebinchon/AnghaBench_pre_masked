
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int MatrixMode; } ;
struct TYPE_8__ {void* NewTextureMatrix; int * TextureMatrix; void* NewProjectionMatrix; int * ProjectionMatrix; void* NewModelViewMatrix; int * ModelViewMatrix; TYPE_1__ Transform; } ;
typedef int GLfloat ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;



 void* VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (TYPE_2__*,char*) ;

void FUNC_3( GLcontext *VAR_2, GLfloat VAR_3, GLfloat VAR_4, GLfloat VAR_5 )
{
   GLfloat *VAR_6;

   if (FUNC_0(VAR_2)) {
      FUNC_1( VAR_2, VAR_0, "glScale" );
      return;
   }
   switch (VAR_2->Transform.MatrixMode) {
      case 130:
         VAR_6 = VAR_2->ModelViewMatrix;
  VAR_2->NewModelViewMatrix = VAR_1;
  break;
      case 129:
         VAR_6 = VAR_2->ProjectionMatrix;
  VAR_2->NewProjectionMatrix = VAR_1;
  break;
      case 128:
         VAR_6 = VAR_2->TextureMatrix;
  VAR_2->NewTextureMatrix = VAR_1;
  break;
      default:
         FUNC_2(VAR_2, "Bad matrix mode in gl_Scalef");
         return;
   }
   VAR_6[0] *= VAR_3; VAR_6[4] *= VAR_4; VAR_6[8] *= VAR_5;
   VAR_6[1] *= VAR_3; VAR_6[5] *= VAR_4; VAR_6[9] *= VAR_5;
   VAR_6[2] *= VAR_3; VAR_6[6] *= VAR_4; VAR_6[10] *= VAR_5;
   VAR_6[3] *= VAR_3; VAR_6[7] *= VAR_4; VAR_6[11] *= VAR_5;
}
