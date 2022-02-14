
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLvoid ;
typedef int GLubyte ;
typedef int GLsizei ;
typedef int GLint ;
typedef int GLfloat ;
typedef int GLenum ;
typedef int GLcontext ;
typedef scalar_t__ GLboolean ;






 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;







 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;


 int VAR_11 ;
 int FUNC_0 (int *,int,int,int,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,int,int *) ;
 int FUNC_4 (int *,int,int,int,int const*) ;
 int FUNC_5 (int *,int,int,int,int *) ;
 int FUNC_6 (int *,int ,char*) ;

void FUNC_7( GLcontext *VAR_12,
                           GLenum VAR_13, GLsizei VAR_14,
                           const GLvoid *VAR_15 )
{
   GLboolean VAR_16, VAR_17, VAR_18;
   GLint VAR_19, VAR_20, VAR_21;
   GLenum VAR_22;
   GLint VAR_23, VAR_24, VAR_25;
   GLint VAR_26;
   GLint VAR_27, VAR_28;

   VAR_28 = sizeof(GLfloat);
   VAR_27 = VAR_28 * ((4*sizeof(GLubyte) + (VAR_28-1)) / VAR_28);

   if (VAR_14<0) {
      FUNC_6( VAR_12, VAR_6, "glInterleavedArrays(stride)" );
      return;
   }

   switch (VAR_13) {
      case 129:
         VAR_16 = VAR_2; VAR_17 = VAR_2; VAR_18 = VAR_2;
         VAR_19 = 0; VAR_20 = 0; VAR_21 = 2;
         VAR_25 = 0;
         VAR_26 = 2*VAR_28;
         break;
      case 128:
         VAR_16 = VAR_2; VAR_17 = VAR_2; VAR_18 = VAR_2;
         VAR_19 = 0; VAR_20 = 0; VAR_21 = 3;
         VAR_25 = 0;
         VAR_26 = 3*VAR_28;
         break;
      case 139:
         VAR_16 = VAR_2; VAR_17 = VAR_9; VAR_18 = VAR_2;
         VAR_19 = 0; VAR_20 = 4; VAR_21 = 2;
         VAR_22 = VAR_10;
         VAR_23 = 0;
         VAR_25 = VAR_27;
         VAR_26 = VAR_27 + 2*VAR_28;
         break;
      case 138:
         VAR_16 = VAR_2; VAR_17 = VAR_9; VAR_18 = VAR_2;
         VAR_19 = 0; VAR_20 = 4; VAR_21 = 3;
         VAR_22 = VAR_10;
         VAR_23 = 0;
         VAR_25 = VAR_27;
         VAR_26 = VAR_27 + 3*VAR_28;
         break;
      case 141:
         VAR_16 = VAR_2; VAR_17 = VAR_9; VAR_18 = VAR_2;
         VAR_19 = 0; VAR_20 = 3; VAR_21 = 3;
         VAR_22 = VAR_3;
         VAR_23 = 0;
         VAR_25 = 3*VAR_28;
         VAR_26 = 6*VAR_28;
         break;
      case 137:
         VAR_16 = VAR_2; VAR_17 = VAR_2; VAR_18 = VAR_9;
         VAR_19 = 0; VAR_20 = 0; VAR_21 = 3;
         VAR_24 = 0;
         VAR_25 = 3*VAR_28;
         VAR_26 = 6*VAR_28;
         break;
      case 140:
         VAR_16 = VAR_2; VAR_17 = VAR_9; VAR_18 = VAR_9;
         VAR_19 = 0; VAR_20 = 4; VAR_21 = 3;
         VAR_22 = VAR_3;
         VAR_23 = 0;
         VAR_24 = 4*VAR_28;
         VAR_25 = 7*VAR_28;
         VAR_26 = 10*VAR_28;
         break;
      case 132:
         VAR_16 = VAR_9; VAR_17 = VAR_2; VAR_18 = VAR_2;
         VAR_19 = 2; VAR_20 = 0; VAR_21 = 3;
         VAR_25 = 2*VAR_28;
         VAR_26 = 5*VAR_28;
         break;
      case 130:
         VAR_16 = VAR_9; VAR_17 = VAR_2; VAR_18 = VAR_2;
         VAR_19 = 4; VAR_20 = 0; VAR_21 = 4;
         VAR_25 = 4*VAR_28;
         VAR_26 = 8*VAR_28;
         break;
      case 134:
         VAR_16 = VAR_9; VAR_17 = VAR_9; VAR_18 = VAR_2;
         VAR_19 = 2; VAR_20 = 4; VAR_21 = 3;
         VAR_22 = VAR_10;
         VAR_23 = 2*VAR_28;
         VAR_25 = VAR_27+2*VAR_28;
         VAR_26 = VAR_27+5*VAR_28;
         break;
      case 136:
         VAR_16 = VAR_9; VAR_17 = VAR_9; VAR_18 = VAR_2;
         VAR_19 = 2; VAR_20 = 3; VAR_21 = 3;
         VAR_22 = VAR_3;
         VAR_23 = 2*VAR_28;
         VAR_25 = 5*VAR_28;
         VAR_26 = 8*VAR_28;
         break;
      case 133:
         VAR_16 = VAR_9; VAR_17 = VAR_2; VAR_18 = VAR_9;
         VAR_19 = 2; VAR_20 = 0; VAR_21 = 3;
         VAR_24 = 2*VAR_28;
         VAR_25 = 5*VAR_28;
         VAR_26 = 8*VAR_28;
         break;
      case 135:
         VAR_16 = VAR_9; VAR_17 = VAR_9; VAR_18 = VAR_9;
         VAR_19 = 2; VAR_20 = 4; VAR_21 = 3;
         VAR_22 = VAR_3;
         VAR_23 = 2*VAR_28;
         VAR_24 = 6*VAR_28;
         VAR_25 = 9*VAR_28;
         VAR_26 = 12*VAR_28;
         break;
      case 131:
         VAR_16 = VAR_9; VAR_17 = VAR_9; VAR_18 = VAR_9;
         VAR_19 = 4; VAR_20 = 4; VAR_21 = 4;
         VAR_22 = VAR_3;
         VAR_23 = 4*VAR_28;
         VAR_24 = 8*VAR_28;
         VAR_25 = 11*VAR_28;
         VAR_26 = 15*VAR_28;
         break;
      default:
         FUNC_6( VAR_12, VAR_5, "glInterleavedArrays(format)" );
         return;
   }

   if (VAR_14==0) {
      VAR_14 = VAR_26;
   }

   FUNC_1( VAR_12, VAR_1 );
   FUNC_1( VAR_12, VAR_4 );

   if (VAR_16) {
      FUNC_2( VAR_12, VAR_8 );
      FUNC_4( VAR_12, VAR_19, VAR_3, VAR_14, VAR_15 );
   }
   else {
      FUNC_1( VAR_12, VAR_8 );
   }

   if (VAR_17) {
      FUNC_2( VAR_12, VAR_0 );
      FUNC_0( VAR_12, VAR_20, VAR_22, VAR_14,
                       (GLubyte*) VAR_15 + VAR_23 );
   }
   else {
      FUNC_1( VAR_12, VAR_0 );
   }

   if (VAR_18) {
      FUNC_2( VAR_12, VAR_7 );
      FUNC_3( VAR_12, VAR_3, VAR_14,
                        (GLubyte*) VAR_15 + VAR_24 );
   }
   else {
      FUNC_1( VAR_12, VAR_7 );
   }

   FUNC_2( VAR_12, VAR_11 );
   FUNC_5( VAR_12, VAR_21, VAR_3, VAR_14,
                     (GLubyte *) VAR_15 + VAR_25 );
}
