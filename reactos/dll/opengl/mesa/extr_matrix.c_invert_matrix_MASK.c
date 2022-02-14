
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float GLfloat ;


 float* VAR_0 ;
 int FUNC_0 (float*,float*,int) ;
 int FUNC_1 (float const*,float*) ;
 float VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;
 float VAR_4 ;
 float VAR_5 ;
 float VAR_6 ;
 float VAR_7 ;
 float VAR_8 ;
 float VAR_9 ;
 float VAR_10 ;
 float VAR_11 ;
 float VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_2( const GLfloat *VAR_17, GLfloat *VAR_18 )
{
   register GLfloat VAR_19;
   GLfloat VAR_20[16];

   if( (VAR_17)[(0)*4+(3)] != 0. || (VAR_17)[(1)*4+(3)] != 0. || (VAR_17)[(2)*4+(3)] != 0. || (VAR_17)[(3)*4+(3)] != 1. ) {
      FUNC_1(VAR_17, VAR_18);
      return;
   }



   VAR_20[0]= (VAR_17)[(1)*4+(1)] * (VAR_17)[(2)*4+(2)] - (VAR_17)[(2)*4+(1)] * (VAR_17)[(1)*4+(2)];
   VAR_20[1]= (VAR_17)[(2)*4+(1)] * (VAR_17)[(0)*4+(2)] - (VAR_17)[(0)*4+(1)] * (VAR_17)[(2)*4+(2)];
   VAR_20[2]= (VAR_17)[(0)*4+(1)] * (VAR_17)[(1)*4+(2)] - (VAR_17)[(1)*4+(1)] * (VAR_17)[(0)*4+(2)];


   VAR_19= (VAR_17)[(0)*4+(0)] * VAR_20[0] + (VAR_17)[(1)*4+(0)] * VAR_20[1] + (VAR_17)[(2)*4+(0)] * VAR_20[2];


   if (VAR_19 == 0.0F) {

      FUNC_0( VAR_18, VAR_0, 16*sizeof(GLfloat) );
   }
   else {
      GLfloat VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
      register GLfloat VAR_27, VAR_28, VAR_29, VAR_30;

      VAR_19= 1. / VAR_19;


      VAR_20[0] *= VAR_19;
      VAR_20[1] *= VAR_19;
      VAR_20[2] *= VAR_19;
      VAR_20[3] = 0.;

      VAR_27= (VAR_17)[(0)*4+(0)] * VAR_19;
      VAR_28= (VAR_17)[(1)*4+(0)] * VAR_19;
      VAR_29= (VAR_17)[(2)*4+(0)] * VAR_19;
      VAR_30= (VAR_17)[(3)*4+(0)] * VAR_19;
      VAR_20[4] = VAR_29 * (VAR_17)[(1)*4+(2)] - VAR_28 * (VAR_17)[(2)*4+(2)];
      VAR_20[5] = VAR_27 * (VAR_17)[(2)*4+(2)] - VAR_29 * (VAR_17)[(0)*4+(2)];
      VAR_20[6] = VAR_28 * (VAR_17)[(0)*4+(2)] - VAR_27 * (VAR_17)[(1)*4+(2)];
      VAR_20[7] = 0.;



      VAR_21 = VAR_27*(VAR_17)[(1)*4+(1)] - (VAR_17)[(0)*4+(1)]*VAR_28;
      VAR_22 = VAR_27*(VAR_17)[(2)*4+(1)] - (VAR_17)[(0)*4+(1)]*VAR_29;
      VAR_23 = VAR_28*(VAR_17)[(2)*4+(1)] - (VAR_17)[(1)*4+(1)]*VAR_29;
      VAR_24 = VAR_28*(VAR_17)[(3)*4+(1)] - (VAR_17)[(1)*4+(1)]*VAR_30;
      VAR_25 = VAR_29*(VAR_17)[(3)*4+(1)] - (VAR_17)[(2)*4+(1)]*VAR_30;
      VAR_26 = VAR_30*(VAR_17)[(0)*4+(1)] - (VAR_17)[(3)*4+(1)]*VAR_27;

      VAR_20[8] = VAR_23;
      VAR_20[9] = -VAR_22;
      VAR_20[10] = VAR_21;
      VAR_20[11] = 0.;

      VAR_20[12] = -((VAR_17)[(1)*4+(2)] * VAR_25 - (VAR_17)[(2)*4+(2)] * VAR_24 + (VAR_17)[(3)*4+(2)] * VAR_23);
      VAR_20[13] = ((VAR_17)[(0)*4+(2)] * VAR_25 + (VAR_17)[(2)*4+(2)] * VAR_26 + (VAR_17)[(3)*4+(2)] * VAR_22);
      VAR_20[14] = -((VAR_17)[(0)*4+(2)] * VAR_24 + (VAR_17)[(1)*4+(2)] * VAR_26 + (VAR_17)[(3)*4+(2)] * VAR_21);
      VAR_20[15] = 1.;

      FUNC_0(VAR_18, VAR_20, 16*sizeof(GLfloat));
  }
}
