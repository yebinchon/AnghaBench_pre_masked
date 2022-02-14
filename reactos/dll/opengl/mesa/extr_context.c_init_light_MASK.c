
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_light {double SpotExponent; double SpotCutoff; double CosCutoff; double ConstantAttenuation; double LinearAttenuation; double QuadraticAttenuation; int Enabled; int Direction; int Position; int Specular; int Diffuse; int Ambient; } ;
typedef scalar_t__ GLuint ;


 int FUNC_0 (int ,double,double,double) ;
 int FUNC_1 (int ,double,double,double,double) ;
 int VAR_0 ;
 int FUNC_2 (struct gl_light*) ;

__attribute__((used)) static void FUNC_3( struct gl_light *VAR_1, GLuint VAR_2 )
{
   FUNC_1( VAR_1->Ambient, 0.0, 0.0, 0.0, 1.0 );
   if (VAR_2==0) {
      FUNC_1( VAR_1->Diffuse, 1.0, 1.0, 1.0, 1.0 );
      FUNC_1( VAR_1->Specular, 1.0, 1.0, 1.0, 1.0 );
   }
   else {
      FUNC_1( VAR_1->Diffuse, 0.0, 0.0, 0.0, 1.0 );
      FUNC_1( VAR_1->Specular, 0.0, 0.0, 0.0, 1.0 );
   }
   FUNC_1( VAR_1->Position, 0.0, 0.0, 1.0, 0.0 );
   FUNC_0( VAR_1->Direction, 0.0, 0.0, -1.0 );
   VAR_1->SpotExponent = 0.0;
   FUNC_2( VAR_1 );
   VAR_1->SpotCutoff = 180.0;
   VAR_1->CosCutoff = -1.0;
   VAR_1->ConstantAttenuation = 1.0;
   VAR_1->LinearAttenuation = 0.0;
   VAR_1->QuadraticAttenuation = 0.0;
   VAR_1->Enabled = VAR_0;
}
