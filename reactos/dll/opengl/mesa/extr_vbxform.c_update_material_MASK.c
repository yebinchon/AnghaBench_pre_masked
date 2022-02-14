
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vertex_buffer {int* MaterialMask; TYPE_2__** Material; } ;
struct TYPE_9__ {int SpecularIndex; int DiffuseIndex; int AmbientIndex; int Shininess; int Emission; int Specular; int Diffuse; int Ambient; } ;
struct TYPE_6__ {TYPE_5__* Material; } ;
struct TYPE_8__ {TYPE_1__ Light; struct vertex_buffer* VB; } ;
struct TYPE_7__ {int SpecularIndex; int DiffuseIndex; int AmbientIndex; int Shininess; int Emission; int Specular; int Diffuse; int Ambient; } ;
typedef size_t GLuint ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_2( GLcontext *VAR_12, GLuint VAR_13 )
{
   struct vertex_buffer *VAR_14 = VAR_12->VB;

   if (VAR_14->MaterialMask[VAR_13]) {
      if (VAR_14->MaterialMask[VAR_13] & VAR_6) {
         FUNC_0( VAR_12->Light.Material[0].Ambient, VAR_14->Material[VAR_13][0].Ambient );
      }
      if (VAR_14->MaterialMask[VAR_13] & VAR_0) {
         FUNC_0( VAR_12->Light.Material[1].Ambient, VAR_14->Material[VAR_13][1].Ambient );
      }
      if (VAR_14->MaterialMask[VAR_13] & VAR_7) {
         FUNC_0( VAR_12->Light.Material[0].Diffuse, VAR_14->Material[VAR_13][0].Diffuse );
      }
      if (VAR_14->MaterialMask[VAR_13] & VAR_1) {
         FUNC_0( VAR_12->Light.Material[1].Diffuse, VAR_14->Material[VAR_13][1].Diffuse );
      }
      if (VAR_14->MaterialMask[VAR_13] & VAR_11) {
         FUNC_0( VAR_12->Light.Material[0].Specular, VAR_14->Material[VAR_13][0].Specular );
      }
      if (VAR_14->MaterialMask[VAR_13] & VAR_5) {
         FUNC_0( VAR_12->Light.Material[1].Specular, VAR_14->Material[VAR_13][1].Specular );
      }
      if (VAR_14->MaterialMask[VAR_13] & VAR_8) {
         FUNC_0( VAR_12->Light.Material[0].Emission, VAR_14->Material[VAR_13][0].Emission );
      }
      if (VAR_14->MaterialMask[VAR_13] & VAR_2) {
         FUNC_0( VAR_12->Light.Material[1].Emission, VAR_14->Material[VAR_13][1].Emission );
      }
      if (VAR_14->MaterialMask[VAR_13] & VAR_10) {
         VAR_12->Light.Material[0].Shininess = VAR_14->Material[VAR_13][0].Shininess;
         FUNC_1( &VAR_12->Light.Material[0] );
      }
      if (VAR_14->MaterialMask[VAR_13] & VAR_4) {
         VAR_12->Light.Material[1].Shininess = VAR_14->Material[VAR_13][1].Shininess;
         FUNC_1( &VAR_12->Light.Material[1] );
      }
      if (VAR_14->MaterialMask[VAR_13] & VAR_9) {
         VAR_12->Light.Material[0].AmbientIndex = VAR_14->Material[VAR_13][0].AmbientIndex;
         VAR_12->Light.Material[0].DiffuseIndex = VAR_14->Material[VAR_13][0].DiffuseIndex;
         VAR_12->Light.Material[0].SpecularIndex = VAR_14->Material[VAR_13][0].SpecularIndex;
      }
      if (VAR_14->MaterialMask[VAR_13] & VAR_3) {
         VAR_12->Light.Material[1].AmbientIndex = VAR_14->Material[VAR_13][1].AmbientIndex;
         VAR_12->Light.Material[1].DiffuseIndex = VAR_14->Material[VAR_13][1].DiffuseIndex;
         VAR_12->Light.Material[1].SpecularIndex = VAR_14->Material[VAR_13][1].SpecularIndex;
      }
      VAR_14->MaterialMask[VAR_13] = 0;
   }
}
