
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;
typedef int GLenum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;


 int VAR_14 ;



 int VAR_15 ;
 int VAR_16 ;


 int FUNC_1 (int *,char*) ;

GLuint FUNC_2( GLenum VAR_17, GLenum VAR_18 )
{
   GLuint VAR_19 = 0;


   switch (VAR_18) {
      case 130:
         VAR_19 |= VAR_9 | VAR_2;
         break;
      case 134:
         VAR_19 |= VAR_7 | VAR_0;
         break;
      case 131:
         VAR_19 |= VAR_8 | VAR_1;
         break;
      case 128:
         VAR_19 |= VAR_13 | VAR_6;
         break;
      case 129:
         VAR_19 |= VAR_12 | VAR_5;
         break;
      case 133:
         VAR_19 |= VAR_7 | VAR_0;
         VAR_19 |= VAR_8 | VAR_1;
         break;
      case 132:
         VAR_19 |= VAR_10 | VAR_3;
         break;
      default:
         FUNC_1(((void*)0), "Bad param in gl_material_bitmask");
         return 0;
   }

   FUNC_0( VAR_17==VAR_15 || VAR_17==VAR_14 || VAR_17==VAR_16 );

   if (VAR_17==VAR_15) {
      VAR_19 &= VAR_11;
   }
   else if (VAR_17==VAR_14) {
      VAR_19 &= VAR_4;
   }

   return VAR_19;
}
