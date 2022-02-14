
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_9__ ;
typedef struct TYPE_41__ TYPE_8__ ;
typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_20__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_19__ ;
typedef struct TYPE_31__ TYPE_18__ ;
typedef struct TYPE_30__ TYPE_17__ ;
typedef struct TYPE_29__ TYPE_16__ ;
typedef struct TYPE_28__ TYPE_15__ ;
typedef struct TYPE_27__ TYPE_14__ ;
typedef struct TYPE_26__ TYPE_13__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


struct TYPE_42__ {int* Points; int Order; int u1; int u2; } ;
struct TYPE_41__ {int* Points; int Order; int u1; int u2; } ;
struct TYPE_40__ {int* Points; int Order; int u1; int u2; } ;
struct TYPE_39__ {int* Points; int Order; int u1; int u2; } ;
struct TYPE_38__ {int* Points; int Order; int u1; int u2; } ;
struct TYPE_37__ {int* Points; int Order; int u1; int u2; } ;
struct TYPE_36__ {int* Points; int Order; int u1; int u2; } ;
struct TYPE_35__ {int* Points; size_t Order; int u1; int u2; } ;
struct TYPE_31__ {int* Points; int Uorder; int Vorder; int u1; int u2; int v1; int v2; } ;
struct TYPE_30__ {int* Points; int Uorder; int Vorder; int u1; int u2; int v1; int v2; } ;
struct TYPE_29__ {int* Points; int Uorder; int Vorder; int u1; int u2; int v1; int v2; } ;
struct TYPE_28__ {int* Points; int Uorder; int Vorder; int u1; int u2; int v1; int v2; } ;
struct TYPE_27__ {int* Points; int Uorder; int Vorder; int u1; int u2; int v1; int v2; } ;
struct TYPE_26__ {int* Points; int Uorder; int Vorder; int u1; int u2; int v1; int v2; } ;
struct TYPE_25__ {int* Points; int Uorder; int Vorder; int u1; int u2; int v1; int v2; } ;
struct TYPE_24__ {int* Points; size_t Uorder; size_t Vorder; int u1; int u2; int v1; int v2; } ;
struct TYPE_23__ {int* Points; int Uorder; int Vorder; int u1; int u2; int v1; int v2; } ;
struct TYPE_33__ {int* Points; int Order; int u1; int u2; } ;
struct TYPE_32__ {TYPE_18__ Map2Vertex4; TYPE_17__ Map2Vertex3; TYPE_16__ Map2Texture4; TYPE_15__ Map2Texture3; TYPE_14__ Map2Texture2; TYPE_13__ Map2Texture1; TYPE_12__ Map2Normal; TYPE_11__ Map2Index; TYPE_10__ Map2Color4; TYPE_9__ Map1Vertex4; TYPE_8__ Map1Vertex3; TYPE_7__ Map1Texture4; TYPE_6__ Map1Texture3; TYPE_5__ Map1Texture2; TYPE_4__ Map1Texture1; TYPE_3__ Map1Normal; TYPE_2__ Map1Index; TYPE_1__ Map1Color4; } ;
struct TYPE_34__ {TYPE_19__ EvalMap; } ;
typedef size_t GLuint ;
typedef int GLfloat ;
typedef int GLenum ;
typedef TYPE_20__ GLcontext ;




 int VAR_0 ;
 int FUNC_0 (TYPE_20__*,int ,char*) ;

