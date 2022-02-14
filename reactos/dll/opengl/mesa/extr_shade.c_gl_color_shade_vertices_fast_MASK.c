
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct gl_material {float* ShineTable; int Shininess; } ;
struct gl_light {float* VP_inf_norm; float** MatDiffuse; float* h_inf_norm; float** MatSpecular; struct gl_light* NextEnabled; } ;
struct TYPE_6__ {float** BaseColor; struct gl_material* Material; struct gl_light* FirstEnabled; } ;
struct TYPE_7__ {TYPE_2__ Light; TYPE_1__* Visual; } ;
struct TYPE_5__ {float RedScale; float GreenScale; float BlueScale; float AlphaScale; } ;
typedef size_t GLuint ;
typedef float GLubyte ;
typedef size_t GLint ;
typedef float GLfloat ;
typedef TYPE_3__ GLcontext ;


 float VAR_0 ;
 float FUNC_0 (float) ;
 float FUNC_1 (float,float) ;
 int VAR_1 ;
 float FUNC_2 (float,int ) ;
 float FUNC_3 (float,int ) ;

void FUNC_4( GLcontext *VAR_2,
                                   GLuint VAR_3,
                                   GLuint VAR_4,
                                             GLfloat VAR_5[][3],
                                   GLubyte VAR_6[][4] )
{
   GLint VAR_7;
   GLfloat VAR_8, VAR_9, VAR_10, VAR_11;
   GLint VAR_12;
   GLfloat *VAR_13 = VAR_2->Light.BaseColor[VAR_3];




   VAR_8 = VAR_2->Visual->RedScale;
   VAR_9 = VAR_2->Visual->GreenScale;
   VAR_10 = VAR_2->Visual->BlueScale;
   VAR_11 = VAR_2->Visual->AlphaScale;


   VAR_12 = (GLint) (VAR_13[3] * VAR_11);


   for (VAR_7=0;VAR_7<VAR_4;VAR_7++) {
      GLfloat VAR_14, VAR_15, VAR_16;
      GLfloat VAR_17, VAR_18, VAR_19;
      struct gl_light *VAR_20;


      if (VAR_3==0) {
         VAR_17 = VAR_5[VAR_7][0];
         VAR_18 = VAR_5[VAR_7][1];
         VAR_19 = VAR_5[VAR_7][2];
      }
      else {
         VAR_17 = -VAR_5[VAR_7][0];
         VAR_18 = -VAR_5[VAR_7][1];
         VAR_19 = -VAR_5[VAR_7][2];
      }
      VAR_14 = VAR_13[0];
      VAR_15 = VAR_13[1];
      VAR_16 = VAR_13[2];


      for (VAR_20=VAR_2->Light.FirstEnabled; VAR_20; VAR_20=VAR_20->NextEnabled) {
         GLfloat VAR_21;

         VAR_21 = VAR_17 * VAR_20->VP_inf_norm[0]
                  + VAR_18 * VAR_20->VP_inf_norm[1]
                  + VAR_19 * VAR_20->VP_inf_norm[2];


         if (VAR_21>0.0F) {
            GLfloat VAR_22;
            GLfloat *VAR_23 = VAR_20->MatDiffuse[VAR_3];


            VAR_14 += VAR_21 * VAR_23[0];
            VAR_15 += VAR_21 * VAR_23[1];
            VAR_16 += VAR_21 * VAR_23[2];



            VAR_22 = VAR_17 * VAR_20->h_inf_norm[0]
                    + VAR_18 * VAR_20->h_inf_norm[1]
                    + VAR_19 * VAR_20->h_inf_norm[2];
            if (VAR_22>0.0F) {
               if (VAR_22>1.0F) {

                  GLfloat VAR_24 = FUNC_3( VAR_22,
                                        VAR_2->Light.Material[VAR_3].Shininess );
                  if (VAR_24>1.0e-10F) {
                     VAR_14 += VAR_24 * VAR_20->MatSpecular[VAR_3][0];
                     VAR_15 += VAR_24 * VAR_20->MatSpecular[VAR_3][1];
                     VAR_16 += VAR_24 * VAR_20->MatSpecular[VAR_3][2];
                  }
               }
               else {

                  int VAR_25 = (int) (VAR_22 * (GLfloat) (VAR_1-1));
                  struct gl_material *VAR_26 = &VAR_2->Light.Material[VAR_3];
                  GLfloat VAR_27;
                  if (VAR_26->ShineTable[VAR_25] < 0.0F)
                     VAR_26->ShineTable[VAR_25] = FUNC_2( VAR_22, VAR_26->Shininess );
                  VAR_27 = VAR_26->ShineTable[VAR_25];
                  VAR_14 += VAR_27 * VAR_20->MatSpecular[VAR_3][0];
                  VAR_15 += VAR_27 * VAR_20->MatSpecular[VAR_3][1];
                  VAR_16 += VAR_27 * VAR_20->MatSpecular[VAR_3][2];
               }
            }
         }

      }


      VAR_6[VAR_7][0] = FUNC_0(FUNC_1( VAR_14, 1.0F ) * VAR_8);
      VAR_6[VAR_7][1] = FUNC_0(FUNC_1( VAR_15, 1.0F ) * VAR_9);
      VAR_6[VAR_7][2] = FUNC_0(FUNC_1( VAR_16, 1.0F ) * VAR_10);
      VAR_6[VAR_7][3] = VAR_12;

   }
}
