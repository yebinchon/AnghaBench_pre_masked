
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct gl_material {float* Emission; int* Ambient; float* Diffuse; float* ShineTable; float* Specular; int Shininess; } ;
struct gl_light {double* Position; float* VP_inf_norm; float ConstantAttenuation; float LinearAttenuation; float QuadraticAttenuation; float SpotCutoff; float* NormDirection; float CosCutoff; double** SpotExpTable; float* Ambient; float* Diffuse; float* Specular; struct gl_light* NextEnabled; } ;
struct TYPE_7__ {int* Ambient; scalar_t__ LocalViewer; } ;
struct TYPE_8__ {TYPE_2__ Model; struct gl_light* FirstEnabled; struct gl_material* Material; } ;
struct TYPE_9__ {TYPE_3__ Light; TYPE_1__* Visual; } ;
struct TYPE_6__ {float RedScale; float GreenScale; float BlueScale; float AlphaScale; } ;
typedef size_t GLuint ;
typedef size_t GLubyte ;
typedef size_t GLint ;
typedef float GLfloat ;
typedef TYPE_4__ GLcontext ;


 float FUNC_0 (float,float,float) ;
 int VAR_0 ;
 size_t FUNC_1 (float) ;
 float FUNC_2 (float) ;
 int VAR_1 ;
 float FUNC_3 (float,int ) ;
 float FUNC_4 (float,int ) ;

