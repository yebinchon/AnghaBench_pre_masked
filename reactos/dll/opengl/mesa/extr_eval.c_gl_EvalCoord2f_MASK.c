
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct gl_2d_map {double u1; double u2; double v1; double v2; int Vorder; int Uorder; int Points; } ;
struct TYPE_11__ {double* Normal; double* TexCoord; int ByteColor; scalar_t__ Index; } ;
struct TYPE_10__ {struct gl_2d_map Map2Texture1; struct gl_2d_map Map2Texture2; struct gl_2d_map Map2Texture3; struct gl_2d_map Map2Texture4; struct gl_2d_map Map2Normal; struct gl_2d_map Map2Color4; struct gl_2d_map Map2Index; struct gl_2d_map Map2Vertex3; struct gl_2d_map Map2Vertex4; } ;
struct TYPE_9__ {scalar_t__ Map2TextureCoord1; scalar_t__ Map2TextureCoord2; scalar_t__ Map2TextureCoord3; scalar_t__ Map2TextureCoord4; scalar_t__ Map2Normal; scalar_t__ Map2Vertex4; scalar_t__ Map2Vertex3; scalar_t__ AutoNormal; scalar_t__ Map2Color4; scalar_t__ Map2Index; } ;
struct TYPE_12__ {TYPE_4__ Current; TYPE_3__ EvalMap; TYPE_2__ Eval; TYPE_1__* Visual; } ;
struct TYPE_8__ {double RedScale; double GreenScale; double BlueScale; double AlphaScale; } ;
typedef scalar_t__ GLuint ;
typedef scalar_t__ GLubyte ;
typedef scalar_t__ GLint ;
typedef double GLfloat ;
typedef TYPE_5__ GLcontext ;


 int FUNC_0 (scalar_t__*,int ) ;
 int FUNC_1 (double*,double*,double*) ;
 int FUNC_2 (double*) ;
 int FUNC_3 (int ,double*,double*,double*,double,double,int,int ,int ) ;
 int FUNC_4 (TYPE_5__*,double*,double*,scalar_t__*,scalar_t__,double*) ;
 int FUNC_5 (int ,double*,double,double,int,int ,int ) ;

