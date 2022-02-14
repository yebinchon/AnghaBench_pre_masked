
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vertex_buffer {double** Win; double** Clip; double** TexCoord; scalar_t__* Index; scalar_t__** Color; } ;
struct TYPE_7__ {scalar_t__ StippleCounter; TYPE_1__* Visual; struct vertex_buffer* VB; } ;
struct TYPE_6__ {double InvRedScale; double InvGreenScale; double InvBlueScale; double InvAlphaScale; } ;
typedef size_t GLuint ;
typedef scalar_t__ GLint ;
typedef double GLfloat ;
typedef TYPE_2__ GLcontext ;


 double VAR_0 ;
 int FUNC_0 (TYPE_2__*,double) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*,double,double,double,double,double*,double,double*) ;

__attribute__((used)) static void FUNC_2( GLcontext *VAR_3, GLuint VAR_4, GLuint VAR_5, GLuint VAR_6 )
{
   struct vertex_buffer *VAR_7 = VAR_3->VB;
   GLfloat VAR_8, VAR_9, VAR_10, VAR_11;
   GLfloat VAR_12, VAR_13, VAR_14, VAR_15;
   GLfloat VAR_16[4], VAR_17[4], VAR_18;
   GLfloat VAR_19 = VAR_3->Visual->InvRedScale;
   GLfloat VAR_20 = VAR_3->Visual->InvGreenScale;
   GLfloat VAR_21 = VAR_3->Visual->InvBlueScale;
   GLfloat VAR_22 = VAR_3->Visual->InvAlphaScale;

   VAR_8 = VAR_7->Win[VAR_4][0];
   VAR_9 = VAR_7->Win[VAR_4][1];
   VAR_10 = VAR_7->Win[VAR_4][2] / VAR_0;
   VAR_11 = VAR_7->Clip[VAR_4][3];

   VAR_12 = VAR_7->Win[VAR_5][0];
   VAR_13 = VAR_7->Win[VAR_5][1];
   VAR_14 = VAR_7->Win[VAR_5][2] / VAR_0;
   VAR_15 = VAR_7->Clip[VAR_5][3];

   VAR_18 = (VAR_7->TexCoord[VAR_4][3]==0.0) ? 1.0 : (1.0F / VAR_7->TexCoord[VAR_4][3]);
   VAR_16[0] = VAR_7->TexCoord[VAR_4][0] * VAR_18;
   VAR_16[1] = VAR_7->TexCoord[VAR_4][1] * VAR_18;
   VAR_16[2] = VAR_7->TexCoord[VAR_4][2] * VAR_18;
   VAR_16[3] = VAR_7->TexCoord[VAR_4][3];
   VAR_18 = (VAR_7->TexCoord[VAR_5][3]==0.0) ? 1.0 : (1.0F / VAR_7->TexCoord[VAR_5][3]);
   VAR_17[0] = VAR_7->TexCoord[VAR_5][0] * VAR_18;
   VAR_17[1] = VAR_7->TexCoord[VAR_5][1] * VAR_18;
   VAR_17[2] = VAR_7->TexCoord[VAR_5][2] * VAR_18;
   VAR_17[3] = VAR_7->TexCoord[VAR_5][3];

   if (VAR_3->StippleCounter==0) {
      FUNC_0( VAR_3, (GLfloat) (GLint) VAR_1 );
   }
   else {
      FUNC_0( VAR_3, (GLfloat) (GLint) VAR_2 );
   }

   {
      GLfloat VAR_23[4];

      VAR_23[0] = (GLfloat) VAR_7->Color[VAR_6][0] * VAR_19;
      VAR_23[1] = (GLfloat) VAR_7->Color[VAR_6][1] * VAR_20;
      VAR_23[2] = (GLfloat) VAR_7->Color[VAR_6][2] * VAR_21;
      VAR_23[3] = (GLfloat) VAR_7->Color[VAR_6][3] * VAR_22;
      FUNC_1( VAR_3, VAR_8,VAR_9,VAR_10,VAR_11, VAR_23,
                          (GLfloat) VAR_7->Index[VAR_6], VAR_16 );
      FUNC_1( VAR_3, VAR_12,VAR_13,VAR_14,VAR_15, VAR_23,
                          (GLfloat) VAR_7->Index[VAR_6], VAR_17 );
   }

   VAR_3->StippleCounter++;
}
