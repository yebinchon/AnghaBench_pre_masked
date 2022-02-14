
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct gl_viewport_attrib {int dummy; } ;
struct gl_transform_attrib {int dummy; } ;
struct gl_texture_attrib {int dummy; } ;
struct gl_stencil_attrib {int dummy; } ;
struct gl_scissor_attrib {int dummy; } ;
struct gl_polygon_attrib {int dummy; } ;
struct gl_point_attrib {int dummy; } ;
struct gl_pixel_attrib {int dummy; } ;
struct gl_list_attrib {int dummy; } ;
struct gl_line_attrib {int dummy; } ;
struct gl_light_attrib {int dummy; } ;
struct gl_hint_attrib {int dummy; } ;
struct gl_fog_attrib {int dummy; } ;
struct gl_eval_attrib {int dummy; } ;
struct gl_enable_attrib {int TexGen; int Texture; int Stencil; int Scissor; int PolygonStipple; int PolygonSmooth; int PolygonOffsetFill; int PolygonOffsetLine; int PolygonOffsetPoint; int PointSmooth; int Normalize; int Map2Vertex4; int Map2Vertex3; int Map2TextureCoord4; int Map2TextureCoord3; int Map2TextureCoord2; int Map2TextureCoord1; int Map2Normal; int Map2Index; int Map2Color4; int Map1Vertex4; int Map1Vertex3; int Map1TextureCoord4; int Map1TextureCoord3; int Map1TextureCoord2; int Map1TextureCoord1; int Map1Normal; int Map1Index; int Map1Color4; int ColorLogicOp; int IndexLogicOp; int LineStipple; int LineSmooth; int Lighting; int Fog; int Dither; int DepthTest; int CullFace; int ColorMaterial; int * ClipPlane; int Blend; int AutoNormal; int AlphaTest; } ;
struct gl_depthbuffer_attrib {int dummy; } ;
struct gl_current_attrib {int dummy; } ;
struct gl_colorbuffer_attrib {int dummy; } ;
struct gl_attrib_node {int kind; scalar_t__ data; struct gl_attrib_node* next; } ;
struct gl_accum_attrib {int dummy; } ;
struct TYPE_9__ {size_t DrawBuffer; int OffsetAny; int TexGenEnabled; int Enabled; int StippleFlag; int SmoothFlag; int OffsetFill; int OffsetLine; int OffsetPoint; int Normalize; int Map2Vertex4; int Map2Vertex3; int Map2TextureCoord4; int Map2TextureCoord3; int Map2TextureCoord2; int Map2TextureCoord1; int Map2Normal; int Map2Index; int Map2Color4; int Map1Vertex4; int Map1Vertex3; int Map1TextureCoord4; int Map1TextureCoord3; int Map1TextureCoord2; int Map1TextureCoord1; int Map1Normal; int Map1Index; int Map1Color4; int ColorLogicOpEnabled; int IndexLogicOpEnabled; int DitherFlag; int Test; int CullFlag; int ColorMaterialEnabled; int * ClipEnabled; int BlendEnabled; int AlphaEnabled; } ;
struct TYPE_8__ {size_t AttribStackDepth; int NewState; TYPE_6__ Viewport; TYPE_6__ Texture; TYPE_6__ Transform; TYPE_6__ Stencil; TYPE_6__ Scissor; TYPE_6__* PolygonStipple; TYPE_6__ Polygon; TYPE_6__ Point; TYPE_6__ Pixel; TYPE_6__ List; TYPE_6__ Line; TYPE_6__ Light; TYPE_6__ Hint; TYPE_6__ Fog; TYPE_6__ Eval; TYPE_6__ Color; TYPE_6__ Depth; TYPE_6__ Current; TYPE_6__ Accum; struct gl_attrib_node** AttribStack; } ;
typedef size_t GLuint ;
typedef TYPE_1__ GLcontext ;
 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ FUNC_0 (TYPE_1__*) ;
 size_t VAR_2 ;
 int FUNC_1 (TYPE_6__*,scalar_t__,int) ;
 int VAR_3 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (TYPE_1__*,size_t) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;

