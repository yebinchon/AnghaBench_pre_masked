
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int (* NearFar ) (TYPE_3__*,float,float) ;} ;
struct TYPE_9__ {int MatrixMode; } ;
struct TYPE_11__ {float** NearFarStack; size_t ProjectionStackDepth; void* NewTextureMatrix; int TextureMatrix; TYPE_2__ Driver; void* NewProjectionMatrix; int ProjectionMatrix; void* NewModelViewMatrix; int ModelViewMatrix; TYPE_1__ Transform; } ;
typedef int GLfloat ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;



 void* VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 float FUNC_1 (int,int) ;
 int FUNC_2 (int ,int const*,int) ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_3__*,float,float) ;

void FUNC_6( GLcontext *VAR_2, const GLfloat *VAR_3 )
{
   if (FUNC_0(VAR_2)) {
      FUNC_3( VAR_2, VAR_0, "glLoadMatrix" );
      return;
   }
   switch (VAR_2->Transform.MatrixMode) {
      case 130:
         FUNC_2( VAR_2->ModelViewMatrix, VAR_3, 16*sizeof(GLfloat) );
  VAR_2->NewModelViewMatrix = VAR_1;
  break;
      case 129:
  FUNC_2( VAR_2->ProjectionMatrix, VAR_3, 16*sizeof(GLfloat) );
  VAR_2->NewProjectionMatrix = VAR_1;
         {
            float VAR_4,VAR_5,VAR_6,VAR_7;


            VAR_6 = VAR_3[2*4+2];
            VAR_7 = VAR_3[3*4+2];

            VAR_4 = VAR_7 / (VAR_6-1);
            VAR_5 = VAR_7 / (VAR_6+1);





            VAR_2->NearFarStack[VAR_2->ProjectionStackDepth][0] = VAR_4;
            VAR_2->NearFarStack[VAR_2->ProjectionStackDepth][1] = VAR_5;

            if (VAR_2->Driver.NearFar) {
               (*VAR_2->Driver.NearFar)( VAR_2, VAR_4, VAR_5 );
            }
         }
  break;
      case 128:
  FUNC_2( VAR_2->TextureMatrix, VAR_3, 16*sizeof(GLfloat) );
  VAR_2->NewTextureMatrix = VAR_1;
  break;
      default:
         FUNC_4(VAR_2, "Bad matrix mode in gl_LoadMatrixf");
   }
}
