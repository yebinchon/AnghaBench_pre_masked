
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct gl_material {float* ShineTable; float SpecularIndex; float DiffuseIndex; float AmbientIndex; int Shininess; } ;
struct gl_light {double* Position; float* VP_inf_norm; float ConstantAttenuation; float LinearAttenuation; float QuadraticAttenuation; float SpotCutoff; float CosCutoff; double** SpotExpTable; float dli; float sli; int NormDirection; struct gl_light* NextEnabled; } ;
struct TYPE_5__ {scalar_t__ LocalViewer; } ;
struct TYPE_6__ {TYPE_1__ Model; struct gl_light* FirstEnabled; struct gl_material* Material; } ;
struct TYPE_7__ {TYPE_2__ Light; } ;
typedef size_t GLuint ;
typedef size_t GLint ;
typedef float GLfloat ;
typedef TYPE_3__ GLcontext ;


 float FUNC_0 (float*,int ) ;
 int VAR_0 ;
 float FUNC_1 (float) ;
 int VAR_1 ;
 float FUNC_2 (float,int ) ;
 float FUNC_3 (float,int ) ;

void FUNC_4( GLcontext *VAR_2,
                              GLuint VAR_3,
                              GLuint VAR_4,
                              GLfloat VAR_5[][4],
                              GLfloat VAR_6[][3],
                              GLuint VAR_7[] )
{
   struct gl_material *VAR_8 = &VAR_2->Light.Material[VAR_3];
   GLint VAR_9;


   for (VAR_9=0;VAR_9<VAR_4;VAR_9++) {
      GLfloat VAR_10;
      GLfloat VAR_11, VAR_12;
      GLfloat VAR_13, VAR_14, VAR_15;
      struct gl_light *VAR_16;

      if (VAR_3==0) {

         VAR_13 = VAR_6[VAR_9][0];
         VAR_14 = VAR_6[VAR_9][1];
         VAR_15 = VAR_6[VAR_9][2];
      }
      else {

         VAR_13 = -VAR_6[VAR_9][0];
         VAR_14 = -VAR_6[VAR_9][1];
         VAR_15 = -VAR_6[VAR_9][2];
      }

      VAR_11 = VAR_12 = 0.0F;


      for (VAR_16=VAR_2->Light.FirstEnabled; VAR_16; VAR_16=VAR_16->NextEnabled) {
         GLfloat VAR_17;
         GLfloat VAR_18, VAR_19, VAR_20;
         GLfloat VAR_21;


         if (VAR_16->Position[3]==0.0) {


            VAR_18 = VAR_16->VP_inf_norm[0];
            VAR_19 = VAR_16->VP_inf_norm[1];
            VAR_20 = VAR_16->VP_inf_norm[2];
            VAR_17 = 1.0F;
         }
         else {

            GLfloat VAR_22;
            VAR_18 = VAR_16->Position[0] - VAR_5[VAR_9][0];
            VAR_19 = VAR_16->Position[1] - VAR_5[VAR_9][1];
            VAR_20 = VAR_16->Position[2] - VAR_5[VAR_9][2];
            VAR_22 = (GLfloat) FUNC_1( VAR_18*VAR_18 + VAR_19*VAR_19 + VAR_20*VAR_20 );
            if (VAR_22>0.001F) {
               GLfloat VAR_23 = 1.0F / VAR_22;
               VAR_18 *= VAR_23;
               VAR_19 *= VAR_23;
               VAR_20 *= VAR_23;
            }
            VAR_17 = 1.0F / (VAR_16->ConstantAttenuation
                        + VAR_22 * (VAR_16->LinearAttenuation
                        + VAR_22 * VAR_16->QuadraticAttenuation));
         }

         VAR_21 = VAR_18*VAR_13 + VAR_19*VAR_14 + VAR_20*VAR_15;

         if (VAR_21>0.0F) {
            GLfloat VAR_24;


            if (VAR_16->SpotCutoff==180.0F) {

               VAR_24 = VAR_17;
            }
            else {
               GLfloat VAR_25[3], VAR_26;
               VAR_25[0] = -VAR_18;
               VAR_25[1] = -VAR_19;
               VAR_25[2] = -VAR_20;
               VAR_26 = FUNC_0( VAR_25, VAR_16->NormDirection );
               if (VAR_26<=0.0F || VAR_26<VAR_16->CosCutoff) {

                  VAR_24 = 0.0F;
               }
               else {
                  double VAR_27 = VAR_26 * (VAR_0-1);
                  int VAR_28 = (int) VAR_27;
                  GLfloat VAR_29 = VAR_16->SpotExpTable[VAR_28][0]
                               + (VAR_27-VAR_28)*VAR_16->SpotExpTable[VAR_28][1];
                  VAR_24 = VAR_29 * VAR_17;
               }
            }


            VAR_11 += VAR_21 * VAR_16->dli * VAR_24;


            {
               GLfloat VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;


               if (VAR_2->Light.Model.LocalViewer) {
                  GLfloat VAR_35, VAR_36, VAR_37, VAR_38;
                  VAR_35 = VAR_5[VAR_9][0];
                  VAR_36 = VAR_5[VAR_9][1];
                  VAR_37 = VAR_5[VAR_9][2];
                  VAR_38 = FUNC_1( VAR_35*VAR_35 + VAR_36*VAR_36 + VAR_37*VAR_37 );
                  if (VAR_38>0.0001F) {
                     GLfloat VAR_39 = 1.0F / VAR_38;
                     VAR_35 *= VAR_39;
                     VAR_36 *= VAR_39;
                     VAR_37 *= VAR_39;
                  }
                  VAR_30 = VAR_18 - VAR_35;
                  VAR_31 = VAR_19 - VAR_36;
                  VAR_32 = VAR_20 - VAR_37;
               }
               else {
                  VAR_30 = VAR_18;
                  VAR_31 = VAR_19;
                  VAR_32 = VAR_20 + 1.0F;
               }

               VAR_33 = VAR_30*VAR_13 + VAR_31*VAR_14 + VAR_32*VAR_15;

               if (VAR_33 <= 0.0F) {
                  VAR_34 = 0.0F;
               }
               else {

                  VAR_33 = VAR_33 / FUNC_1(VAR_30*VAR_30 + VAR_31*VAR_31 + VAR_32*VAR_32);
                  if (VAR_33>1.0F) {
                     VAR_34 = FUNC_3( VAR_33, VAR_8->Shininess );
                  }
                  else {
                     int VAR_40 = (int) (VAR_33 * (GLfloat)(VAR_1-1));
                     if (VAR_8->ShineTable[VAR_40] < 0.0F)
                        VAR_8->ShineTable[VAR_40] = FUNC_2( VAR_33, VAR_8->Shininess );
                     VAR_34 = VAR_8->ShineTable[VAR_40];
                  }
               }
               VAR_12 += VAR_34 * VAR_16->sli * VAR_24;
            }
         }

      }


      if (VAR_12>1.0F) {
         VAR_10 = VAR_8->SpecularIndex;
      }
      else {
         GLfloat VAR_41, VAR_42;
         VAR_41 = VAR_8->DiffuseIndex - VAR_8->AmbientIndex;
         VAR_42 = VAR_8->SpecularIndex - VAR_8->AmbientIndex;

         VAR_10 = VAR_8->AmbientIndex
               + VAR_11 * (1.0F-VAR_12) * VAR_41
               + VAR_12 * VAR_42;
         if (VAR_10>VAR_8->SpecularIndex) {
            VAR_10 = VAR_8->SpecularIndex;
         }
      }
      VAR_7[VAR_9] = (GLuint) (GLint) VAR_10;

   }
}
