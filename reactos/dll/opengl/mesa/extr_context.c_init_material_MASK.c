
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_material {double Shininess; int DiffuseIndex; int SpecularIndex; scalar_t__ AmbientIndex; int Emission; int Specular; int Diffuse; int Ambient; } ;


 int FUNC_0 (int ,float,float,float,float) ;
 int FUNC_1 (struct gl_material*) ;

__attribute__((used)) static void FUNC_2( struct gl_material *VAR_0 )
{
   FUNC_0( VAR_0->Ambient, 0.2f, 0.2f, 0.2f, 1.0f );
   FUNC_0( VAR_0->Diffuse, 0.8f, 0.8f, 0.8f, 1.0f );
   FUNC_0( VAR_0->Specular, 0.0f, 0.0f, 0.0f, 1.0f );
   FUNC_0( VAR_0->Emission, 0.0f, 0.0f, 0.0f, 1.0f );
   VAR_0->Shininess = 0.0;
   VAR_0->AmbientIndex = 0;
   VAR_0->DiffuseIndex = 1;
   VAR_0->SpecularIndex = 1;
   FUNC_1( VAR_0 );
}
