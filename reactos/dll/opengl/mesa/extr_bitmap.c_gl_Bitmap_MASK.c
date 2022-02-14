
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct gl_image {int dummy; } ;
struct TYPE_14__ {scalar_t__ RasterPosValid; float* ByteColor; float* TexCoord; float* RasterPos; int Index; } ;
struct TYPE_12__ {scalar_t__ (* Bitmap ) (TYPE_4__*,scalar_t__,scalar_t__,float,float,float,float,struct gl_image const*) ;} ;
struct TYPE_15__ {scalar_t__ RenderMode; TYPE_3__ Current; TYPE_2__* Visual; TYPE_1__ Driver; } ;
struct TYPE_13__ {float InvRedScale; float InvGreenScale; float InvBlueScale; float InvAlphaScale; } ;
typedef scalar_t__ GLsizei ;
typedef scalar_t__ GLint ;
typedef float GLfloat ;
typedef TYPE_4__ GLcontext ;
typedef scalar_t__ GLboolean ;


 int FUNC_0 (TYPE_4__*,float) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 int FUNC_3 (TYPE_4__*,float,float,float,float,float*,int ,float*) ;
 int FUNC_4 (TYPE_4__*,scalar_t__,scalar_t__,float,float,float,float,struct gl_image const*) ;
 scalar_t__ FUNC_5 (TYPE_4__*,scalar_t__,scalar_t__,float,float,float,float,struct gl_image const*) ;

void FUNC_6( GLcontext* VAR_7,
                GLsizei VAR_8, GLsizei VAR_9,
         GLfloat VAR_10, GLfloat VAR_11,
         GLfloat VAR_12, GLfloat VAR_13,
                const struct gl_image *VAR_14 )
{
   if (VAR_8<0 || VAR_9<0) {
      FUNC_2( VAR_7, VAR_4, "glBitmap" );
      return;
   }
   if (FUNC_1(VAR_7)) {
      FUNC_2( VAR_7, VAR_3, "glBitmap" );
      return;
   }
   if (VAR_7->Current.RasterPosValid==VAR_1) {

      return;
   }

   if (VAR_7->RenderMode==VAR_5) {
      GLboolean VAR_15 = VAR_1;
      if (VAR_7->Driver.Bitmap) {

         VAR_15 = (*VAR_7->Driver.Bitmap)( VAR_7, VAR_8, VAR_9, VAR_10, VAR_11,
                                            VAR_12, VAR_13, VAR_14 );
      }
      if (!VAR_15) {

         FUNC_4( VAR_7, VAR_8, VAR_9, VAR_10, VAR_11,
                           VAR_12, VAR_13, VAR_14 );
      }
   }
   else if (VAR_7->RenderMode==VAR_2) {
      GLfloat VAR_16[4], VAR_17[4], VAR_18;
      VAR_16[0] = VAR_7->Current.ByteColor[0] * VAR_7->Visual->InvRedScale;
      VAR_16[1] = VAR_7->Current.ByteColor[1] * VAR_7->Visual->InvGreenScale;
      VAR_16[2] = VAR_7->Current.ByteColor[2] * VAR_7->Visual->InvBlueScale;
      VAR_16[3] = VAR_7->Current.ByteColor[3] * VAR_7->Visual->InvAlphaScale;
      VAR_18 = 1.0F / VAR_7->Current.TexCoord[3];
      VAR_17[0] = VAR_7->Current.TexCoord[0] * VAR_18;
      VAR_17[1] = VAR_7->Current.TexCoord[1] * VAR_18;
      VAR_17[2] = VAR_7->Current.TexCoord[2] * VAR_18;
      VAR_17[3] = VAR_7->Current.TexCoord[3];
      FUNC_0( VAR_7, (GLfloat) (GLint) VAR_0 );

      FUNC_3( VAR_7, VAR_7->Current.RasterPos[0] - VAR_10,
     VAR_7->Current.RasterPos[1] - VAR_11,
     VAR_7->Current.RasterPos[2],
     VAR_7->Current.RasterPos[3],
     VAR_16, VAR_7->Current.Index, VAR_17 );
   }
   else if (VAR_7->RenderMode==VAR_6) {

   }


   VAR_7->Current.RasterPos[0] += VAR_12;
   VAR_7->Current.RasterPos[1] += VAR_13;
}
