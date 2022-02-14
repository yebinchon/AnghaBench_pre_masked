
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vertex_buffer {scalar_t__* ClipMask; float** Win; float** Clip; float** Color; float** TexCoord; scalar_t__* Index; } ;
struct TYPE_8__ {scalar_t__ ShadeModel; } ;
struct TYPE_9__ {TYPE_2__ Light; TYPE_1__* Visual; struct vertex_buffer* VB; } ;
struct TYPE_7__ {float InvRedScale; float InvGreenScale; float InvBlueScale; float InvAlphaScale; } ;
typedef size_t GLuint ;
typedef scalar_t__ GLint ;
typedef float GLfloat ;
typedef TYPE_3__ GLcontext ;


 float VAR_0 ;
 int FUNC_0 (TYPE_3__*,float) ;
 float FUNC_1 (float) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_3__*,float,float,float,float,float*,float,float*) ;

__attribute__((used)) static void FUNC_3( GLcontext *VAR_3, GLuint VAR_4, GLuint VAR_5 )
{
   struct vertex_buffer *VAR_6 = VAR_3->VB;
   GLuint VAR_7;
   GLfloat VAR_8 = VAR_3->Visual->InvRedScale;
   GLfloat VAR_9 = VAR_3->Visual->InvGreenScale;
   GLfloat VAR_10 = VAR_3->Visual->InvBlueScale;
   GLfloat VAR_11 = VAR_3->Visual->InvAlphaScale;

   for (VAR_7=VAR_4;VAR_7<=VAR_5;VAR_7++) {
      if (VAR_6->ClipMask[VAR_7]==0) {
         GLfloat VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
         GLfloat VAR_17[4], VAR_18[4];

         VAR_12 = VAR_6->Win[VAR_7][0];
         VAR_13 = VAR_6->Win[VAR_7][1];
         VAR_14 = VAR_6->Win[VAR_7][2] / VAR_0;
         VAR_15 = VAR_6->Clip[VAR_7][3];


         if (VAR_3->Light.ShadeModel==VAR_2) {

            VAR_17[0] = FUNC_1(VAR_6->Color[VAR_7][0]) * VAR_8;
            VAR_17[1] = FUNC_1(VAR_6->Color[VAR_7][1]) * VAR_9;
            VAR_17[2] = FUNC_1(VAR_6->Color[VAR_7][2]) * VAR_10;
            VAR_17[3] = FUNC_1(VAR_6->Color[VAR_7][3]) * VAR_11;
         }
         else {

            VAR_17[0] = VAR_6->Color[VAR_7][0] * VAR_8;
            VAR_17[1] = VAR_6->Color[VAR_7][1] * VAR_9;
            VAR_17[2] = VAR_6->Color[VAR_7][2] * VAR_10;
            VAR_17[3] = VAR_6->Color[VAR_7][3] * VAR_11;
         }
         VAR_16 = 1.0F / VAR_6->TexCoord[VAR_7][3];
         VAR_18[0] = VAR_6->TexCoord[VAR_7][0] * VAR_16;
         VAR_18[1] = VAR_6->TexCoord[VAR_7][1] * VAR_16;
         VAR_18[2] = VAR_6->TexCoord[VAR_7][2] * VAR_16;
         VAR_18[3] = VAR_6->TexCoord[VAR_7][3];

         FUNC_0( VAR_3, (GLfloat) (GLint) VAR_1 );
         FUNC_2( VAR_3, VAR_12, VAR_13, VAR_14, VAR_15, VAR_17,
                             (GLfloat) VAR_6->Index[VAR_7], VAR_18 );
      }
   }
}
