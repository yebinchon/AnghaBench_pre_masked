
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_32__ {int SmoothFlag; } ;
struct TYPE_31__ {int Normalize; int * ClipEnabled; } ;
struct TYPE_30__ {int Map2Vertex4; int Map2Vertex3; int Map2TextureCoord4; int Map2TextureCoord3; int Map2TextureCoord2; int Map2TextureCoord1; int Map2Normal; int Map2Index; int Map2Color4; int Map1Vertex4; int Map1Vertex3; int Map1TextureCoord4; int Map1TextureCoord3; int Map1TextureCoord2; int Map1TextureCoord1; int Map1Normal; int Map1Index; int Map1Color4; int AutoNormal; } ;
struct TYPE_29__ {int ColorLogicOpEnabled; int IndexLogicOpEnabled; int DitherFlag; int BlendEnabled; int AlphaEnabled; } ;
struct TYPE_28__ {int StippleFlag; int SmoothFlag; } ;
struct TYPE_27__ {TYPE_3__* Light; int Enabled; int ColorMaterialEnabled; } ;
struct TYPE_26__ {int Enabled; } ;
struct TYPE_25__ {int Enabled; } ;
struct TYPE_24__ {int Test; } ;
struct TYPE_22__ {int EdgeFlagEnabled; int TexCoordEnabled; int IndexEnabled; int ColorEnabled; int NormalEnabled; int VertexEnabled; } ;
struct TYPE_21__ {int Enabled; int TexGenEnabled; } ;
struct TYPE_20__ {int Enabled; } ;
struct TYPE_19__ {int Enabled; } ;
struct TYPE_18__ {int OffsetFill; int OffsetLine; int OffsetPoint; int StippleFlag; int SmoothFlag; int CullFlag; } ;
struct TYPE_23__ {TYPE_14__ Array; TYPE_13__ Texture; TYPE_12__ Stencil; TYPE_11__ Scissor; TYPE_10__ Polygon; TYPE_9__ Point; TYPE_8__ Transform; TYPE_7__ Eval; TYPE_6__ Color; TYPE_5__ Line; TYPE_4__ Light; TYPE_2__ Fog; TYPE_1__ Depth; } ;
typedef int GLenum ;
typedef TYPE_15__ GLcontext ;
typedef int GLboolean ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_15__*,int ,char*) ;

GLboolean FUNC_1( GLcontext* VAR_9, GLenum VAR_10 )
{
   switch (VAR_10) {
      case 193:
         return VAR_9->Color.AlphaEnabled;
      case 192:
  return VAR_9->Eval.AutoNormal;
      case 191:
         return VAR_9->Color.BlendEnabled;
      case 190:
      case 189:
      case 188:
      case 187:
      case 186:
      case 185:
  return VAR_9->Transform.ClipEnabled[VAR_10-190];
      case 182:
  return VAR_9->Light.ColorMaterialEnabled;
      case 181:
         return VAR_9->Polygon.CullFlag;
      case 180:
         return VAR_9->Depth.Test;
      case 179:
  return VAR_9->Color.DitherFlag;
      case 177:
  return VAR_9->Fog.Enabled;
      case 166:
         return VAR_9->Light.Enabled;
      case 174:
      case 173:
      case 172:
      case 171:
      case 170:
      case 169:
      case 168:
      case 167:
         return VAR_9->Light.Light[VAR_10-174].Enabled;
      case 165:
  return VAR_9->Line.SmoothFlag;
      case 164:
  return VAR_9->Line.StippleFlag;
      case 175:
  return VAR_9->Color.IndexLogicOpEnabled;
      case 183:
  return VAR_9->Color.ColorLogicOpEnabled;
      case 163:
  return VAR_9->Eval.Map1Color4;
      case 162:
  return VAR_9->Eval.Map1Index;
      case 161:
  return VAR_9->Eval.Map1Normal;
      case 160:
  return VAR_9->Eval.Map1TextureCoord1;
      case 159:
  return VAR_9->Eval.Map1TextureCoord2;
      case 158:
  return VAR_9->Eval.Map1TextureCoord3;
      case 157:
  return VAR_9->Eval.Map1TextureCoord4;
      case 156:
  return VAR_9->Eval.Map1Vertex3;
      case 155:
  return VAR_9->Eval.Map1Vertex4;
      case 154:
  return VAR_9->Eval.Map2Color4;
      case 153:
  return VAR_9->Eval.Map2Index;
      case 152:
  return VAR_9->Eval.Map2Normal;
      case 151:
  return VAR_9->Eval.Map2TextureCoord1;
      case 150:
  return VAR_9->Eval.Map2TextureCoord2;
      case 149:
  return VAR_9->Eval.Map2TextureCoord3;
      case 148:
  return VAR_9->Eval.Map2TextureCoord4;
      case 147:
  return VAR_9->Eval.Map2Vertex3;
      case 146:
  return VAR_9->Eval.Map2Vertex4;
      case 145:
  return VAR_9->Transform.Normalize;
      case 143:
  return VAR_9->Point.SmoothFlag;
      case 139:
  return VAR_9->Polygon.SmoothFlag;
      case 138:
  return VAR_9->Polygon.StippleFlag;
      case 140:
  return VAR_9->Polygon.OffsetPoint;
      case 141:
  return VAR_9->Polygon.OffsetLine;
      case 142:

  return VAR_9->Polygon.OffsetFill;
      case 137:
  return VAR_9->Scissor.Enabled;
      case 136:
  return VAR_9->Stencil.Enabled;
      case 135:
  return (VAR_9->Texture.Enabled & VAR_6) ? VAR_2 : VAR_0;
      case 134:
  return (VAR_9->Texture.Enabled & VAR_7) ? VAR_2 : VAR_0;
      case 132:
  return (VAR_9->Texture.TexGenEnabled & VAR_3) ? VAR_2 : VAR_0;
      case 131:
  return (VAR_9->Texture.TexGenEnabled & VAR_4) ? VAR_2 : VAR_0;
      case 130:
  return (VAR_9->Texture.TexGenEnabled & VAR_5) ? VAR_2 : VAR_0;
      case 129:
  return (VAR_9->Texture.TexGenEnabled & VAR_8) ? VAR_2 : VAR_0;




      case 128:
         return VAR_9->Array.VertexEnabled;
      case 144:
         return VAR_9->Array.NormalEnabled;
      case 184:
         return VAR_9->Array.ColorEnabled;
      case 176:
         return VAR_9->Array.IndexEnabled;
      case 133:
         return VAR_9->Array.TexCoordEnabled;
      case 178:
         return VAR_9->Array.EdgeFlagEnabled;
      default:
  FUNC_0( VAR_9, VAR_1, "glIsEnabled" );
  return VAR_0;
   }
}
