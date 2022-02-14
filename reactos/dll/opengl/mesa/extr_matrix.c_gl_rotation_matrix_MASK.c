
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double GLfloat ;


 double VAR_0 ;
 double FUNC_0 (double) ;
 int VAR_1 ;
 double FUNC_1 (int,int) ;
 int FUNC_2 (double*,int ,int) ;
 double FUNC_3 (double) ;
 double FUNC_4 (double) ;

void FUNC_5( GLfloat VAR_2, GLfloat VAR_3, GLfloat VAR_4, GLfloat VAR_5,
                         GLfloat VAR_6[] )
{

   GLfloat VAR_7, VAR_8, VAR_9;
   GLfloat VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

   VAR_8 = FUNC_4( VAR_2 * VAR_0 );
   VAR_9 = FUNC_3( VAR_2 * VAR_0 );

   VAR_7 = FUNC_0( VAR_3*VAR_3 + VAR_4*VAR_4 + VAR_5*VAR_5 );

   if (VAR_7 == 0.0) {

      FUNC_2(VAR_6, VAR_1, sizeof(GLfloat)*16);
      return;
   }

   VAR_3 /= VAR_7;
   VAR_4 /= VAR_7;
   VAR_5 /= VAR_7;
   VAR_10 = VAR_3 * VAR_3;
   VAR_11 = VAR_4 * VAR_4;
   VAR_12 = VAR_5 * VAR_5;
   VAR_13 = VAR_3 * VAR_4;
   VAR_14 = VAR_4 * VAR_5;
   VAR_15 = VAR_5 * VAR_3;
   VAR_16 = VAR_3 * VAR_8;
   VAR_17 = VAR_4 * VAR_8;
   VAR_18 = VAR_5 * VAR_8;
   VAR_19 = 1.0F - VAR_9;

   VAR_6[0*4+0] = (VAR_19 * VAR_10) + VAR_9;
   VAR_6[1*4+0] = (VAR_19 * VAR_13) - VAR_18;
   VAR_6[2*4+0] = (VAR_19 * VAR_15) + VAR_17;
   VAR_6[3*4+0] = 0.0F;

   VAR_6[0*4+1] = (VAR_19 * VAR_13) + VAR_18;
   VAR_6[1*4+1] = (VAR_19 * VAR_11) + VAR_9;
   VAR_6[2*4+1] = (VAR_19 * VAR_14) - VAR_16;
   VAR_6[3*4+1] = 0.0F;

   VAR_6[0*4+2] = (VAR_19 * VAR_15) - VAR_17;
   VAR_6[1*4+2] = (VAR_19 * VAR_14) + VAR_16;
   VAR_6[2*4+2] = (VAR_19 * VAR_12) + VAR_9;
   VAR_6[3*4+2] = 0.0F;

   VAR_6[0*4+3] = 0.0F;
   VAR_6[1*4+3] = 0.0F;
   VAR_6[2*4+3] = 0.0F;
   VAR_6[3*4+3] = 1.0F;


}
