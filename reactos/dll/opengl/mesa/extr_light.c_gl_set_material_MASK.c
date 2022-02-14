
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vertex_buffer {size_t Count; int* MaterialMask; int MonoMaterial; struct gl_material** Material; } ;
struct gl_material {scalar_t__ Shininess; scalar_t__ AmbientIndex; scalar_t__ DiffuseIndex; scalar_t__ SpecularIndex; int Emission; int Specular; int Diffuse; int Ambient; } ;
struct TYPE_5__ {struct gl_material* Material; } ;
struct TYPE_6__ {int NewState; TYPE_1__ Light; struct vertex_buffer* VB; } ;
typedef int GLuint ;
typedef scalar_t__ GLfloat ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__ const,float,float) ;
 int FUNC_1 (int ,scalar_t__ const*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int VAR_13 ;
 int FUNC_3 (struct gl_material*) ;

void FUNC_4( GLcontext *VAR_14, GLuint VAR_15, const GLfloat *VAR_16 )
{
   struct gl_material *VAR_17;

   if (FUNC_2(VAR_14)) {
      struct vertex_buffer *VAR_18 = VAR_14->VB;




      VAR_17 = VAR_18->Material[VAR_18->Count];
      VAR_18->MaterialMask[VAR_18->Count] |= VAR_15;
      VAR_18->MonoMaterial = VAR_12;
   }
   else {

      VAR_17 = VAR_14->Light.Material;
      VAR_14->NewState |= VAR_13;
   }

   if (VAR_15 & VAR_6) {
      FUNC_1( VAR_17[0].Ambient, VAR_16 );
   }
   if (VAR_15 & VAR_0) {
      FUNC_1( VAR_17[1].Ambient, VAR_16 );
   }
   if (VAR_15 & VAR_7) {
      FUNC_1( VAR_17[0].Diffuse, VAR_16 );
   }
   if (VAR_15 & VAR_1) {
      FUNC_1( VAR_17[1].Diffuse, VAR_16 );
   }
   if (VAR_15 & VAR_11) {
      FUNC_1( VAR_17[0].Specular, VAR_16 );
   }
   if (VAR_15 & VAR_5) {
      FUNC_1( VAR_17[1].Specular, VAR_16 );
   }
   if (VAR_15 & VAR_8) {
      FUNC_1( VAR_17[0].Emission, VAR_16 );
   }
   if (VAR_15 & VAR_2) {
      FUNC_1( VAR_17[1].Emission, VAR_16 );
   }
   if (VAR_15 & VAR_10) {
      GLfloat VAR_19 = FUNC_0( VAR_16[0], 0.0F, 128.0F );
      if (VAR_17[0].Shininess != VAR_19) {
         VAR_17[0].Shininess = VAR_19;
         FUNC_3( &VAR_17[0] );
      }
   }
   if (VAR_15 & VAR_4) {
      GLfloat VAR_20 = FUNC_0( VAR_16[0], 0.0F, 128.0F );
      if (VAR_17[1].Shininess != VAR_20) {
         VAR_17[1].Shininess = VAR_20;
         FUNC_3( &VAR_17[1] );
      }
   }
   if (VAR_15 & VAR_9) {
      VAR_17[0].AmbientIndex = VAR_16[0];
      VAR_17[0].DiffuseIndex = VAR_16[1];
      VAR_17[0].SpecularIndex = VAR_16[2];
   }
   if (VAR_15 & VAR_3) {
      VAR_17[1].AmbientIndex = VAR_16[0];
      VAR_17[1].DiffuseIndex = VAR_16[1];
      VAR_17[1].SpecularIndex = VAR_16[2];
   }
}