void FUNC_6( GLcontext* VAR_4 )
{
   struct gl_attrib_node *VAR_5, *VAR_6;
   struct gl_enable_attrib *VAR_7;
   GLuint VAR_8, VAR_9;

   if (FUNC_0(VAR_4)) {
      FUNC_4( VAR_4, VAR_0, "glPopAttrib" );
      return;
   }

   if (VAR_4->AttribStackDepth==0) {
      FUNC_4( VAR_4, VAR_1, "glPopAttrib" );
      return;
   }

   VAR_4->AttribStackDepth--;
   VAR_5 = VAR_4->AttribStack[VAR_4->AttribStackDepth];

   while (VAR_5) {
      switch (VAR_5->kind) {
         case 147:
            FUNC_1( &VAR_4->Accum, VAR_5->data, sizeof(struct gl_accum_attrib) );
            break;
         case 146:
     VAR_9 = VAR_4->Color.DrawBuffer;
            FUNC_1( &VAR_4->Color, VAR_5->data,
      sizeof(struct gl_colorbuffer_attrib) );
     if (VAR_4->Color.DrawBuffer != VAR_9) {
        FUNC_3(VAR_4, VAR_4->Color.DrawBuffer);
            }
            break;
         case 145:
            FUNC_1( &VAR_4->Current, VAR_5->data,
      sizeof(struct gl_current_attrib) );
            break;
         case 144:
            FUNC_1( &VAR_4->Depth, VAR_5->data,
      sizeof(struct gl_depthbuffer_attrib) );
            break;
         case 143:
            VAR_7 = (struct gl_enable_attrib *) VAR_5->data;
            VAR_4->Color.AlphaEnabled = VAR_7->AlphaTest;
            VAR_4->Transform.Normalize = VAR_7->AutoNormal;
            VAR_4->Color.BlendEnabled = VAR_7->Blend;
     for (VAR_8=0;VAR_8<VAR_2;VAR_8++) {
               VAR_4->Transform.ClipEnabled[VAR_8] = VAR_7->ClipPlane[VAR_8];
     }
     VAR_4->Light.ColorMaterialEnabled = VAR_7->ColorMaterial;
     VAR_4->Polygon.CullFlag = VAR_7->CullFace;
     VAR_4->Depth.Test = VAR_7->DepthTest;
     VAR_4->Color.DitherFlag = VAR_7->Dither;
     VAR_4->Fog.Enabled = VAR_7->Fog;
     VAR_4->Light.Enabled = VAR_7->Lighting;
     VAR_4->Line.SmoothFlag = VAR_7->LineSmooth;
     VAR_4->Line.StippleFlag = VAR_7->LineStipple;
     VAR_4->Color.IndexLogicOpEnabled = VAR_7->IndexLogicOp;
     VAR_4->Color.ColorLogicOpEnabled = VAR_7->ColorLogicOp;
     VAR_4->Eval.Map1Color4 = VAR_7->Map1Color4;
     VAR_4->Eval.Map1Index = VAR_7->Map1Index;
     VAR_4->Eval.Map1Normal = VAR_7->Map1Normal;
     VAR_4->Eval.Map1TextureCoord1 = VAR_7->Map1TextureCoord1;
     VAR_4->Eval.Map1TextureCoord2 = VAR_7->Map1TextureCoord2;
     VAR_4->Eval.Map1TextureCoord3 = VAR_7->Map1TextureCoord3;
     VAR_4->Eval.Map1TextureCoord4 = VAR_7->Map1TextureCoord4;
     VAR_4->Eval.Map1Vertex3 = VAR_7->Map1Vertex3;
     VAR_4->Eval.Map1Vertex4 = VAR_7->Map1Vertex4;
     VAR_4->Eval.Map2Color4 = VAR_7->Map2Color4;
     VAR_4->Eval.Map2Index = VAR_7->Map2Index;
     VAR_4->Eval.Map2Normal = VAR_7->Map2Normal;
     VAR_4->Eval.Map2TextureCoord1 = VAR_7->Map2TextureCoord1;
     VAR_4->Eval.Map2TextureCoord2 = VAR_7->Map2TextureCoord2;
     VAR_4->Eval.Map2TextureCoord3 = VAR_7->Map2TextureCoord3;
     VAR_4->Eval.Map2TextureCoord4 = VAR_7->Map2TextureCoord4;
     VAR_4->Eval.Map2Vertex3 = VAR_7->Map2Vertex3;
     VAR_4->Eval.Map2Vertex4 = VAR_7->Map2Vertex4;
     VAR_4->Transform.Normalize = VAR_7->Normalize;
     VAR_4->Point.SmoothFlag = VAR_7->PointSmooth;
     VAR_4->Polygon.OffsetPoint = VAR_7->PolygonOffsetPoint;
     VAR_4->Polygon.OffsetLine = VAR_7->PolygonOffsetLine;
     VAR_4->Polygon.OffsetFill = VAR_7->PolygonOffsetFill;
            VAR_4->Polygon.OffsetAny = VAR_4->Polygon.OffsetPoint ||
                                     VAR_4->Polygon.OffsetLine ||
                                     VAR_4->Polygon.OffsetFill;
     VAR_4->Polygon.SmoothFlag = VAR_7->PolygonSmooth;
     VAR_4->Polygon.StippleFlag = VAR_7->PolygonStipple;
     VAR_4->Scissor.Enabled = VAR_7->Scissor;
     VAR_4->Stencil.Enabled = VAR_7->Stencil;
     VAR_4->Texture.Enabled = VAR_7->Texture;
     VAR_4->Texture.TexGenEnabled = VAR_7->TexGen;
            break;
         case 142:
            FUNC_1( &VAR_4->Eval, VAR_5->data, sizeof(struct gl_eval_attrib) );
            break;
         case 141:
            FUNC_1( &VAR_4->Fog, VAR_5->data, sizeof(struct gl_fog_attrib) );
            break;
         case 140:
            FUNC_1( &VAR_4->Hint, VAR_5->data, sizeof(struct gl_hint_attrib) );
            break;
         case 139:
            FUNC_1( &VAR_4->Light, VAR_5->data, sizeof(struct gl_light_attrib) );
            break;
         case 138:
            FUNC_1( &VAR_4->Line, VAR_5->data, sizeof(struct gl_line_attrib) );
            break;
         case 137:
            FUNC_1( &VAR_4->List, VAR_5->data, sizeof(struct gl_list_attrib) );
            break;
         case 136:
            FUNC_1( &VAR_4->Pixel, VAR_5->data, sizeof(struct gl_pixel_attrib) );
            break;
         case 135:
            FUNC_1( &VAR_4->Point, VAR_5->data, sizeof(struct gl_point_attrib) );
            break;
         case 134:
            FUNC_1( &VAR_4->Polygon, VAR_5->data,
      sizeof(struct gl_polygon_attrib) );
            break;
  case 133:
     FUNC_1( VAR_4->PolygonStipple, VAR_5->data, 32*sizeof(GLuint) );
     break;
         case 132:
            FUNC_1( &VAR_4->Scissor, VAR_5->data,
      sizeof(struct gl_scissor_attrib) );
            break;
         case 131:
            FUNC_1( &VAR_4->Stencil, VAR_5->data,
      sizeof(struct gl_stencil_attrib) );
            break;
         case 129:
            FUNC_1( &VAR_4->Transform, VAR_5->data,
      sizeof(struct gl_transform_attrib) );
            break;
         case 130:
            FUNC_1( &VAR_4->Texture, VAR_5->data,
      sizeof(struct gl_texture_attrib) );
            break;
         case 128:
            FUNC_1( &VAR_4->Viewport, VAR_5->data,
      sizeof(struct gl_viewport_attrib) );
            break;
         default:
            FUNC_5( VAR_4, "Bad attrib flag in PopAttrib");
            break;
      }

      VAR_6 = VAR_5->next;
      FUNC_2( (void *) VAR_5->data );
      FUNC_2( (void *) VAR_5 );
      VAR_5 = VAR_6;
   }

   VAR_4->NewState = VAR_3;
}
