
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vertex_buffer {double** Color; double** Win; double** Clip; double** TexCoord; scalar_t__* Index; } ;
struct TYPE_8__ {scalar_t__ ShadeModel; } ;
struct TYPE_9__ {TYPE_2__ Light; TYPE_1__* Visual; struct vertex_buffer* VB; } ;
struct TYPE_7__ {double InvRedScale; double InvGreenScale; double InvBlueScale; double InvAlphaScale; } ;
typedef size_t GLuint ;
typedef scalar_t__ GLint ;
typedef double GLfloat ;
typedef TYPE_3__ GLcontext ;


 double VAR_0 ;
 int FUNC_0 (TYPE_3__*,double) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_3__*,double,double,double,double,double*,double,double*) ;

__attribute__((used)) static void FUNC_2( GLcontext *VAR_4,
                               GLuint VAR_5, GLuint VAR_6, GLuint VAR_7, GLuint VAR_8 )
{
   struct vertex_buffer *VAR_9 = VAR_4->VB;
   GLfloat VAR_10[4];
   GLuint VAR_11;
   GLfloat VAR_12 = VAR_4->Visual->InvRedScale;
   GLfloat VAR_13 = VAR_4->Visual->InvGreenScale;
   GLfloat VAR_14 = VAR_4->Visual->InvBlueScale;
   GLfloat VAR_15 = VAR_4->Visual->InvAlphaScale;

   FUNC_0( VAR_4, (GLfloat) (GLint) VAR_2 );
   FUNC_0( VAR_4, (GLfloat) 3 );

   if (VAR_4->Light.ShadeModel==VAR_1) {

      VAR_10[0] = (GLfloat) VAR_9->Color[VAR_8][0] * VAR_12;
      VAR_10[1] = (GLfloat) VAR_9->Color[VAR_8][1] * VAR_13;
      VAR_10[2] = (GLfloat) VAR_9->Color[VAR_8][2] * VAR_14;
      VAR_10[3] = (GLfloat) VAR_9->Color[VAR_8][3] * VAR_15;
   }

   for (VAR_11=0;VAR_11<3;VAR_11++) {
      GLfloat VAR_16, VAR_17, VAR_18, VAR_19;
      GLfloat VAR_20[4];
      GLuint VAR_21;
      GLfloat VAR_22;

      if (VAR_11==0) VAR_21 = VAR_5;
      else if (VAR_11==1) VAR_21 = VAR_6;
      else VAR_21 = VAR_7;

      VAR_16 = VAR_9->Win[VAR_21][0];
      VAR_17 = VAR_9->Win[VAR_21][1];
      VAR_18 = VAR_9->Win[VAR_21][2] / VAR_0;
      VAR_19 = VAR_9->Clip[VAR_21][3];

      if (VAR_4->Light.ShadeModel==VAR_3) {

         VAR_10[0] = VAR_9->Color[VAR_21][0] * VAR_12;
         VAR_10[1] = VAR_9->Color[VAR_21][1] * VAR_13;
         VAR_10[2] = VAR_9->Color[VAR_21][2] * VAR_14;
         VAR_10[3] = VAR_9->Color[VAR_21][3] * VAR_15;
      }

      VAR_22 = (VAR_9->TexCoord[VAR_21][3]==0.0) ? 1.0 : (1.0F / VAR_9->TexCoord[VAR_21][3]);
      VAR_20[0] = VAR_9->TexCoord[VAR_21][0] * VAR_22;
      VAR_20[1] = VAR_9->TexCoord[VAR_21][1] * VAR_22;
      VAR_20[2] = VAR_9->TexCoord[VAR_21][2] * VAR_22;
      VAR_20[3] = VAR_9->TexCoord[VAR_21][3];

      FUNC_1( VAR_4, VAR_16, VAR_17, VAR_18, VAR_19, VAR_10, (GLfloat) VAR_9->Index[VAR_21], VAR_20 );
   }
}
