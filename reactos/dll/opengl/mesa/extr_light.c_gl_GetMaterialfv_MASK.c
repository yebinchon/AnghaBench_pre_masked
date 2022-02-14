
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* Material; } ;
struct TYPE_9__ {TYPE_2__ Light; } ;
struct TYPE_7__ {int SpecularIndex; int DiffuseIndex; int AmbientIndex; int Shininess; int Emission; int Specular; int Diffuse; int Ambient; } ;
typedef size_t GLuint ;
typedef int GLfloat ;
typedef scalar_t__ GLenum ;
typedef TYPE_3__ GLcontext ;


 int FUNC_0 (int *,int ) ;

 scalar_t__ VAR_0 ;



 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;

void FUNC_3( GLcontext *VAR_4,
                       GLenum VAR_5, GLenum VAR_6, GLfloat *VAR_7 )
{
   GLuint VAR_8;

   if (FUNC_1(VAR_4)) {
      FUNC_2( VAR_4, VAR_3, "glGetMaterialfv" );
      return;
   }
   if (VAR_5==VAR_1) {
      VAR_8 = 0;
   }
   else if (VAR_5==VAR_0) {
      VAR_8 = 1;
   }
   else {
      FUNC_2( VAR_4, VAR_2, "glGetMaterialfv(face)" );
      return;
   }
   switch (VAR_6) {
      case 133:
         FUNC_0( VAR_7, VAR_4->Light.Material[VAR_8].Ambient );
         break;
      case 131:
         FUNC_0( VAR_7, VAR_4->Light.Material[VAR_8].Diffuse );
  break;
      case 128:
         FUNC_0( VAR_7, VAR_4->Light.Material[VAR_8].Specular );
  break;
      case 130:
  FUNC_0( VAR_7, VAR_4->Light.Material[VAR_8].Emission );
  break;
      case 129:
  *VAR_7 = VAR_4->Light.Material[VAR_8].Shininess;
  break;
      case 132:
  VAR_7[0] = VAR_4->Light.Material[VAR_8].AmbientIndex;
  VAR_7[1] = VAR_4->Light.Material[VAR_8].DiffuseIndex;
  VAR_7[2] = VAR_4->Light.Material[VAR_8].SpecularIndex;
  break;
      default:
         FUNC_2( VAR_4, VAR_2, "glGetMaterialfv(pname)" );
   }
}
