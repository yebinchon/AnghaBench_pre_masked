
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* Light; } ;
struct TYPE_8__ {TYPE_2__ Light; } ;
struct TYPE_6__ {int QuadraticAttenuation; int LinearAttenuation; int ConstantAttenuation; int SpotCutoff; int SpotExponent; int Direction; int Position; int Specular; int Diffuse; int Ambient; } ;
typedef scalar_t__ GLint ;
typedef int GLfloat ;
typedef int GLenum ;
typedef TYPE_3__ GLcontext ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;



 int VAR_0 ;
 int VAR_1 ;







 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;

void FUNC_3( GLcontext *VAR_3,
                    GLenum VAR_4, GLenum VAR_5, GLfloat *VAR_6 )
{
   GLint VAR_7 = (GLint) (VAR_4 - VAR_1);

   if (VAR_7<0 || VAR_7>=VAR_2) {
      FUNC_2( VAR_3, VAR_0, "glGetLightfv" );
      return;
   }

   switch (VAR_5) {
      case 137:
         FUNC_1( VAR_6, VAR_3->Light.Light[VAR_7].Ambient );
         break;
      case 135:
         FUNC_1( VAR_6, VAR_3->Light.Light[VAR_7].Diffuse );
         break;
      case 131:
         FUNC_1( VAR_6, VAR_3->Light.Light[VAR_7].Specular );
         break;
      case 133:
         FUNC_1( VAR_6, VAR_3->Light.Light[VAR_7].Position );
         break;
      case 129:
         FUNC_0( VAR_6, VAR_3->Light.Light[VAR_7].Direction );
         break;
      case 128:
         VAR_6[0] = VAR_3->Light.Light[VAR_7].SpotExponent;
         break;
      case 130:
         VAR_6[0] = VAR_3->Light.Light[VAR_7].SpotCutoff;
         break;
      case 136:
         VAR_6[0] = VAR_3->Light.Light[VAR_7].ConstantAttenuation;
         break;
      case 134:
         VAR_6[0] = VAR_3->Light.Light[VAR_7].LinearAttenuation;
         break;
      case 132:
         VAR_6[0] = VAR_3->Light.Light[VAR_7].QuadraticAttenuation;
         break;
      default:
         FUNC_2( VAR_3, VAR_0, "glGetLightfv" );
         break;
   }
}
