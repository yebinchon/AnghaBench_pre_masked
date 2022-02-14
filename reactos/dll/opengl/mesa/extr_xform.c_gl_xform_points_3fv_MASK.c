
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t GLuint ;
typedef float GLfloat ;



void FUNC_0( GLuint VAR_0, GLfloat VAR_1[][4], const GLfloat VAR_2[16],
                          GLfloat VAR_3[][3] )
{




   {
      GLuint VAR_4;
      GLfloat VAR_5 = VAR_2[0], VAR_6 = VAR_2[4], VAR_7 = VAR_2[8], VAR_8 = VAR_2[12];
      GLfloat VAR_9 = VAR_2[1], VAR_10 = VAR_2[5], VAR_11 = VAR_2[9], VAR_12 = VAR_2[13];
      for (VAR_4=0;VAR_4<VAR_0;VAR_4++) {
         GLfloat VAR_13 = VAR_3[VAR_4][0], VAR_14 = VAR_3[VAR_4][1], VAR_15 = VAR_3[VAR_4][2];
         VAR_1[VAR_4][0] = VAR_5 * VAR_13 + VAR_6 * VAR_14 + VAR_7 * VAR_15 + VAR_8;
         VAR_1[VAR_4][1] = VAR_9 * VAR_13 + VAR_10 * VAR_14 + VAR_11 * VAR_15 + VAR_12;
      }
   }
   {
      GLuint VAR_16;
      GLfloat VAR_17 = VAR_2[2], VAR_18 = VAR_2[6], VAR_19 = VAR_2[10], VAR_20 = VAR_2[14];
      GLfloat VAR_21 = VAR_2[3], VAR_22 = VAR_2[7], VAR_23 = VAR_2[11], VAR_24 = VAR_2[15];
      if (VAR_21==0.0F && VAR_22==0.0F && VAR_23==0.0F && VAR_24==1.0F) {

         for (VAR_16=0;VAR_16<VAR_0;VAR_16++) {
            GLfloat VAR_25 = VAR_3[VAR_16][0], VAR_26 = VAR_3[VAR_16][1], VAR_27 = VAR_3[VAR_16][2];
            VAR_1[VAR_16][2] = VAR_17 * VAR_25 + VAR_18 * VAR_26 + VAR_19 * VAR_27 + VAR_20;
            VAR_1[VAR_16][3] = 1.0F;
         }
      }
      else {

         for (VAR_16=0;VAR_16<VAR_0;VAR_16++) {
            GLfloat VAR_28 = VAR_3[VAR_16][0], VAR_29 = VAR_3[VAR_16][1], VAR_30 = VAR_3[VAR_16][2];
            VAR_1[VAR_16][2] = VAR_17 * VAR_28 + VAR_18 * VAR_29 + VAR_19 * VAR_30 + VAR_20;
            VAR_1[VAR_16][3] = VAR_21 * VAR_28 + VAR_22 * VAR_29 + VAR_23 * VAR_30 + VAR_24;
         }
      }
   }
}
