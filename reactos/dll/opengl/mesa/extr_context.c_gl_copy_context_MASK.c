
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


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
struct gl_depthbuffer_attrib {int dummy; } ;
struct gl_current_attrib {int dummy; } ;
struct gl_colorbuffer_attrib {int dummy; } ;
struct gl_accum_attrib {int dummy; } ;
struct TYPE_4__ {int Viewport; int Transform; int Texture; int Stencil; int Scissor; int * PolygonStipple; int Polygon; int Point; int Pixel; int List; int Line; int Light; int Hint; int Fog; int Eval; int Depth; int Current; int Color; int Accum; } ;
typedef int GLuint ;
typedef TYPE_1__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int *,int *,int) ;

void FUNC_1( const GLcontext *VAR_20, GLcontext *VAR_21, GLuint VAR_22 )
{
   if (VAR_22 & VAR_0) {
      FUNC_0( &VAR_21->Accum, &VAR_20->Accum, sizeof(struct gl_accum_attrib) );
   }
   if (VAR_22 & VAR_1) {
      FUNC_0( &VAR_21->Color, &VAR_20->Color, sizeof(struct gl_colorbuffer_attrib) );
   }
   if (VAR_22 & VAR_2) {
      FUNC_0( &VAR_21->Current, &VAR_20->Current, sizeof(struct gl_current_attrib) );
   }
   if (VAR_22 & VAR_3) {
      FUNC_0( &VAR_21->Depth, &VAR_20->Depth, sizeof(struct gl_depthbuffer_attrib) );
   }
   if (VAR_22 & VAR_4) {

   }
   if (VAR_22 & VAR_5) {
      FUNC_0( &VAR_21->Eval, &VAR_20->Eval, sizeof(struct gl_eval_attrib) );
   }
   if (VAR_22 & VAR_6) {
      FUNC_0( &VAR_21->Fog, &VAR_20->Fog, sizeof(struct gl_fog_attrib) );
   }
   if (VAR_22 & VAR_7) {
      FUNC_0( &VAR_21->Hint, &VAR_20->Hint, sizeof(struct gl_hint_attrib) );
   }
   if (VAR_22 & VAR_8) {
      FUNC_0( &VAR_21->Light, &VAR_20->Light, sizeof(struct gl_light_attrib) );
   }
   if (VAR_22 & VAR_9) {
      FUNC_0( &VAR_21->Line, &VAR_20->Line, sizeof(struct gl_line_attrib) );
   }
   if (VAR_22 & VAR_10) {
      FUNC_0( &VAR_21->List, &VAR_20->List, sizeof(struct gl_list_attrib) );
   }
   if (VAR_22 & VAR_11) {
      FUNC_0( &VAR_21->Pixel, &VAR_20->Pixel, sizeof(struct gl_pixel_attrib) );
   }
   if (VAR_22 & VAR_12) {
      FUNC_0( &VAR_21->Point, &VAR_20->Point, sizeof(struct gl_point_attrib) );
   }
   if (VAR_22 & VAR_13) {
      FUNC_0( &VAR_21->Polygon, &VAR_20->Polygon, sizeof(struct gl_polygon_attrib) );
   }
   if (VAR_22 & VAR_14) {



      int VAR_23;
      for (VAR_23=0;VAR_23<32;VAR_23++) {
         VAR_21->PolygonStipple[VAR_23] = VAR_20->PolygonStipple[VAR_23];
      }
   }
   if (VAR_22 & VAR_15) {
      FUNC_0( &VAR_21->Scissor, &VAR_20->Scissor, sizeof(struct gl_scissor_attrib) );
   }
   if (VAR_22 & VAR_16) {
      FUNC_0( &VAR_21->Stencil, &VAR_20->Stencil, sizeof(struct gl_stencil_attrib) );
   }
   if (VAR_22 & VAR_17) {
      FUNC_0( &VAR_21->Texture, &VAR_20->Texture, sizeof(struct gl_texture_attrib) );
   }
   if (VAR_22 & VAR_18) {
      FUNC_0( &VAR_21->Transform, &VAR_20->Transform, sizeof(struct gl_transform_attrib) );
   }
   if (VAR_22 & VAR_19) {
      FUNC_0( &VAR_21->Viewport, &VAR_20->Viewport, sizeof(struct gl_viewport_attrib) );
   }
}
