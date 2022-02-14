
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct gl_2d_map {void* Retain; int * Points; } ;
struct gl_1d_map {void* Retain; int * Points; } ;
struct TYPE_5__ {struct gl_2d_map Map2Texture4; struct gl_2d_map Map2Texture3; struct gl_2d_map Map2Texture2; struct gl_2d_map Map2Texture1; struct gl_2d_map Map2Normal; struct gl_2d_map Map2Color4; struct gl_2d_map Map2Index; struct gl_2d_map Map2Vertex4; struct gl_2d_map Map2Vertex3; struct gl_1d_map Map1Texture4; struct gl_1d_map Map1Texture3; struct gl_1d_map Map1Texture2; struct gl_1d_map Map1Texture1; struct gl_1d_map Map1Normal; struct gl_1d_map Map1Color4; struct gl_1d_map Map1Index; struct gl_1d_map Map1Vertex4; struct gl_1d_map Map1Vertex3; } ;
struct TYPE_6__ {TYPE_1__ EvalMap; } ;
typedef int GLfloat ;
typedef int GLenum ;
typedef TYPE_2__ GLcontext ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

void FUNC_2( GLcontext* VAR_2, GLenum VAR_3, GLfloat *VAR_4 )
{
   struct gl_1d_map *VAR_5 = ((void*)0);
   struct gl_2d_map *VAR_6 = ((void*)0);

   switch (VAR_3) {
      case 138:
         VAR_5 = &VAR_2->EvalMap.Map1Vertex3;
         break;
      case 137:
         VAR_5 = &VAR_2->EvalMap.Map1Vertex4;
  break;
      case 144:
         VAR_5 = &VAR_2->EvalMap.Map1Index;
         break;
      case 145:
         VAR_5 = &VAR_2->EvalMap.Map1Color4;
         break;
      case 143:
         VAR_5 = &VAR_2->EvalMap.Map1Normal;
  break;
      case 142:
         VAR_5 = &VAR_2->EvalMap.Map1Texture1;
  break;
      case 141:
         VAR_5 = &VAR_2->EvalMap.Map1Texture2;
  break;
      case 140:
         VAR_5 = &VAR_2->EvalMap.Map1Texture3;
  break;
      case 139:
         VAR_5 = &VAR_2->EvalMap.Map1Texture4;
  break;
      case 129:
         VAR_6 = &VAR_2->EvalMap.Map2Vertex3;
  break;
      case 128:
         VAR_6 = &VAR_2->EvalMap.Map2Vertex4;
  break;
      case 135:
         VAR_6 = &VAR_2->EvalMap.Map2Index;
  break;
      case 136:
         VAR_6 = &VAR_2->EvalMap.Map2Color4;
         break;
      case 134:
         VAR_6 = &VAR_2->EvalMap.Map2Normal;
  break;
      case 133:
         VAR_6 = &VAR_2->EvalMap.Map2Texture1;
  break;
      case 132:
         VAR_6 = &VAR_2->EvalMap.Map2Texture2;
  break;
      case 131:
         VAR_6 = &VAR_2->EvalMap.Map2Texture3;
  break;
      case 130:
         VAR_6 = &VAR_2->EvalMap.Map2Texture4;
  break;
      default:
  FUNC_1( VAR_2, VAR_1, "gl_free_control_points" );
         return;
   }

   if (VAR_5) {
      if (VAR_4==VAR_5->Points) {


         VAR_5->Retain = VAR_0;
      }
      else {


         FUNC_0( VAR_4 );
      }
   }
   if (VAR_6) {
      if (VAR_4==VAR_6->Points) {


         VAR_6->Retain = VAR_0;
      }
      else {


         FUNC_0( VAR_4 );
      }
   }

}
