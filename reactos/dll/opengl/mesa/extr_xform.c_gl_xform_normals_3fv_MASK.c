
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t GLuint ;
typedef int GLfloat ;
typedef int GLdouble ;
typedef scalar_t__ GLboolean ;


 int FUNC_0 (int) ;

void FUNC_1( GLuint VAR_0, GLfloat VAR_1[][3], const GLfloat VAR_2[16],
                           GLfloat VAR_3[][3], GLboolean VAR_4 )
{
   if (VAR_4) {

      GLuint VAR_5;
      GLfloat VAR_6 = VAR_2[0], VAR_7 = VAR_2[4], VAR_8 = VAR_2[8];
      GLfloat VAR_9 = VAR_2[1], VAR_10 = VAR_2[5], VAR_11 = VAR_2[9];
      GLfloat VAR_12 = VAR_2[2], VAR_13 = VAR_2[6], VAR_14 = VAR_2[10];
      for (VAR_5=0;VAR_5<VAR_0;VAR_5++) {
         GLdouble VAR_15, VAR_16, VAR_17;
         {
            GLfloat VAR_18 = VAR_3[VAR_5][0], VAR_19 = VAR_3[VAR_5][1], VAR_20 = VAR_3[VAR_5][2];
            VAR_15 = VAR_18 * VAR_6 + VAR_19 * VAR_9 + VAR_20 * VAR_12;
            VAR_16 = VAR_18 * VAR_7 + VAR_19 * VAR_10 + VAR_20 * VAR_13;
            VAR_17 = VAR_18 * VAR_8 + VAR_19 * VAR_11 + VAR_20 * VAR_14;
         }
         {
            GLdouble VAR_21, VAR_22;
            VAR_21 = FUNC_0( VAR_15*VAR_15 + VAR_16*VAR_16 + VAR_17*VAR_17 );
            VAR_22 = (VAR_21>1E-30) ? (1.0 / VAR_21) : 1.0;
            VAR_1[VAR_5][0] = VAR_15 * VAR_22;
            VAR_1[VAR_5][1] = VAR_16 * VAR_22;
            VAR_1[VAR_5][2] = VAR_17 * VAR_22;
         }
      }
   }
   else {

      GLuint VAR_23;
      GLfloat VAR_24 = VAR_2[0], VAR_25 = VAR_2[4], VAR_26 = VAR_2[8];
      GLfloat VAR_27 = VAR_2[1], VAR_28 = VAR_2[5], VAR_29 = VAR_2[9];
      GLfloat VAR_30 = VAR_2[2], VAR_31 = VAR_2[6], VAR_32 = VAR_2[10];
      for (VAR_23=0;VAR_23<VAR_0;VAR_23++) {
         GLfloat VAR_33 = VAR_3[VAR_23][0], VAR_34 = VAR_3[VAR_23][1], VAR_35 = VAR_3[VAR_23][2];
         VAR_1[VAR_23][0] = VAR_33 * VAR_24 + VAR_34 * VAR_27 + VAR_35 * VAR_30;
         VAR_1[VAR_23][1] = VAR_33 * VAR_25 + VAR_34 * VAR_28 + VAR_35 * VAR_31;
         VAR_1[VAR_23][2] = VAR_33 * VAR_26 + VAR_34 * VAR_29 + VAR_35 * VAR_32;
      }
   }
}
