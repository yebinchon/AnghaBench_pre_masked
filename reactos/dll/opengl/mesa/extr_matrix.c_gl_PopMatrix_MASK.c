
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int (* NearFar ) (TYPE_3__*,int ,int ) ;} ;
struct TYPE_9__ {int MatrixMode; } ;
struct TYPE_11__ {size_t ModelViewStackDepth; size_t ProjectionStackDepth; size_t TextureStackDepth; void* NewTextureMatrix; int * TextureStack; int TextureMatrix; TYPE_2__ Driver; int ** NearFarStack; void* NewProjectionMatrix; int * ProjectionStack; int ProjectionMatrix; void* NewModelViewMatrix; int * ModelViewStack; int ModelViewMatrix; TYPE_1__ Transform; } ;
typedef int GLfloat ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;


 int VAR_1 ;

 void* VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;

void FUNC_5( GLcontext *VAR_3 )
{
   if (FUNC_0(VAR_3)) {
      FUNC_2( VAR_3, VAR_0, "glPopMatrix" );
      return;
   }
   switch (VAR_3->Transform.MatrixMode) {
      case 130:
         if (VAR_3->ModelViewStackDepth==0) {
            FUNC_2( VAR_3, VAR_1, "glPopMatrix");
            return;
         }
         VAR_3->ModelViewStackDepth--;
         FUNC_1( VAR_3->ModelViewMatrix,
                 VAR_3->ModelViewStack[VAR_3->ModelViewStackDepth],
                 16*sizeof(GLfloat) );
         VAR_3->NewModelViewMatrix = VAR_2;
         break;
      case 129:
         if (VAR_3->ProjectionStackDepth==0) {
            FUNC_2( VAR_3, VAR_1, "glPopMatrix");
            return;
         }
         VAR_3->ProjectionStackDepth--;
         FUNC_1( VAR_3->ProjectionMatrix,
                 VAR_3->ProjectionStack[VAR_3->ProjectionStackDepth],
                 16*sizeof(GLfloat) );
         VAR_3->NewProjectionMatrix = VAR_2;


         {
            GLfloat VAR_4 = VAR_3->NearFarStack[VAR_3->ProjectionStackDepth][0];
            GLfloat VAR_5 = VAR_3->NearFarStack[VAR_3->ProjectionStackDepth][1];
            if (VAR_3->Driver.NearFar) {
               (*VAR_3->Driver.NearFar)( VAR_3, VAR_4, VAR_5 );
            }
         }
         break;
      case 128:
         if (VAR_3->TextureStackDepth==0) {
            FUNC_2( VAR_3, VAR_1, "glPopMatrix");
            return;
         }
         VAR_3->TextureStackDepth--;
         FUNC_1( VAR_3->TextureMatrix,
                 VAR_3->TextureStack[VAR_3->TextureStackDepth],
                 16*sizeof(GLfloat) );
         VAR_3->NewTextureMatrix = VAR_2;
         break;
      default:
         FUNC_3(VAR_3, "Bad matrix mode in gl_PopMatrix");
   }
}
