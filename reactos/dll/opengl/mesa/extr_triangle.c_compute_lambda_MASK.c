
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double GLfloat ;


 double FUNC_0 (double) ;

__attribute__((used)) static GLfloat FUNC_1( GLfloat VAR_0, GLfloat VAR_1,
                               GLfloat VAR_2, GLfloat VAR_3,
                               GLfloat VAR_4, GLfloat VAR_5,
                               GLfloat VAR_6, GLfloat VAR_7, GLfloat VAR_8,
                               GLfloat VAR_9, GLfloat VAR_10 )
{

   GLfloat VAR_11 = 1.0 / VAR_6;
   GLfloat VAR_12, VAR_13, VAR_14, VAR_15;
   GLfloat VAR_16, VAR_17, VAR_18;

   VAR_12 = (VAR_2 - VAR_0*VAR_7) * VAR_11 * VAR_9;
   VAR_13 = (VAR_3 - VAR_0*VAR_8) * VAR_11 * VAR_9;
   VAR_14 = (VAR_4 - VAR_1*VAR_7) * VAR_11 * VAR_10;
   VAR_15 = (VAR_5 - VAR_1*VAR_8) * VAR_11 * VAR_10;

   VAR_16 = VAR_12 * VAR_12 + VAR_13 * VAR_13;
   VAR_17 = VAR_14 * VAR_14 + VAR_15 * VAR_15;


   VAR_18 = VAR_16 + VAR_17;
   if (VAR_18 <= 0.0F) {
      return 0.0F;
   }
   else {

      return FUNC_0(VAR_18) * 1.442695 * 0.5;
   }
}
