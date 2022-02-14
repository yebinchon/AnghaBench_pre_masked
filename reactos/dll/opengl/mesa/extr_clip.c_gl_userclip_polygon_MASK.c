
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vertex_buffer {float** Eye; size_t Free; int * Edgeflag; } ;
struct TYPE_5__ {float** ClipEquation; scalar_t__* ClipEnabled; } ;
struct TYPE_6__ {scalar_t__ ClipMask; TYPE_1__ Transform; struct vertex_buffer* VB; } ;
typedef size_t GLuint ;
typedef float GLfloat ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t,float,float,float,float) ;
 size_t VAR_1 ;
 int FUNC_1 (size_t*,size_t*,size_t) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int ,size_t,float,size_t,size_t) ;

GLuint FUNC_3( GLcontext* VAR_3, GLuint VAR_4, GLuint VAR_5[] )
{
   struct vertex_buffer* VAR_6 = VAR_3->VB;

   GLuint VAR_7[VAR_2];
   GLuint *VAR_8, *VAR_9;
   GLuint VAR_10, VAR_11;
   GLuint VAR_12, VAR_13;
   GLuint VAR_14, VAR_15;
   GLuint VAR_16;


   VAR_10 = VAR_4;
   VAR_8 = VAR_5;
   VAR_9 = VAR_7;

   for (VAR_16=0;VAR_16<VAR_1;VAR_16++) {
      if (VAR_3->Transform.ClipEnabled[VAR_16]) {
  register float VAR_17 = VAR_3->Transform.ClipEquation[VAR_16][0];
  register float VAR_18 = VAR_3->Transform.ClipEquation[VAR_16][1];
  register float VAR_19 = VAR_3->Transform.ClipEquation[VAR_16][2];
  register float VAR_20 = VAR_3->Transform.ClipEquation[VAR_16][3];

  if (VAR_10<3) return 0;


  VAR_14 = VAR_10 - 1;
  VAR_15 = VAR_8[VAR_14];

         VAR_11 = 0;

         for (VAR_12=0;VAR_12<VAR_10;VAR_12++) {
     VAR_13 = VAR_8[VAR_12];

            if (FUNC_0(VAR_13, VAR_17,VAR_18,VAR_19,VAR_20)) {
               if (FUNC_0(VAR_15, VAR_17,VAR_18,VAR_19,VAR_20)) {

    VAR_9[VAR_11++] = VAR_13;
               }
               else {

                  GLfloat VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;

    VAR_21 = VAR_6->Eye[VAR_15][0] - VAR_6->Eye[VAR_13][0];
    VAR_22 = VAR_6->Eye[VAR_15][1] - VAR_6->Eye[VAR_13][1];
    VAR_23 = VAR_6->Eye[VAR_15][2] - VAR_6->Eye[VAR_13][2];
    VAR_24 = VAR_6->Eye[VAR_15][3] - VAR_6->Eye[VAR_13][3];
    VAR_26 = VAR_21*VAR_17 + VAR_22*VAR_18 + VAR_23*VAR_19 + VAR_24*VAR_20;
    if (VAR_26==0.0) {
       VAR_25 = 0.0;
    }
    else {
       VAR_25 = -(VAR_6->Eye[VAR_13][0]*VAR_17+VAR_6->Eye[VAR_13][1]*VAR_18
         +VAR_6->Eye[VAR_13][2]*VAR_19+VAR_6->Eye[VAR_13][3]*VAR_20) / VAR_26;
                     if (VAR_25>1.0F) {
                        VAR_25 = 1.0F;
                     }
    }

    VAR_6->Eye[VAR_6->Free][0] = VAR_6->Eye[VAR_13][0] + VAR_25*VAR_21;
    VAR_6->Eye[VAR_6->Free][1] = VAR_6->Eye[VAR_13][1] + VAR_25*VAR_22;
    VAR_6->Eye[VAR_6->Free][2] = VAR_6->Eye[VAR_13][2] + VAR_25*VAR_23;
    VAR_6->Eye[VAR_6->Free][3] = VAR_6->Eye[VAR_13][3] + VAR_25*VAR_24;


    if (VAR_3->ClipMask) {
       FUNC_2( VAR_3, VAR_0, VAR_6->Free, VAR_25, VAR_13, VAR_15);
    }
    VAR_6->Edgeflag[VAR_6->Free] = VAR_6->Edgeflag[VAR_15];


    VAR_9[VAR_11++] = VAR_6->Free;
    VAR_6->Free++;
    if (VAR_6->Free==VAR_2) VAR_6->Free = 1;

    VAR_9[VAR_11++] = VAR_13;
               }
            }
            else {
               if (FUNC_0(VAR_15, VAR_17,VAR_18,VAR_19,VAR_20)) {

                  GLfloat VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;

                  VAR_27 = VAR_6->Eye[VAR_13][0]-VAR_6->Eye[VAR_15][0];
                  VAR_28 = VAR_6->Eye[VAR_13][1]-VAR_6->Eye[VAR_15][1];
                  VAR_29 = VAR_6->Eye[VAR_13][2]-VAR_6->Eye[VAR_15][2];
                  VAR_30 = VAR_6->Eye[VAR_13][3]-VAR_6->Eye[VAR_15][3];
    VAR_32 = VAR_27*VAR_17 + VAR_28*VAR_18 + VAR_29*VAR_19 + VAR_30*VAR_20;
    if (VAR_32==0.0) {
       VAR_31 = 0.0;
    }
    else {
       VAR_31 = -(VAR_6->Eye[VAR_15][0]*VAR_17+VAR_6->Eye[VAR_15][1]*VAR_18
         +VAR_6->Eye[VAR_15][2]*VAR_19+VAR_6->Eye[VAR_15][3]*VAR_20) / VAR_32;
                     if (VAR_31>1.0F) {
                        VAR_31 = 1.0F;
                     }
    }

    VAR_6->Eye[VAR_6->Free][0] = VAR_6->Eye[VAR_15][0] + VAR_31*VAR_27;
    VAR_6->Eye[VAR_6->Free][1] = VAR_6->Eye[VAR_15][1] + VAR_31*VAR_28;
    VAR_6->Eye[VAR_6->Free][2] = VAR_6->Eye[VAR_15][2] + VAR_31*VAR_29;
    VAR_6->Eye[VAR_6->Free][3] = VAR_6->Eye[VAR_15][3] + VAR_31*VAR_30;


    if (VAR_3->ClipMask) {
       FUNC_2( VAR_3, VAR_0, VAR_6->Free, VAR_31, VAR_15, VAR_13);
    }
    VAR_6->Edgeflag[VAR_6->Free] = VAR_6->Edgeflag[VAR_15];


    VAR_9[VAR_11++] = VAR_6->Free;
    VAR_6->Free++;
    if (VAR_6->Free==VAR_2) VAR_6->Free = 1;
        }

            }

     VAR_14 = VAR_12;
     VAR_15 = VAR_13;


            if (VAR_11>=VAR_2-1) {

               if (VAR_9!=VAR_7) {
                  FUNC_1( VAR_5, VAR_7, VAR_11 * sizeof(GLuint) );
               }
               return VAR_2-1;
            }

         }


         {
            GLuint *VAR_33;
            VAR_33 = VAR_8;
            VAR_8 = VAR_9;
            VAR_9 = VAR_33;
            VAR_10 = VAR_11;
         }

      }
   }




   if (VAR_9!=VAR_7) {
      FUNC_1( VAR_5, VAR_7, VAR_11 * sizeof(GLuint) );
   }

   return VAR_11;
}
