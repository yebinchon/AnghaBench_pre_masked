
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {float* ByteColor; float* TexCoord; int * RasterPos; scalar_t__ RasterPosValid; int Index; } ;
struct TYPE_16__ {scalar_t__ RenderMode; TYPE_2__ Current; TYPE_1__* Visual; } ;
struct TYPE_14__ {float InvRedScale; float InvGreenScale; float InvBlueScale; float InvAlphaScale; } ;
typedef int GLvoid ;
typedef int GLsizei ;
typedef scalar_t__ GLint ;
typedef float GLfloat ;
typedef int GLenum ;
typedef TYPE_3__ GLcontext ;


 int FUNC_0 (TYPE_3__*,float) ;






 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ VAR_4 ;


 scalar_t__ VAR_5 ;

 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int,int,int const*) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int,int const*) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int,int const*) ;
 int FUNC_5 (TYPE_3__*,int ,int ,int,int const*) ;
 int FUNC_6 (TYPE_3__*,int ,char*) ;
 int FUNC_7 (TYPE_3__*,int ,int ,int ,int ,float*,int ,float*) ;
 int FUNC_8 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_9( GLcontext* VAR_6, GLsizei VAR_7, GLsizei VAR_8,
                        GLenum VAR_9, GLenum VAR_10, const GLvoid *VAR_11 )
{
   if (FUNC_1(VAR_6)) {
      FUNC_6( VAR_6, VAR_3, "glDrawPixels" );
      return;
   }

   if (VAR_6->RenderMode==VAR_4) {
      if (!VAR_6->Current.RasterPosValid) {
  return;
      }
      switch (VAR_9) {
  case 136:
            FUNC_4( VAR_6, VAR_7, VAR_8, VAR_10, VAR_11 );
     break;
  case 128:
     FUNC_5( VAR_6, VAR_7, VAR_8, VAR_10, VAR_11 );
     break;
  case 135:
     FUNC_3( VAR_6, VAR_7, VAR_8, VAR_10, VAR_11 );
     break;
  case 131:
  case 134:
  case 137:
  case 140:
  case 130:
  case 138:
  case 133:
  case 132:
  case 129:
  case 139:
            FUNC_2( VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11 );
     break;
  default:
     FUNC_6( VAR_6, VAR_2, "glDrawPixels" );
      }
   }
   else if (VAR_6->RenderMode==VAR_1) {
      if (VAR_6->Current.RasterPosValid) {
         GLfloat VAR_12[4], VAR_13[4], VAR_14;
         VAR_12[0] = VAR_6->Current.ByteColor[0] * VAR_6->Visual->InvRedScale;
         VAR_12[1] = VAR_6->Current.ByteColor[1] * VAR_6->Visual->InvGreenScale;
         VAR_12[2] = VAR_6->Current.ByteColor[2] * VAR_6->Visual->InvBlueScale;
         VAR_12[3] = VAR_6->Current.ByteColor[3] * VAR_6->Visual->InvAlphaScale;
         VAR_14 = 1.0F / VAR_6->Current.TexCoord[3];
         VAR_13[0] = VAR_6->Current.TexCoord[0] * VAR_14;
         VAR_13[1] = VAR_6->Current.TexCoord[1] * VAR_14;
         VAR_13[2] = VAR_6->Current.TexCoord[2] * VAR_14;
         VAR_13[3] = VAR_6->Current.TexCoord[3];
         FUNC_0( VAR_6, (GLfloat) (GLint) VAR_0 );
         FUNC_7( VAR_6, VAR_6->Current.RasterPos[0],
                             VAR_6->Current.RasterPos[1],
                             VAR_6->Current.RasterPos[2],
                             VAR_6->Current.RasterPos[3],
                             VAR_12, VAR_6->Current.Index, VAR_13 );
      }
   }
   else if (VAR_6->RenderMode==VAR_5) {
      if (VAR_6->Current.RasterPosValid) {
         FUNC_8( VAR_6, VAR_6->Current.RasterPos[2] );
      }
   }
}
