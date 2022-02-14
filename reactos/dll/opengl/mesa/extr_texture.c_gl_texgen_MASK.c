
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int TexGenEnabled; int GenModeS; int GenModeT; int GenModeR; int GenModeQ; int EyePlaneQ; int ObjectPlaneQ; int EyePlaneR; int ObjectPlaneR; int EyePlaneT; int ObjectPlaneT; int EyePlaneS; int ObjectPlaneS; } ;
struct TYPE_6__ {TYPE_1__ Texture; } ;
typedef size_t GLint ;
typedef float GLfloat ;
typedef TYPE_2__ GLcontext ;


 int FUNC_0 (float*,float*) ;
 double FUNC_1 (float*,float*) ;
 float FUNC_2 (float*,int ) ;



 float FUNC_3 (float) ;
 int FUNC_4 (float*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_2__*,char*) ;

void FUNC_6( GLcontext *VAR_4, GLint VAR_5,
                GLfloat VAR_6[][4], GLfloat VAR_7[][4],
                GLfloat VAR_8[][3], GLfloat VAR_9[][4] )
{

   if (VAR_4->Texture.TexGenEnabled==(VAR_2|VAR_3)
       && VAR_4->Texture.GenModeS==128
       && VAR_4->Texture.GenModeT==128) {
      GLint VAR_10;
      for (VAR_10=0;VAR_10<VAR_5;VAR_10++) {
         GLfloat VAR_11[3], VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
         FUNC_0( VAR_11, VAR_7[VAR_10] );
         FUNC_4( VAR_11 );
         VAR_12 = 2.0F * FUNC_1(VAR_8[VAR_10],VAR_11);
         VAR_14 = VAR_11[0] - VAR_8[VAR_10][0] * VAR_12;
         VAR_15 = VAR_11[1] - VAR_8[VAR_10][1] * VAR_12;
         VAR_16 = VAR_11[2] - VAR_8[VAR_10][2] * VAR_12;
         VAR_13 = 2.0F * FUNC_3( VAR_14*VAR_14 + VAR_15*VAR_15 + (VAR_16+1.0F)*(VAR_16+1.0F) );
         if (VAR_13==0.0F) {
            VAR_9[VAR_10][0] = 0.5F;
            VAR_9[VAR_10][1] = 0.5F;
         }
         else {
            GLfloat VAR_17 = 1.0F / VAR_13;
            VAR_9[VAR_10][0] = VAR_14 * VAR_17 + 0.5F;
            VAR_9[VAR_10][1] = VAR_15 * VAR_17 + 0.5F;
         }
      }
      return;
   }


   if (VAR_4->Texture.TexGenEnabled & VAR_2) {
      GLint VAR_18;
      switch (VAR_4->Texture.GenModeS) {
         case 129:
            for (VAR_18=0;VAR_18<VAR_5;VAR_18++) {
               VAR_9[VAR_18][0] = FUNC_2( VAR_6[VAR_18], VAR_4->Texture.ObjectPlaneS );
            }
            break;
         case 130:
            for (VAR_18=0;VAR_18<VAR_5;VAR_18++) {
               VAR_9[VAR_18][0] = FUNC_2( VAR_7[VAR_18], VAR_4->Texture.EyePlaneS );
            }
            break;
         case 128:
            for (VAR_18=0;VAR_18<VAR_5;VAR_18++) {
               GLfloat VAR_19[3], VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
               FUNC_0( VAR_19, VAR_7[VAR_18] );
               FUNC_4( VAR_19 );
               VAR_20 = 2.0*FUNC_1(VAR_8[VAR_18],VAR_19);
               VAR_22 = VAR_19[0] - VAR_8[VAR_18][0] * VAR_20;
               VAR_23 = VAR_19[1] - VAR_8[VAR_18][1] * VAR_20;
               VAR_24 = VAR_19[2] - VAR_8[VAR_18][2] * VAR_20;
               VAR_21 = 2.0F * FUNC_3( VAR_22*VAR_22 + VAR_23*VAR_23 + (VAR_24+1.0)*(VAR_24+1.0) );
               if (VAR_21==0.0F) {
                  VAR_9[VAR_18][0] = 0.5F;
               }
               else {
                  VAR_9[VAR_18][0] = VAR_22 / VAR_21 + 0.5F;
               }
            }
            break;
         default:
            FUNC_5(VAR_4, "Bad S texgen");
            return;
      }
   }

   if (VAR_4->Texture.TexGenEnabled & VAR_3) {
      GLint VAR_25;
      switch (VAR_4->Texture.GenModeT) {
         case 129:
            for (VAR_25=0;VAR_25<VAR_5;VAR_25++) {
               VAR_9[VAR_25][1] = FUNC_2( VAR_6[VAR_25], VAR_4->Texture.ObjectPlaneT );
            }
            break;
         case 130:
            for (VAR_25=0;VAR_25<VAR_5;VAR_25++) {
               VAR_9[VAR_25][1] = FUNC_2( VAR_7[VAR_25], VAR_4->Texture.EyePlaneT );
            }
            break;
         case 128:
            for (VAR_25=0;VAR_25<VAR_5;VAR_25++) {
               GLfloat VAR_26[3], VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
               FUNC_0( VAR_26, VAR_7[VAR_25] );
               FUNC_4( VAR_26 );
               VAR_27 = 2.0*FUNC_1(VAR_8[VAR_25],VAR_26);
               VAR_29 = VAR_26[0] - VAR_8[VAR_25][0] * VAR_27;
               VAR_30 = VAR_26[1] - VAR_8[VAR_25][1] * VAR_27;
               VAR_31 = VAR_26[2] - VAR_8[VAR_25][2] * VAR_27;
               VAR_28 = 2.0F * FUNC_3( VAR_29*VAR_29 + VAR_30*VAR_30 + (VAR_31+1.0)*(VAR_31+1.0) );
               if (VAR_28==0.0F) {
                  VAR_9[VAR_25][1] = 0.5F;
               }
               else {
                  VAR_9[VAR_25][1] = VAR_30 / VAR_28 + 0.5F;
               }
            }
            break;
         default:
            FUNC_5(VAR_4, "Bad T texgen");
            return;
      }
   }

   if (VAR_4->Texture.TexGenEnabled & VAR_1) {
      GLint VAR_32;
      switch (VAR_4->Texture.GenModeR) {
         case 129:
            for (VAR_32=0;VAR_32<VAR_5;VAR_32++) {
               VAR_9[VAR_32][2] = FUNC_2( VAR_6[VAR_32], VAR_4->Texture.ObjectPlaneR );
            }
            break;
         case 130:
            for (VAR_32=0;VAR_32<VAR_5;VAR_32++) {
               VAR_9[VAR_32][2] = FUNC_2( VAR_7[VAR_32], VAR_4->Texture.EyePlaneR );
            }
            break;
         default:
            FUNC_5(VAR_4, "Bad R texgen");
            return;
      }
   }

   if (VAR_4->Texture.TexGenEnabled & VAR_0) {
      GLint VAR_33;
      switch (VAR_4->Texture.GenModeQ) {
         case 129:
            for (VAR_33=0;VAR_33<VAR_5;VAR_33++) {
               VAR_9[VAR_33][3] = FUNC_2( VAR_6[VAR_33], VAR_4->Texture.ObjectPlaneQ );
            }
            break;
         case 130:
            for (VAR_33=0;VAR_33<VAR_5;VAR_33++) {
               VAR_9[VAR_33][3] = FUNC_2( VAR_7[VAR_33], VAR_4->Texture.EyePlaneQ );
            }
            break;
         default:
            FUNC_5(VAR_4, "Bad Q texgen");
            return;
      }
   }
}