void FUNC_6( GLcontext* VAR_0, GLfloat VAR_1, GLfloat VAR_2 )
{
   GLfloat VAR_3[4];
   GLfloat VAR_4[3];
   GLfloat VAR_5[4];
   GLubyte VAR_6[4];
   GLubyte *VAR_7;
   GLfloat VAR_8[4];
   GLuint VAR_9;
   register GLfloat VAR_10, VAR_11;







   if(VAR_0->Eval.Map2Vertex4) {
      struct gl_2d_map *VAR_12 = &VAR_0->EvalMap.Map2Vertex4;
      VAR_10 = (VAR_1 - VAR_12->u1) / (VAR_12->u2 - VAR_12->u1);
      VAR_11 = (VAR_2 - VAR_12->v1) / (VAR_12->v2 - VAR_12->v1);

      if (VAR_0->Eval.AutoNormal) {
         GLfloat VAR_13[4], VAR_14[4];

         FUNC_3(VAR_12->Points, VAR_3, VAR_13, VAR_14, VAR_10, VAR_11, 4,
                           VAR_12->Uorder, VAR_12->Vorder);

         (VAR_4)[0] = (VAR_13)[1]*(VAR_14)[2] - (VAR_13)[2]*(VAR_14)[1]; (VAR_4)[1] = (VAR_13)[2]*(VAR_14)[0] - (VAR_13)[0]*(VAR_14)[2]; (VAR_4)[2] = (VAR_13)[0]*(VAR_14)[1] - (VAR_13)[1]*(VAR_14)[0];
         FUNC_2(VAR_4);
      }
      else {
         FUNC_5(VAR_12->Points, VAR_3, VAR_10, VAR_11, 4,
                            VAR_12->Uorder, VAR_12->Vorder);
      }
   }
   else if (VAR_0->Eval.Map2Vertex3) {
      struct gl_2d_map *VAR_15 = &VAR_0->EvalMap.Map2Vertex3;
      VAR_10 = (VAR_1 - VAR_15->u1) / (VAR_15->u2 - VAR_15->u1);
      VAR_11 = (VAR_2 - VAR_15->v1) / (VAR_15->v2 - VAR_15->v1);
      if (VAR_0->Eval.AutoNormal) {
         GLfloat VAR_16[3], VAR_17[3];
         FUNC_3(VAR_15->Points, VAR_3, VAR_16, VAR_17, VAR_10, VAR_11, 3,
                           VAR_15->Uorder, VAR_15->Vorder);
         (VAR_4)[0] = (VAR_16)[1]*(VAR_17)[2] - (VAR_16)[2]*(VAR_17)[1]; (VAR_4)[1] = (VAR_16)[2]*(VAR_17)[0] - (VAR_16)[0]*(VAR_17)[2]; (VAR_4)[2] = (VAR_16)[0]*(VAR_17)[1] - (VAR_16)[1]*(VAR_17)[0];
         FUNC_2(VAR_4);
      }
      else {
         FUNC_5(VAR_15->Points, VAR_3, VAR_10, VAR_11, 3,
                            VAR_15->Uorder, VAR_15->Vorder);
      }
      VAR_3[3] = 1.0;
   }



   if (VAR_0->Eval.Map2Index) {
      GLfloat VAR_18;
      struct gl_2d_map *VAR_19 = &VAR_0->EvalMap.Map2Index;
      VAR_10 = (VAR_1 - VAR_19->u1) / (VAR_19->u2 - VAR_19->u1);
      VAR_11 = (VAR_2 - VAR_19->v1) / (VAR_19->v2 - VAR_19->v1);
      FUNC_5(VAR_19->Points, &VAR_18, VAR_10, VAR_11, 1,
                         VAR_19->Uorder, VAR_19->Vorder);
      VAR_9 = (GLuint) (GLint) VAR_18;
   }
   else {
      VAR_9 = VAR_0->Current.Index;
   }


   if (VAR_0->Eval.Map2Color4) {
      struct gl_2d_map *VAR_20 = &VAR_0->EvalMap.Map2Color4;
      VAR_10 = (VAR_1 - VAR_20->u1) / (VAR_20->u2 - VAR_20->u1);
      VAR_11 = (VAR_2 - VAR_20->v1) / (VAR_20->v2 - VAR_20->v1);
      FUNC_5(VAR_20->Points, VAR_5, VAR_10, VAR_11, 4,
                         VAR_20->Uorder, VAR_20->Vorder);
      VAR_6[0] = (GLint) (VAR_5[0] * VAR_0->Visual->RedScale);
      VAR_6[1] = (GLint) (VAR_5[1] * VAR_0->Visual->GreenScale);
      VAR_6[2] = (GLint) (VAR_5[2] * VAR_0->Visual->BlueScale);
      VAR_6[3] = (GLint) (VAR_5[3] * VAR_0->Visual->AlphaScale);
      VAR_7 = VAR_6;
   }
   else {
     GLubyte VAR_21[4];
     FUNC_0(VAR_21, VAR_0->Current.ByteColor );
     VAR_7 = VAR_21;
   }


   if (!VAR_0->Eval.AutoNormal
       || (!VAR_0->Eval.Map2Vertex3 && !VAR_0->Eval.Map2Vertex4)) {
      if (VAR_0->Eval.Map2Normal) {
         struct gl_2d_map *VAR_22 = &VAR_0->EvalMap.Map2Normal;
         VAR_10 = (VAR_1 - VAR_22->u1) / (VAR_22->u2 - VAR_22->u1);
         VAR_11 = (VAR_2 - VAR_22->v1) / (VAR_22->v2 - VAR_22->v1);
         FUNC_5(VAR_22->Points, VAR_4, VAR_10, VAR_11, 3,
                            VAR_22->Uorder, VAR_22->Vorder);
      }
      else {
         VAR_4[0] = VAR_0->Current.Normal[0];
         VAR_4[1] = VAR_0->Current.Normal[1];
         VAR_4[2] = VAR_0->Current.Normal[2];
      }
   }


   if (VAR_0->Eval.Map2TextureCoord4) {
      struct gl_2d_map *VAR_23 = &VAR_0->EvalMap.Map2Texture4;
      VAR_10 = (VAR_1 - VAR_23->u1) / (VAR_23->u2 - VAR_23->u1);
      VAR_11 = (VAR_2 - VAR_23->v1) / (VAR_23->v2 - VAR_23->v1);
      FUNC_5(VAR_23->Points, VAR_8, VAR_10, VAR_11, 4,
                         VAR_23->Uorder, VAR_23->Vorder);
   }
   else if (VAR_0->Eval.Map2TextureCoord3) {
      struct gl_2d_map *VAR_24 = &VAR_0->EvalMap.Map2Texture3;
      VAR_10 = (VAR_1 - VAR_24->u1) / (VAR_24->u2 - VAR_24->u1);
      VAR_11 = (VAR_2 - VAR_24->v1) / (VAR_24->v2 - VAR_24->v1);
      FUNC_5(VAR_24->Points, VAR_8, VAR_10, VAR_11, 3,
                         VAR_24->Uorder, VAR_24->Vorder);
     VAR_8[3] = 1.0;
   }
   else if (VAR_0->Eval.Map2TextureCoord2) {
      struct gl_2d_map *VAR_25 = &VAR_0->EvalMap.Map2Texture2;
      VAR_10 = (VAR_1 - VAR_25->u1) / (VAR_25->u2 - VAR_25->u1);
      VAR_11 = (VAR_2 - VAR_25->v1) / (VAR_25->v2 - VAR_25->v1);
      FUNC_5(VAR_25->Points, VAR_8, VAR_10, VAR_11, 2,
                         VAR_25->Uorder, VAR_25->Vorder);
     VAR_8[2] = 0.0;
     VAR_8[3] = 1.0;
   }
   else if (VAR_0->Eval.Map2TextureCoord1) {
      struct gl_2d_map *VAR_26 = &VAR_0->EvalMap.Map2Texture1;
      VAR_10 = (VAR_1 - VAR_26->u1) / (VAR_26->u2 - VAR_26->u1);
      VAR_11 = (VAR_2 - VAR_26->v1) / (VAR_26->v2 - VAR_26->v1);
      FUNC_5(VAR_26->Points, VAR_8, VAR_10, VAR_11, 1,
                         VAR_26->Uorder, VAR_26->Vorder);
     VAR_8[1] = 0.0;
     VAR_8[2] = 0.0;
     VAR_8[3] = 1.0;
   }
   else
   {
     VAR_8[0] = VAR_0->Current.TexCoord[0];
     VAR_8[1] = VAR_0->Current.TexCoord[1];
     VAR_8[2] = VAR_0->Current.TexCoord[2];
     VAR_8[3] = VAR_0->Current.TexCoord[3];
   }

   FUNC_4( VAR_0, VAR_3, VAR_4, VAR_7, VAR_9, VAR_8 );
}
