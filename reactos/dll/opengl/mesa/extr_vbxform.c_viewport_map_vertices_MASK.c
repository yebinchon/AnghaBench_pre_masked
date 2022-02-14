
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float Sx; float Tx; float Sy; float Ty; float Sz; float Tz; } ;
struct TYPE_7__ {scalar_t__ ProjectionMatrixType; scalar_t__ ModelViewMatrixType; TYPE_2__* VB; TYPE_1__ Viewport; } ;
struct TYPE_6__ {int VertexSizeMask; } ;
typedef size_t GLuint ;
typedef scalar_t__ GLubyte ;
typedef float GLfloat ;
typedef TYPE_3__ GLcontext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,float,float,float,float,float,float,float) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1( GLcontext *VAR_4,
                                   GLuint VAR_5, GLfloat VAR_6[][4],
                                   const GLubyte VAR_7[], GLfloat VAR_8[][3])
{
   GLfloat VAR_9 = VAR_4->Viewport.Sx;
   GLfloat VAR_10 = VAR_4->Viewport.Tx;
   GLfloat VAR_11 = VAR_4->Viewport.Sy;
   GLfloat VAR_12 = VAR_4->Viewport.Ty;
   GLfloat VAR_13 = VAR_4->Viewport.Sz;
   GLfloat VAR_14 = VAR_4->Viewport.Tz;

   if ((VAR_4->ProjectionMatrixType==VAR_2 ||
        VAR_4->ProjectionMatrixType==VAR_1)
       && VAR_4->ModelViewMatrixType!=VAR_0
       && (VAR_4->VB->VertexSizeMask & VAR_3)==0) {

      if (VAR_7) {

         GLuint VAR_15;
         for (VAR_15=0;VAR_15<VAR_5;VAR_15++) {
            if (VAR_7[VAR_15]==0) {
               VAR_8[VAR_15][0] = VAR_6[VAR_15][0] * VAR_9 + VAR_10;
               VAR_8[VAR_15][1] = VAR_6[VAR_15][1] * VAR_11 + VAR_12;
               VAR_8[VAR_15][2] = VAR_6[VAR_15][2] * VAR_13 + VAR_14;
            }
         }
      }
      else {

         GLuint VAR_16;
         for (VAR_16=0;VAR_16<VAR_5;VAR_16++) {
            VAR_8[VAR_16][0] = VAR_6[VAR_16][0] * VAR_9 + VAR_10;
            VAR_8[VAR_16][1] = VAR_6[VAR_16][1] * VAR_11 + VAR_12;
            VAR_8[VAR_16][2] = VAR_6[VAR_16][2] * VAR_13 + VAR_14;
         }
      }
   }
   else {

      if (VAR_7) {

         GLuint VAR_17;
         for (VAR_17=0;VAR_17<VAR_5;VAR_17++) {
            if (VAR_7[VAR_17] == 0) {
               if (VAR_6[VAR_17][3] != 0.0F) {
                  GLfloat VAR_18 = 1.0F / VAR_6[VAR_17][3];
                  VAR_8[VAR_17][0] = VAR_6[VAR_17][0] * VAR_18 * VAR_9 + VAR_10;
                  VAR_8[VAR_17][1] = VAR_6[VAR_17][1] * VAR_18 * VAR_11 + VAR_12;
                  VAR_8[VAR_17][2] = VAR_6[VAR_17][2] * VAR_18 * VAR_13 + VAR_14;
               }
               else {

                  VAR_8[VAR_17][0] = 0.0F;
                  VAR_8[VAR_17][1] = 0.0F;
                  VAR_8[VAR_17][2] = 0.0F;
               }
            }
         }
      }
      else {

         GLuint VAR_19;
         for (VAR_19=0;VAR_19<VAR_5;VAR_19++) {
            if (VAR_6[VAR_19][3] != 0.0F) {
               GLfloat VAR_20 = 1.0F / VAR_6[VAR_19][3];
               VAR_8[VAR_19][0] = VAR_6[VAR_19][0] * VAR_20 * VAR_9 + VAR_10;
               VAR_8[VAR_19][1] = VAR_6[VAR_19][1] * VAR_20 * VAR_11 + VAR_12;
               VAR_8[VAR_19][2] = VAR_6[VAR_19][2] * VAR_20 * VAR_13 + VAR_14;
            }
            else {

               VAR_8[VAR_19][0] = 0.0F;
               VAR_8[VAR_19][1] = 0.0F;
               VAR_8[VAR_19][2] = 0.0F;
            }
         }
      }
   }
   if (1)
   {
       GLuint VAR_21;
       for (VAR_21 = 0; VAR_21 < VAR_5; VAR_21++)
       {
           FUNC_0("(%3.1f, %3.1f, %3.1f, %3.1f) --> (%3.1f, %3.1f, %3.1f)\n",
                   VAR_6[VAR_21][0], VAR_6[VAR_21][1], VAR_6[VAR_21][2], VAR_6[VAR_21][3],
                   VAR_8[VAR_21][0], VAR_8[VAR_21][1], VAR_8[VAR_21][2]);
       }
   }
}
