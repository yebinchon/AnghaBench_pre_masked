
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int* ByteColor; scalar_t__* RasterPos; int TexCoord; int Index; int RasterPosValid; } ;
struct TYPE_17__ {scalar_t__ RenderMode; TYPE_2__ Current; TYPE_1__* Visual; scalar_t__ NewState; } ;
struct TYPE_15__ {int InvRedScale; int InvGreenScale; int InvBlueScale; int InvAlphaScale; scalar_t__ RGBAflag; } ;
typedef scalar_t__ GLsizei ;
typedef scalar_t__ GLint ;
typedef int GLfloat ;
typedef scalar_t__ GLenum ;
typedef TYPE_3__ GLcontext ;


 int FUNC_0 (TYPE_3__*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_3__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_3__*,int ,char*) ;
 int FUNC_7 (TYPE_3__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int*,int ,int ) ;
 int FUNC_8 (TYPE_3__*,scalar_t__) ;
 int FUNC_9 (TYPE_3__*) ;

void FUNC_10( GLcontext* VAR_10, GLint VAR_11, GLint VAR_12, GLsizei VAR_13, GLsizei VAR_14,
      GLenum VAR_15 )
{
   GLint VAR_16, VAR_17;

   if (FUNC_1(VAR_10)) {
      FUNC_6( VAR_10, VAR_5, "glCopyPixels" );
      return;
   }

   if (VAR_13<0 || VAR_14<0) {
      FUNC_6( VAR_10, VAR_6, "glCopyPixels" );
      return;
   }

   if (VAR_10->NewState) {
      FUNC_9(VAR_10);
   }

   if (VAR_10->RenderMode==VAR_7) {

      if (!VAR_10->Current.RasterPosValid) {
  return;
      }
      VAR_16 = (GLint) (VAR_10->Current.RasterPos[0] + 0.5F);
      VAR_17 = (GLint) (VAR_10->Current.RasterPos[1] + 0.5F);

      if (VAR_15==VAR_0 && VAR_10->Visual->RGBAflag) {
         FUNC_4( VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_16, VAR_17 );
      }
      else if (VAR_15==VAR_0 && !VAR_10->Visual->RGBAflag) {
         FUNC_2( VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_16, VAR_17 );
      }
      else if (VAR_15==VAR_2) {
         FUNC_3( VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_16, VAR_17 );
      }
      else if (VAR_15==VAR_9) {
         FUNC_5( VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_16, VAR_17 );
      }
      else {
  FUNC_6( VAR_10, VAR_4, "glCopyPixels" );
      }
   }
   else if (VAR_10->RenderMode==VAR_3) {
      GLfloat VAR_18[4];
      VAR_18[0] = VAR_10->Current.ByteColor[0] * VAR_10->Visual->InvRedScale;
      VAR_18[1] = VAR_10->Current.ByteColor[1] * VAR_10->Visual->InvGreenScale;
      VAR_18[2] = VAR_10->Current.ByteColor[2] * VAR_10->Visual->InvBlueScale;
      VAR_18[3] = VAR_10->Current.ByteColor[3] * VAR_10->Visual->InvAlphaScale;
      FUNC_0( VAR_10, (GLfloat) (GLint) VAR_1 );
      FUNC_7( VAR_10, VAR_10->Current.RasterPos[0],
     VAR_10->Current.RasterPos[1],
     VAR_10->Current.RasterPos[2],
     VAR_10->Current.RasterPos[3],
     VAR_18, VAR_10->Current.Index,
     VAR_10->Current.TexCoord );
   }
   else if (VAR_10->RenderMode==VAR_8) {
      FUNC_8( VAR_10, VAR_10->Current.RasterPos[2] );
   }

}