void FUNC_5( GLcontext *VAR_2,
                              GLuint VAR_3,
                              GLuint VAR_4,
                                        GLfloat VAR_5[][4],
                                        GLfloat VAR_6[][3],
                              GLubyte VAR_7[][4] )
{
   GLint VAR_8;
   GLfloat VAR_9, VAR_10, VAR_11, VAR_12;
   GLfloat VAR_13, VAR_14, VAR_15, VAR_16;
   GLint VAR_17;
   struct gl_light *VAR_18;
   struct gl_material *VAR_19;




   VAR_9 = VAR_2->Visual->RedScale;
   VAR_10 = VAR_2->Visual->GreenScale;
   VAR_11 = VAR_2->Visual->BlueScale;
   VAR_12 = VAR_2->Visual->AlphaScale;

   VAR_19 = &VAR_2->Light.Material[VAR_3];


   VAR_13 = VAR_19->Emission[0] + VAR_2->Light.Model.Ambient[0] * VAR_19->Ambient[0];
   VAR_14 = VAR_19->Emission[1] + VAR_2->Light.Model.Ambient[1] * VAR_19->Ambient[1];
   VAR_15 = VAR_19->Emission[2] + VAR_2->Light.Model.Ambient[2] * VAR_19->Ambient[2];
   VAR_16 = VAR_19->Diffuse[3];

   VAR_17 = (GLint) (FUNC_0( VAR_16, 0.0F, 1.0F ) * VAR_12);

   for (VAR_8=0;VAR_8<VAR_4;VAR_8++) {
      GLfloat VAR_20, VAR_21, VAR_22;
      GLfloat VAR_23, VAR_24, VAR_25;

      if (VAR_3==0) {

         VAR_23 = VAR_6[VAR_8][0];
         VAR_24 = VAR_6[VAR_8][1];
         VAR_25 = VAR_6[VAR_8][2];
      }
      else {

         VAR_23 = -VAR_6[VAR_8][0];
         VAR_24 = -VAR_6[VAR_8][1];
         VAR_25 = -VAR_6[VAR_8][2];
      }

      VAR_20 = VAR_13;
      VAR_21 = VAR_14;
      VAR_22 = VAR_15;


      for (VAR_18=VAR_2->Light.FirstEnabled; VAR_18; VAR_18=VAR_18->NextEnabled) {
         GLfloat VAR_26, VAR_27, VAR_28;
         GLfloat VAR_29, VAR_30;
         GLfloat VAR_31, VAR_32, VAR_33;
         GLfloat VAR_34;


         if (VAR_18->Position[3]==0.0) {

            VAR_31 = VAR_18->VP_inf_norm[0];
            VAR_32 = VAR_18->VP_inf_norm[1];
            VAR_33 = VAR_18->VP_inf_norm[2];
            VAR_29 = 1.0F;
         }
         else {

            GLfloat VAR_35;
            VAR_31 = VAR_18->Position[0] - VAR_5[VAR_8][0];
            VAR_32 = VAR_18->Position[1] - VAR_5[VAR_8][1];
            VAR_33 = VAR_18->Position[2] - VAR_5[VAR_8][2];
            VAR_35 = (GLfloat) FUNC_2( VAR_31*VAR_31 + VAR_32*VAR_32 + VAR_33*VAR_33 );
            if (VAR_35>0.001F) {
               GLfloat VAR_36 = 1.0F / VAR_35;
               VAR_31 *= VAR_36;
               VAR_32 *= VAR_36;
               VAR_33 *= VAR_36;
            }
            VAR_29 = 1.0F / (VAR_18->ConstantAttenuation
                        + VAR_35 * (VAR_18->LinearAttenuation
                        + VAR_35 * VAR_18->QuadraticAttenuation));
         }


         if (VAR_18->SpotCutoff==180.0F) {

            VAR_30 = 1.0F;
         }
         else {
            GLfloat VAR_37, VAR_38, VAR_39, VAR_40;
            VAR_37 = -VAR_31;
            VAR_38 = -VAR_32;
            VAR_39 = -VAR_33;
            VAR_40 = VAR_37*VAR_18->NormDirection[0]
                       + VAR_38*VAR_18->NormDirection[1]
                       + VAR_39*VAR_18->NormDirection[2];
            if (VAR_40<=0.0F || VAR_40<VAR_18->CosCutoff) {

               VAR_30 = 0.0F;
            }
            else {
               double VAR_41 = VAR_40 * (VAR_0-1);
               int VAR_42 = (int) VAR_41;
               VAR_30 = VAR_18->SpotExpTable[VAR_42][0]
                    + (VAR_41-VAR_42)*VAR_18->SpotExpTable[VAR_42][1];
            }
         }

         VAR_26 = VAR_19->Ambient[0] * VAR_18->Ambient[0];
         VAR_27 = VAR_19->Ambient[1] * VAR_18->Ambient[1];
         VAR_28 = VAR_19->Ambient[2] * VAR_18->Ambient[2];


         VAR_34 = VAR_23 * VAR_31 + VAR_24 * VAR_32 + VAR_25 * VAR_33;


         if (VAR_34<=0.0F) {

            GLfloat VAR_43 = VAR_29 * VAR_30;
            VAR_20 += VAR_43 * VAR_26;
            VAR_21 += VAR_43 * VAR_27;
            VAR_22 += VAR_43 * VAR_28;

         }
         else {
            GLfloat VAR_44, VAR_45, VAR_46;
            GLfloat VAR_47, VAR_48, VAR_49;
            GLfloat VAR_50, VAR_51, VAR_52, VAR_53, VAR_54;


            VAR_44 = VAR_34 * VAR_19->Diffuse[0] * VAR_18->Diffuse[0];
            VAR_45 = VAR_34 * VAR_19->Diffuse[1] * VAR_18->Diffuse[1];
            VAR_46 = VAR_34 * VAR_19->Diffuse[2] * VAR_18->Diffuse[2];


            if (VAR_2->Light.Model.LocalViewer) {
               GLfloat VAR_55, VAR_56, VAR_57, VAR_58;
               VAR_55 = VAR_5[VAR_8][0];
               VAR_56 = VAR_5[VAR_8][1];
               VAR_57 = VAR_5[VAR_8][2];
               VAR_58 = FUNC_2( VAR_55*VAR_55 + VAR_56*VAR_56 + VAR_57*VAR_57 );
               if (VAR_58>0.0001F) {
                  GLfloat VAR_59 = 1.0F / VAR_58;
                  VAR_55 *= VAR_59;
                  VAR_56 *= VAR_59;
                  VAR_57 *= VAR_59;
               }

               VAR_50 = VAR_31 - VAR_55;
               VAR_51 = VAR_32 - VAR_56;
               VAR_52 = VAR_33 - VAR_57;
            }
            else {

               VAR_50 = VAR_31;
               VAR_51 = VAR_32;
               VAR_52 = VAR_33 + 1.0F;
            }


            VAR_53 = VAR_23*VAR_50 + VAR_24*VAR_51 + VAR_25*VAR_52;

            if (VAR_53<=0.0F) {
               VAR_47 = 0.0F;
               VAR_48 = 0.0F;
               VAR_49 = 0.0F;
            }
            else {
               GLfloat VAR_60;

               VAR_53 = VAR_53 / FUNC_2( VAR_50*VAR_50 + VAR_51*VAR_51 + VAR_52*VAR_52 );
               if (VAR_53>1.0F) {

                  VAR_60 = FUNC_4( VAR_53, VAR_19->Shininess );
               }
               else {

                  int VAR_61 = (int) (VAR_53 * (GLfloat) (VAR_1-1));
                  if (VAR_19->ShineTable[VAR_61] < 0.0F)
                     VAR_19->ShineTable[VAR_61] = FUNC_3( VAR_53, VAR_19->Shininess );
                  VAR_60 = VAR_19->ShineTable[VAR_61];
               }
               if (VAR_60<1.0e-10) {
                  VAR_47 = 0.0F;
                  VAR_48 = 0.0F;
                  VAR_49 = 0.0F;
               }
               else {
                  VAR_47 = VAR_60 * VAR_19->Specular[0]*VAR_18->Specular[0];
                  VAR_48 = VAR_60 * VAR_19->Specular[1]*VAR_18->Specular[1];
                  VAR_49 = VAR_60 * VAR_19->Specular[2]*VAR_18->Specular[2];
               }
            }

            VAR_54 = VAR_29 * VAR_30;
            VAR_20 += VAR_54 * (VAR_26 + VAR_44 + VAR_47);
            VAR_21 += VAR_54 * (VAR_27 + VAR_45 + VAR_48);
            VAR_22 += VAR_54 * (VAR_28 + VAR_46 + VAR_49);
         }

      }


      VAR_7[VAR_8][0] = FUNC_1(FUNC_0( VAR_20, 0.0F, 1.0F ) * VAR_9);
      VAR_7[VAR_8][1] = FUNC_1(FUNC_0( VAR_21, 0.0F, 1.0F ) * VAR_10);
      VAR_7[VAR_8][2] = FUNC_1(FUNC_0( VAR_22, 0.0F, 1.0F ) * VAR_11);
      VAR_7[VAR_8][3] = VAR_17;

   }
}
