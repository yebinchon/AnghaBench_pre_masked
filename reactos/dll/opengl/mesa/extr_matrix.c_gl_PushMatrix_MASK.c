
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int MatrixMode; } ;
struct TYPE_8__ {size_t ModelViewStackDepth; size_t ProjectionStackDepth; size_t TextureStackDepth; int TextureMatrix; int * TextureStack; int ** NearFarStack; int ProjectionMatrix; int * ProjectionStack; int ModelViewMatrix; int * ModelViewStack; TYPE_1__ Transform; } ;
typedef int GLfloat ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;


 int VAR_1 ;

 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;

void FUNC_4( GLcontext *VAR_5 )
{
   if (FUNC_0(VAR_5)) {
      FUNC_2( VAR_5, VAR_0, "glPushMatrix" );
      return;
   }
   switch (VAR_5->Transform.MatrixMode) {
      case 130:
         if (VAR_5->ModelViewStackDepth>=VAR_2-1) {
            FUNC_2( VAR_5, VAR_1, "glPushMatrix");
            return;
         }
         FUNC_1( VAR_5->ModelViewStack[VAR_5->ModelViewStackDepth],
                 VAR_5->ModelViewMatrix,
                 16*sizeof(GLfloat) );
         VAR_5->ModelViewStackDepth++;
         break;
      case 129:
         if (VAR_5->ProjectionStackDepth>=VAR_3) {
            FUNC_2( VAR_5, VAR_1, "glPushMatrix");
            return;
         }
         FUNC_1( VAR_5->ProjectionStack[VAR_5->ProjectionStackDepth],
                 VAR_5->ProjectionMatrix,
                 16*sizeof(GLfloat) );
         VAR_5->ProjectionStackDepth++;


         VAR_5->NearFarStack[VAR_5->ProjectionStackDepth][0]
            = VAR_5->NearFarStack[VAR_5->ProjectionStackDepth-1][0];
         VAR_5->NearFarStack[VAR_5->ProjectionStackDepth][1]
            = VAR_5->NearFarStack[VAR_5->ProjectionStackDepth-1][1];
         break;
      case 128:
         if (VAR_5->TextureStackDepth>=VAR_4) {
            FUNC_2( VAR_5, VAR_1, "glPushMatrix");
            return;
         }
         FUNC_1( VAR_5->TextureStack[VAR_5->TextureStackDepth],
                 VAR_5->TextureMatrix,
                 16*sizeof(GLfloat) );
         VAR_5->TextureStackDepth++;
         break;
      default:
         FUNC_3(VAR_5, "Bad matrix mode in gl_PushMatrix");
   }
}
