
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* Material; } ;
struct TYPE_9__ {TYPE_2__ Light; } ;
struct TYPE_7__ {int SpecularIndex; int DiffuseIndex; int AmbientIndex; int Shininess; int * Emission; int * Specular; int * Diffuse; int * Ambient; } ;
typedef size_t GLuint ;
typedef int GLint ;
typedef scalar_t__ GLenum ;
typedef TYPE_3__ GLcontext ;


 int FUNC_0 (int ) ;

 scalar_t__ VAR_0 ;



 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;

void FUNC_4( GLcontext *VAR_4,
                       GLenum VAR_5, GLenum VAR_6, GLint *VAR_7 )
{
   GLuint VAR_8;

   if (FUNC_1(VAR_4)) {
      FUNC_3( VAR_4, VAR_3, "glGetMaterialiv" );
      return;
   }
   if (VAR_5==VAR_1) {
      VAR_8 = 0;
   }
   else if (VAR_5==VAR_0) {
      VAR_8 = 1;
   }
   else {
      FUNC_3( VAR_4, VAR_2, "glGetMaterialiv(face)" );
      return;
   }
   switch (VAR_6) {
      case 133:
         VAR_7[0] = FUNC_0( VAR_4->Light.Material[VAR_8].Ambient[0] );
         VAR_7[1] = FUNC_0( VAR_4->Light.Material[VAR_8].Ambient[1] );
         VAR_7[2] = FUNC_0( VAR_4->Light.Material[VAR_8].Ambient[2] );
         VAR_7[3] = FUNC_0( VAR_4->Light.Material[VAR_8].Ambient[3] );
         break;
      case 131:
         VAR_7[0] = FUNC_0( VAR_4->Light.Material[VAR_8].Diffuse[0] );
         VAR_7[1] = FUNC_0( VAR_4->Light.Material[VAR_8].Diffuse[1] );
         VAR_7[2] = FUNC_0( VAR_4->Light.Material[VAR_8].Diffuse[2] );
         VAR_7[3] = FUNC_0( VAR_4->Light.Material[VAR_8].Diffuse[3] );
  break;
      case 128:
         VAR_7[0] = FUNC_0( VAR_4->Light.Material[VAR_8].Specular[0] );
         VAR_7[1] = FUNC_0( VAR_4->Light.Material[VAR_8].Specular[1] );
         VAR_7[2] = FUNC_0( VAR_4->Light.Material[VAR_8].Specular[2] );
         VAR_7[3] = FUNC_0( VAR_4->Light.Material[VAR_8].Specular[3] );
  break;
      case 130:
         VAR_7[0] = FUNC_0( VAR_4->Light.Material[VAR_8].Emission[0] );
         VAR_7[1] = FUNC_0( VAR_4->Light.Material[VAR_8].Emission[1] );
         VAR_7[2] = FUNC_0( VAR_4->Light.Material[VAR_8].Emission[2] );
         VAR_7[3] = FUNC_0( VAR_4->Light.Material[VAR_8].Emission[3] );
  break;
      case 129:
         *VAR_7 = FUNC_2( VAR_4->Light.Material[VAR_8].Shininess );
  break;
      case 132:
  VAR_7[0] = FUNC_2( VAR_4->Light.Material[VAR_8].AmbientIndex );
  VAR_7[1] = FUNC_2( VAR_4->Light.Material[VAR_8].DiffuseIndex );
  VAR_7[2] = FUNC_2( VAR_4->Light.Material[VAR_8].SpecularIndex );
  break;
      default:
         FUNC_3( VAR_4, VAR_2, "glGetMaterialfv(pname)" );
   }
}
