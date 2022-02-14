
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* Light; } ;
struct TYPE_8__ {TYPE_2__ Light; } ;
struct TYPE_6__ {scalar_t__* Position; scalar_t__* Direction; scalar_t__ SpotExponent; scalar_t__ SpotCutoff; scalar_t__ ConstantAttenuation; scalar_t__ LinearAttenuation; scalar_t__ QuadraticAttenuation; int * Specular; int * Diffuse; int * Ambient; } ;
typedef scalar_t__ GLint ;
typedef int GLenum ;
typedef TYPE_3__ GLcontext ;


 scalar_t__ FUNC_0 (int ) ;



 int VAR_0 ;
 int VAR_1 ;







 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;

void FUNC_2( GLcontext *VAR_3, GLenum VAR_4, GLenum VAR_5, GLint *VAR_6 )
{
   GLint VAR_7 = (GLint) (VAR_4 - VAR_1);

   if (VAR_7<0 || VAR_7>=VAR_2) {
      FUNC_1( VAR_3, VAR_0, "glGetLightiv" );
      return;
   }

   switch (VAR_5) {
      case 137:
         VAR_6[0] = FUNC_0(VAR_3->Light.Light[VAR_7].Ambient[0]);
         VAR_6[1] = FUNC_0(VAR_3->Light.Light[VAR_7].Ambient[1]);
         VAR_6[2] = FUNC_0(VAR_3->Light.Light[VAR_7].Ambient[2]);
         VAR_6[3] = FUNC_0(VAR_3->Light.Light[VAR_7].Ambient[3]);
         break;
      case 135:
         VAR_6[0] = FUNC_0(VAR_3->Light.Light[VAR_7].Diffuse[0]);
         VAR_6[1] = FUNC_0(VAR_3->Light.Light[VAR_7].Diffuse[1]);
         VAR_6[2] = FUNC_0(VAR_3->Light.Light[VAR_7].Diffuse[2]);
         VAR_6[3] = FUNC_0(VAR_3->Light.Light[VAR_7].Diffuse[3]);
         break;
      case 131:
         VAR_6[0] = FUNC_0(VAR_3->Light.Light[VAR_7].Specular[0]);
         VAR_6[1] = FUNC_0(VAR_3->Light.Light[VAR_7].Specular[1]);
         VAR_6[2] = FUNC_0(VAR_3->Light.Light[VAR_7].Specular[2]);
         VAR_6[3] = FUNC_0(VAR_3->Light.Light[VAR_7].Specular[3]);
         break;
      case 133:
         VAR_6[0] = VAR_3->Light.Light[VAR_7].Position[0];
         VAR_6[1] = VAR_3->Light.Light[VAR_7].Position[1];
         VAR_6[2] = VAR_3->Light.Light[VAR_7].Position[2];
         VAR_6[3] = VAR_3->Light.Light[VAR_7].Position[3];
         break;
      case 129:
         VAR_6[0] = VAR_3->Light.Light[VAR_7].Direction[0];
         VAR_6[1] = VAR_3->Light.Light[VAR_7].Direction[1];
         VAR_6[2] = VAR_3->Light.Light[VAR_7].Direction[2];
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
         FUNC_1( VAR_3, VAR_0, "glGetLightiv" );
         break;
   }
}
