
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int TextureMatrixType; int* TextureMatrix; } ;
typedef size_t GLuint ;
typedef int GLfloat ;
typedef TYPE_1__ GLcontext ;






 int FUNC_0 (size_t,int**,int*,int**) ;
 int FUNC_1 (size_t,int**,int*,int**) ;
 int FUNC_2 (size_t,int**,int*,int**) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static void FUNC_4( GLcontext *VAR_0, GLuint VAR_1, GLfloat VAR_2[][4] )
{

   switch (VAR_0->TextureMatrixType) {
      case 129:
         {
            const GLfloat *VAR_3 = VAR_0->TextureMatrix;
            GLfloat VAR_4 = VAR_3[0], VAR_5 = VAR_3[4], VAR_6 = VAR_3[8], VAR_7 = VAR_3[12];
            GLfloat VAR_8 = VAR_3[1], VAR_9 = VAR_3[5], VAR_10 = VAR_3[9], VAR_11 = VAR_3[13];
            GLfloat VAR_12 = VAR_3[2], VAR_13 = VAR_3[6], VAR_14 = VAR_3[10], VAR_15 = VAR_3[14];
            GLfloat VAR_16 = VAR_3[3], VAR_17 = VAR_3[7], VAR_18 = VAR_3[11], VAR_19 = VAR_3[15];
            GLuint VAR_20;
            for (VAR_20=0;VAR_20<VAR_1;VAR_20++) {
               GLfloat VAR_21 = VAR_2[VAR_20][0], VAR_22 = VAR_2[VAR_20][1], VAR_23 = VAR_2[VAR_20][2], VAR_24 = VAR_2[VAR_20][3];
               VAR_2[VAR_20][0] = VAR_4 * VAR_21 + VAR_5 * VAR_22 + VAR_6 * VAR_23 + VAR_7 * VAR_24;
               VAR_2[VAR_20][1] = VAR_8 * VAR_21 + VAR_9 * VAR_22 + VAR_10 * VAR_23 + VAR_11 * VAR_24;
               VAR_2[VAR_20][2] = VAR_12 * VAR_21 + VAR_13 * VAR_22 + VAR_14 * VAR_23 + VAR_15 * VAR_24;
               VAR_2[VAR_20][3] = VAR_16 * VAR_21 + VAR_17 * VAR_22 + VAR_18 * VAR_23 + VAR_19 * VAR_24;
            }
         }
         break;
      case 128:

         break;
      case 131:
         {
            const GLfloat *VAR_25 = VAR_0->TextureMatrix;
            GLfloat VAR_26 = VAR_25[0], VAR_27 = VAR_25[1], VAR_28 = VAR_25[4], VAR_29 = VAR_25[5];
            GLfloat VAR_30 = VAR_25[12], VAR_31 = VAR_25[13];
            GLuint VAR_32;
            for (VAR_32=0;VAR_32<VAR_1;VAR_32++) {
               GLfloat VAR_33 = VAR_2[VAR_32][0], VAR_34 = VAR_2[VAR_32][1], VAR_35 = VAR_2[VAR_32][2], VAR_36 = VAR_2[VAR_32][3];
               VAR_2[VAR_32][0] = VAR_26 * VAR_33 + VAR_28 * VAR_34 + VAR_30 * VAR_36;
               VAR_2[VAR_32][1] = VAR_27 * VAR_33 + VAR_29 * VAR_34 + VAR_31 * VAR_36;
               VAR_2[VAR_32][2] = + VAR_35 ;

            }
         }
         break;
      case 130:
         {
            const GLfloat *VAR_37 = VAR_0->TextureMatrix;
            GLfloat VAR_38 = VAR_37[0], VAR_39 = VAR_37[1], VAR_40 = VAR_37[2], VAR_41 = VAR_37[4], VAR_42 = VAR_37[5];
            GLfloat VAR_43 = VAR_37[6], VAR_44 = VAR_37[8], VAR_45 = VAR_37[9], VAR_46 = VAR_37[10];
            GLfloat VAR_47 = VAR_37[12], VAR_48 = VAR_37[13], VAR_49 = VAR_37[14];
            GLuint VAR_50;
            for (VAR_50=0;VAR_50<VAR_1;VAR_50++) {
               GLfloat VAR_51 = VAR_2[VAR_50][0], VAR_52 = VAR_2[VAR_50][1], VAR_53 = VAR_2[VAR_50][2], VAR_54 = VAR_2[VAR_50][3];
               VAR_2[VAR_50][0] = VAR_38 * VAR_51 + VAR_41 * VAR_52 + VAR_44 * VAR_53 + VAR_47 * VAR_54;
               VAR_2[VAR_50][1] = VAR_39 * VAR_51 + VAR_42 * VAR_52 + VAR_45 * VAR_53 + VAR_48 * VAR_54;
               VAR_2[VAR_50][2] = VAR_40 * VAR_51 + VAR_43 * VAR_52 + VAR_46 * VAR_53 + VAR_49 * VAR_54;

            }
         }
         break;
      default:

         FUNC_3( ((void*)0), "invalid matrix type in transform_texcoords()" );
   }
}
