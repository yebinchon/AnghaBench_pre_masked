
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vertex_buffer {double** Eye; size_t Free; } ;
struct TYPE_5__ {double** ClipEquation; scalar_t__* ClipEnabled; } ;
struct TYPE_6__ {scalar_t__ ClipMask; TYPE_1__ Transform; struct vertex_buffer* VB; } ;
typedef size_t GLuint ;
typedef double GLfloat ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (size_t,double,double,double,double) ;
 size_t VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,size_t,double,size_t,size_t) ;

GLuint FUNC_2( GLcontext* VAR_3, GLuint *VAR_4, GLuint *VAR_5 )
{
   struct vertex_buffer* VAR_6 = VAR_3->VB;

   GLuint VAR_7, VAR_8, VAR_9;

   VAR_8 = *VAR_4;
   VAR_9 = *VAR_5;

   for (VAR_7=0;VAR_7<VAR_1;VAR_7++) {
      if (VAR_3->Transform.ClipEnabled[VAR_7]) {
  register GLfloat VAR_10, VAR_11, VAR_12, VAR_13;
  VAR_10 = VAR_3->Transform.ClipEquation[VAR_7][0];
  VAR_11 = VAR_3->Transform.ClipEquation[VAR_7][1];
  VAR_12 = VAR_3->Transform.ClipEquation[VAR_7][2];
  VAR_13 = VAR_3->Transform.ClipEquation[VAR_7][3];

         if (FUNC_0( VAR_8, VAR_10,VAR_11,VAR_12,VAR_13 )) {
            if (FUNC_0( VAR_9, VAR_10,VAR_11,VAR_12,VAR_13 )) {

               return 0;
            }
            else {

               GLfloat VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
               VAR_14 = VAR_6->Eye[VAR_8][0] - VAR_6->Eye[VAR_9][0];
               VAR_15 = VAR_6->Eye[VAR_8][1] - VAR_6->Eye[VAR_9][1];
               VAR_16 = VAR_6->Eye[VAR_8][2] - VAR_6->Eye[VAR_9][2];
               VAR_17 = VAR_6->Eye[VAR_8][3] - VAR_6->Eye[VAR_9][3];
        VAR_19 = VAR_14*VAR_10 + VAR_15*VAR_11 + VAR_16*VAR_12 + VAR_17*VAR_13;
        if (VAR_19==0.0) {
    VAR_18 = 0.0;
        }
        else {
    VAR_18 = -(VAR_6->Eye[VAR_9][0]*VAR_10+VAR_6->Eye[VAR_9][1]*VAR_11
         +VAR_6->Eye[VAR_9][2]*VAR_12+VAR_6->Eye[VAR_9][3]*VAR_13) / VAR_19;
                  if (VAR_18>1.0F) VAR_18 = 1.0F;
        }
        VAR_6->Eye[VAR_6->Free][0] = VAR_6->Eye[VAR_9][0] + VAR_18 * VAR_14;
        VAR_6->Eye[VAR_6->Free][1] = VAR_6->Eye[VAR_9][1] + VAR_18 * VAR_15;
        VAR_6->Eye[VAR_6->Free][2] = VAR_6->Eye[VAR_9][2] + VAR_18 * VAR_16;
        VAR_6->Eye[VAR_6->Free][3] = VAR_6->Eye[VAR_9][3] + VAR_18 * VAR_17;


        if (VAR_3->ClipMask)
    FUNC_1( VAR_3, VAR_0, VAR_6->Free, VAR_18, VAR_9, VAR_8 );

        VAR_8 = VAR_6->Free;
        VAR_6->Free++;
        if (VAR_6->Free==VAR_2) VAR_6->Free = 1;
            }
         }
         else {
            if (FUNC_0( VAR_9, VAR_10,VAR_11,VAR_12,VAR_13 )) {

               GLfloat VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
               VAR_20 = VAR_6->Eye[VAR_9][0] - VAR_6->Eye[VAR_8][0];
               VAR_21 = VAR_6->Eye[VAR_9][1] - VAR_6->Eye[VAR_8][1];
               VAR_22 = VAR_6->Eye[VAR_9][2] - VAR_6->Eye[VAR_8][2];
               VAR_23 = VAR_6->Eye[VAR_9][3] - VAR_6->Eye[VAR_8][3];
        VAR_25 = VAR_20*VAR_10 + VAR_21*VAR_11 + VAR_22*VAR_12 + VAR_23*VAR_13;
        if (VAR_25==0.0) {
    VAR_24 = 0.0;
        }
        else {
    VAR_24 = -(VAR_6->Eye[VAR_8][0]*VAR_10+VAR_6->Eye[VAR_8][1]*VAR_11
         +VAR_6->Eye[VAR_8][2]*VAR_12+VAR_6->Eye[VAR_8][3]*VAR_13) / VAR_25;
                  if (VAR_24>1.0F) VAR_24 = 1.0F;
        }
        VAR_6->Eye[VAR_6->Free][0] = VAR_6->Eye[VAR_8][0] + VAR_24 * VAR_20;
        VAR_6->Eye[VAR_6->Free][1] = VAR_6->Eye[VAR_8][1] + VAR_24 * VAR_21;
        VAR_6->Eye[VAR_6->Free][2] = VAR_6->Eye[VAR_8][2] + VAR_24 * VAR_22;
        VAR_6->Eye[VAR_6->Free][3] = VAR_6->Eye[VAR_8][3] + VAR_24 * VAR_23;


        if (VAR_3->ClipMask)
    FUNC_1( VAR_3, VAR_0, VAR_6->Free, VAR_24, VAR_8, VAR_9 );

        VAR_9 = VAR_6->Free;
        VAR_6->Free++;
        if (VAR_6->Free==VAR_2) VAR_6->Free = 1;
            }
            else {

            }
         }
      }
   }

   *VAR_4 = VAR_8;
   *VAR_5 = VAR_9;
   return 1;
}