void FUNC_1( GLcontext* VAR_1, GLenum VAR_2, GLenum VAR_3, GLfloat *VAR_4 )
{
   GLuint VAR_5, VAR_6;
   GLfloat *VAR_7;

   switch (VAR_3) {
      case 148:
  switch (VAR_2) {
     case 146:
        VAR_7 = VAR_1->EvalMap.Map1Color4.Points;
        VAR_6 = VAR_1->EvalMap.Map1Color4.Order * 4;
        break;
     case 145:
        VAR_7 = VAR_1->EvalMap.Map1Index.Points;
        VAR_6 = VAR_1->EvalMap.Map1Index.Order;
        break;
     case 144:
        VAR_7 = VAR_1->EvalMap.Map1Normal.Points;
        VAR_6 = VAR_1->EvalMap.Map1Normal.Order * 3;
        break;
     case 143:
        VAR_7 = VAR_1->EvalMap.Map1Texture1.Points;
        VAR_6 = VAR_1->EvalMap.Map1Texture1.Order * 1;
        break;
     case 142:
        VAR_7 = VAR_1->EvalMap.Map1Texture2.Points;
        VAR_6 = VAR_1->EvalMap.Map1Texture2.Order * 2;
        break;
     case 141:
        VAR_7 = VAR_1->EvalMap.Map1Texture3.Points;
        VAR_6 = VAR_1->EvalMap.Map1Texture3.Order * 3;
        break;
     case 140:
        VAR_7 = VAR_1->EvalMap.Map1Texture4.Points;
        VAR_6 = VAR_1->EvalMap.Map1Texture4.Order * 4;
        break;
     case 139:
        VAR_7 = VAR_1->EvalMap.Map1Vertex3.Points;
        VAR_6 = VAR_1->EvalMap.Map1Vertex3.Order * 3;
        break;
     case 138:
        VAR_7 = VAR_1->EvalMap.Map1Vertex4.Points;
        VAR_6 = VAR_1->EvalMap.Map1Vertex4.Order * 4;
        break;
     case 137:
        VAR_7 = VAR_1->EvalMap.Map2Color4.Points;
        VAR_6 = VAR_1->EvalMap.Map2Color4.Uorder
                 * VAR_1->EvalMap.Map2Color4.Vorder * 4;
        break;
     case 136:
        VAR_7 = VAR_1->EvalMap.Map2Index.Points;
        VAR_6 = VAR_1->EvalMap.Map2Index.Uorder
                 * VAR_1->EvalMap.Map2Index.Vorder;
        break;
     case 135:
        VAR_7 = VAR_1->EvalMap.Map2Normal.Points;
        VAR_6 = VAR_1->EvalMap.Map2Normal.Uorder
                 * VAR_1->EvalMap.Map2Normal.Vorder * 3;
        break;
     case 134:
        VAR_7 = VAR_1->EvalMap.Map2Texture1.Points;
        VAR_6 = VAR_1->EvalMap.Map2Texture1.Uorder
                 * VAR_1->EvalMap.Map2Texture1.Vorder * 1;
        break;
     case 133:
        VAR_7 = VAR_1->EvalMap.Map2Texture2.Points;
        VAR_6 = VAR_1->EvalMap.Map2Texture2.Uorder
                 * VAR_1->EvalMap.Map2Texture2.Vorder * 2;
        break;
     case 132:
        VAR_7 = VAR_1->EvalMap.Map2Texture3.Points;
        VAR_6 = VAR_1->EvalMap.Map2Texture3.Uorder
                 * VAR_1->EvalMap.Map2Texture3.Vorder * 3;
        break;
     case 131:
        VAR_7 = VAR_1->EvalMap.Map2Texture4.Points;
        VAR_6 = VAR_1->EvalMap.Map2Texture4.Uorder
                 * VAR_1->EvalMap.Map2Texture4.Vorder * 4;
        break;
     case 130:
        VAR_7 = VAR_1->EvalMap.Map2Vertex3.Points;
        VAR_6 = VAR_1->EvalMap.Map2Vertex3.Uorder
                 * VAR_1->EvalMap.Map2Vertex3.Vorder * 3;
        break;
     case 129:
        VAR_7 = VAR_1->EvalMap.Map2Vertex4.Points;
        VAR_6 = VAR_1->EvalMap.Map2Vertex4.Uorder
                 * VAR_1->EvalMap.Map2Vertex4.Vorder * 4;
        break;
     default:
        FUNC_0( VAR_1, VAR_0, "glGetMapfv(target)" );
  }
  if (VAR_7) {
     for (VAR_5=0;VAR_5<VAR_6;VAR_5++) {
        VAR_4[VAR_5] = VAR_7[VAR_5];
     }
  }
         break;
      case 128:
  switch (VAR_2) {
     case 146:
        *VAR_4 = VAR_1->EvalMap.Map1Color4.Order;
        break;
     case 145:
        *VAR_4 = VAR_1->EvalMap.Map1Index.Order;
        break;
     case 144:
        *VAR_4 = VAR_1->EvalMap.Map1Normal.Order;
        break;
     case 143:
        *VAR_4 = VAR_1->EvalMap.Map1Texture1.Order;
        break;
     case 142:
        *VAR_4 = VAR_1->EvalMap.Map1Texture2.Order;
        break;
     case 141:
        *VAR_4 = VAR_1->EvalMap.Map1Texture3.Order;
        break;
     case 140:
        *VAR_4 = VAR_1->EvalMap.Map1Texture4.Order;
        break;
     case 139:
        *VAR_4 = VAR_1->EvalMap.Map1Vertex3.Order;
        break;
     case 138:
        *VAR_4 = VAR_1->EvalMap.Map1Vertex4.Order;
        break;
     case 137:
        VAR_4[0] = VAR_1->EvalMap.Map2Color4.Uorder;
        VAR_4[1] = VAR_1->EvalMap.Map2Color4.Vorder;
        break;
     case 136:
        VAR_4[0] = VAR_1->EvalMap.Map2Index.Uorder;
        VAR_4[1] = VAR_1->EvalMap.Map2Index.Vorder;
        break;
     case 135:
        VAR_4[0] = VAR_1->EvalMap.Map2Normal.Uorder;
        VAR_4[1] = VAR_1->EvalMap.Map2Normal.Vorder;
        break;
     case 134:
        VAR_4[0] = VAR_1->EvalMap.Map2Texture1.Uorder;
        VAR_4[1] = VAR_1->EvalMap.Map2Texture1.Vorder;
        break;
     case 133:
        VAR_4[0] = VAR_1->EvalMap.Map2Texture2.Uorder;
        VAR_4[1] = VAR_1->EvalMap.Map2Texture2.Vorder;
        break;
     case 132:
        VAR_4[0] = VAR_1->EvalMap.Map2Texture3.Uorder;
        VAR_4[1] = VAR_1->EvalMap.Map2Texture3.Vorder;
        break;
     case 131:
        VAR_4[0] = VAR_1->EvalMap.Map2Texture4.Uorder;
        VAR_4[1] = VAR_1->EvalMap.Map2Texture4.Vorder;
        break;
     case 130:
        VAR_4[0] = VAR_1->EvalMap.Map2Vertex3.Uorder;
        VAR_4[1] = VAR_1->EvalMap.Map2Vertex3.Vorder;
        break;
     case 129:
        VAR_4[0] = VAR_1->EvalMap.Map2Vertex4.Uorder;
        VAR_4[1] = VAR_1->EvalMap.Map2Vertex4.Vorder;
        break;
     default:
        FUNC_0( VAR_1, VAR_0, "glGetMapfv(target)" );
  }
         break;
      case 147:
  switch (VAR_2) {
     case 146:
        VAR_4[0] = VAR_1->EvalMap.Map1Color4.u1;
        VAR_4[1] = VAR_1->EvalMap.Map1Color4.u2;
        break;
     case 145:
        VAR_4[0] = VAR_1->EvalMap.Map1Index.u1;
        VAR_4[1] = VAR_1->EvalMap.Map1Index.u2;
        break;
     case 144:
        VAR_4[0] = VAR_1->EvalMap.Map1Normal.u1;
        VAR_4[1] = VAR_1->EvalMap.Map1Normal.u2;
        break;
     case 143:
        VAR_4[0] = VAR_1->EvalMap.Map1Texture1.u1;
        VAR_4[1] = VAR_1->EvalMap.Map1Texture1.u2;
        break;
     case 142:
        VAR_4[0] = VAR_1->EvalMap.Map1Texture2.u1;
        VAR_4[1] = VAR_1->EvalMap.Map1Texture2.u2;
        break;
     case 141:
        VAR_4[0] = VAR_1->EvalMap.Map1Texture3.u1;
        VAR_4[1] = VAR_1->EvalMap.Map1Texture3.u2;
        break;
     case 140:
        VAR_4[0] = VAR_1->EvalMap.Map1Texture4.u1;
        VAR_4[1] = VAR_1->EvalMap.Map1Texture4.u2;
        break;
     case 139:
        VAR_4[0] = VAR_1->EvalMap.Map1Vertex3.u1;
        VAR_4[1] = VAR_1->EvalMap.Map1Vertex3.u2;
        break;
     case 138:
        VAR_4[0] = VAR_1->EvalMap.Map1Vertex4.u1;
        VAR_4[1] = VAR_1->EvalMap.Map1Vertex4.u2;
        break;
     case 137:
        VAR_4[0] = VAR_1->EvalMap.Map2Color4.u1;
        VAR_4[1] = VAR_1->EvalMap.Map2Color4.u2;
        VAR_4[2] = VAR_1->EvalMap.Map2Color4.v1;
        VAR_4[3] = VAR_1->EvalMap.Map2Color4.v2;
        break;
     case 136:
        VAR_4[0] = VAR_1->EvalMap.Map2Index.u1;
        VAR_4[1] = VAR_1->EvalMap.Map2Index.u2;
        VAR_4[2] = VAR_1->EvalMap.Map2Index.v1;
        VAR_4[3] = VAR_1->EvalMap.Map2Index.v2;
        break;
     case 135:
        VAR_4[0] = VAR_1->EvalMap.Map2Normal.u1;
        VAR_4[1] = VAR_1->EvalMap.Map2Normal.u2;
        VAR_4[2] = VAR_1->EvalMap.Map2Normal.v1;
        VAR_4[3] = VAR_1->EvalMap.Map2Normal.v2;
        break;
     case 134:
        VAR_4[0] = VAR_1->EvalMap.Map2Texture1.u1;
        VAR_4[1] = VAR_1->EvalMap.Map2Texture1.u2;
        VAR_4[2] = VAR_1->EvalMap.Map2Texture1.v1;
        VAR_4[3] = VAR_1->EvalMap.Map2Texture1.v2;
        break;
     case 133:
        VAR_4[0] = VAR_1->EvalMap.Map2Texture2.u1;
        VAR_4[1] = VAR_1->EvalMap.Map2Texture2.u2;
        VAR_4[2] = VAR_1->EvalMap.Map2Texture2.v1;
        VAR_4[3] = VAR_1->EvalMap.Map2Texture2.v2;
        break;
     case 132:
        VAR_4[0] = VAR_1->EvalMap.Map2Texture3.u1;
        VAR_4[1] = VAR_1->EvalMap.Map2Texture3.u2;
        VAR_4[2] = VAR_1->EvalMap.Map2Texture3.v1;
        VAR_4[3] = VAR_1->EvalMap.Map2Texture3.v2;
        break;
     case 131:
        VAR_4[0] = VAR_1->EvalMap.Map2Texture4.u1;
        VAR_4[1] = VAR_1->EvalMap.Map2Texture4.u2;
        VAR_4[2] = VAR_1->EvalMap.Map2Texture4.v1;
        VAR_4[3] = VAR_1->EvalMap.Map2Texture4.v2;
        break;
     case 130:
        VAR_4[0] = VAR_1->EvalMap.Map2Vertex3.u1;
        VAR_4[1] = VAR_1->EvalMap.Map2Vertex3.u2;
        VAR_4[2] = VAR_1->EvalMap.Map2Vertex3.v1;
        VAR_4[3] = VAR_1->EvalMap.Map2Vertex3.v2;
        break;
     case 129:
        VAR_4[0] = VAR_1->EvalMap.Map2Vertex4.u1;
        VAR_4[1] = VAR_1->EvalMap.Map2Vertex4.u2;
        VAR_4[2] = VAR_1->EvalMap.Map2Vertex4.v1;
        VAR_4[3] = VAR_1->EvalMap.Map2Vertex4.v2;
        break;
     default:
        FUNC_0( VAR_1, VAR_0, "glGetMapfv(target)" );
  }
         break;
      default:
         FUNC_0( VAR_1, VAR_0, "glGetMapfv(query)" );
   }
}
