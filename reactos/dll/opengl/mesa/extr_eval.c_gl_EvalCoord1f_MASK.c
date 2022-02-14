
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct gl_1d_map {double u1; double u2; int Order; int Points; } ;
struct TYPE_8__ {double* Normal; double* TexCoord; int ByteColor; scalar_t__ Index; } ;
struct TYPE_10__ {struct gl_1d_map Map1Texture1; struct gl_1d_map Map1Texture2; struct gl_1d_map Map1Texture3; struct gl_1d_map Map1Texture4; struct gl_1d_map Map1Normal; struct gl_1d_map Map1Color4; struct gl_1d_map Map1Index; struct gl_1d_map Map1Vertex3; struct gl_1d_map Map1Vertex4; } ;
struct TYPE_9__ {scalar_t__ Map1TextureCoord1; scalar_t__ Map1TextureCoord2; scalar_t__ Map1TextureCoord3; scalar_t__ Map1TextureCoord4; scalar_t__ Map1Normal; scalar_t__ Map1Color4; scalar_t__ Map1Index; scalar_t__ Map1Vertex3; scalar_t__ Map1Vertex4; } ;
struct TYPE_12__ {TYPE_1__ Current; TYPE_3__ EvalMap; TYPE_2__ Eval; TYPE_4__* Visual; } ;
struct TYPE_11__ {double RedScale; double GreenScale; double BlueScale; double AlphaScale; } ;
typedef scalar_t__ GLuint ;
typedef scalar_t__ GLubyte ;
typedef scalar_t__ GLint ;
typedef double GLfloat ;
typedef TYPE_5__ GLcontext ;


 int FUNC_0 (scalar_t__*,int ) ;
 int FUNC_1 (TYPE_5__*,double*,double*,scalar_t__*,scalar_t__,double*) ;
 int FUNC_2 (int ,double*,double,int,int ) ;

void FUNC_3(GLcontext* VAR_0, GLfloat VAR_1)
{
  GLfloat VAR_2[4];
  GLfloat VAR_3[3];
  GLfloat VAR_4[4];
  GLubyte VAR_5[4];
  GLubyte *VAR_6;
  GLfloat VAR_7[4];
  GLuint VAR_8;
  register GLfloat VAR_9;


  if (VAR_0->Eval.Map1Vertex4)
  {
     struct gl_1d_map *VAR_10 = &VAR_0->EvalMap.Map1Vertex4;
     VAR_9 = (VAR_1 - VAR_10->u1) / (VAR_10->u2 - VAR_10->u1);
     FUNC_2(VAR_10->Points, VAR_2, VAR_9, 4, VAR_10->Order);
  }
  else if (VAR_0->Eval.Map1Vertex3)
  {
     struct gl_1d_map *VAR_11 = &VAR_0->EvalMap.Map1Vertex3;
     VAR_9 = (VAR_1 - VAR_11->u1) / (VAR_11->u2 - VAR_11->u1);
     FUNC_2(VAR_11->Points, VAR_2, VAR_9, 3, VAR_11->Order);
     VAR_2[3] = 1.0;
  }


  if (VAR_0->Eval.Map1Index)
  {
     struct gl_1d_map *VAR_12 = &VAR_0->EvalMap.Map1Index;
     GLfloat VAR_13;
     VAR_9 = (VAR_1 - VAR_12->u1) / (VAR_12->u2 - VAR_12->u1);
     FUNC_2(VAR_12->Points, &VAR_13, VAR_9, 1, VAR_12->Order);
     VAR_8 = (GLuint) (GLint) VAR_13;
  }
  else {
     VAR_8 = VAR_0->Current.Index;
  }


  if (VAR_0->Eval.Map1Color4) {
     struct gl_1d_map *VAR_14 = &VAR_0->EvalMap.Map1Color4;
     VAR_9 = (VAR_1 - VAR_14->u1) / (VAR_14->u2 - VAR_14->u1);
     FUNC_2(VAR_14->Points, VAR_4, VAR_9, 4, VAR_14->Order);
     VAR_5[0] = (GLint) (VAR_4[0] * VAR_0->Visual->RedScale);
     VAR_5[1] = (GLint) (VAR_4[1] * VAR_0->Visual->GreenScale);
     VAR_5[2] = (GLint) (VAR_4[2] * VAR_0->Visual->BlueScale);
     VAR_5[3] = (GLint) (VAR_4[3] * VAR_0->Visual->AlphaScale);
     VAR_6 = VAR_5;
  }
  else {
     GLubyte VAR_15[4];
     FUNC_0(VAR_15, VAR_0->Current.ByteColor );
     VAR_6 = VAR_15;
  }


  if (VAR_0->Eval.Map1Normal) {
     struct gl_1d_map *VAR_16 = &VAR_0->EvalMap.Map1Normal;
     VAR_9 = (VAR_1 - VAR_16->u1) / (VAR_16->u2 - VAR_16->u1);
     FUNC_2(VAR_16->Points, VAR_3, VAR_9, 3, VAR_16->Order);
  }
  else {
    VAR_3[0] = VAR_0->Current.Normal[0];
    VAR_3[1] = VAR_0->Current.Normal[1];
    VAR_3[2] = VAR_0->Current.Normal[2];
  }


  if (VAR_0->Eval.Map1TextureCoord4) {
     struct gl_1d_map *VAR_17 = &VAR_0->EvalMap.Map1Texture4;
     VAR_9 = (VAR_1 - VAR_17->u1) / (VAR_17->u2 - VAR_17->u1);
     FUNC_2(VAR_17->Points, VAR_7, VAR_9, 4, VAR_17->Order);
  }
  else if (VAR_0->Eval.Map1TextureCoord3) {
     struct gl_1d_map *VAR_18 = &VAR_0->EvalMap.Map1Texture3;
     VAR_9 = (VAR_1 - VAR_18->u1) / (VAR_18->u2 - VAR_18->u1);
     FUNC_2(VAR_18->Points, VAR_7, VAR_9, 3, VAR_18->Order);
     VAR_7[3] = 1.0;
  }
  else if (VAR_0->Eval.Map1TextureCoord2) {
     struct gl_1d_map *VAR_19 = &VAR_0->EvalMap.Map1Texture2;
     VAR_9 = (VAR_1 - VAR_19->u1) / (VAR_19->u2 - VAR_19->u1);
     FUNC_2(VAR_19->Points, VAR_7, VAR_9, 2, VAR_19->Order);
     VAR_7[2] = 0.0;
     VAR_7[3] = 1.0;
  }
  else if (VAR_0->Eval.Map1TextureCoord1) {
     struct gl_1d_map *VAR_20 = &VAR_0->EvalMap.Map1Texture1;
     VAR_9 = (VAR_1 - VAR_20->u1) / (VAR_20->u2 - VAR_20->u1);
     FUNC_2(VAR_20->Points, VAR_7, VAR_9, 1, VAR_20->Order);
     VAR_7[1] = 0.0;
     VAR_7[2] = 0.0;
     VAR_7[3] = 1.0;
  }
  else {
     VAR_7[0] = VAR_0->Current.TexCoord[0];
     VAR_7[1] = VAR_0->Current.TexCoord[1];
     VAR_7[2] = VAR_0->Current.TexCoord[2];
     VAR_7[3] = VAR_0->Current.TexCoord[3];
  }

  FUNC_1( VAR_0, VAR_2, VAR_3, VAR_6, VAR_8, VAR_7 );
}
