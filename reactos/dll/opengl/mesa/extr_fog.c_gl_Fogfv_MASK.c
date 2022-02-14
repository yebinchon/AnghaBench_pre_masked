
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Mode; double Density; double Start; double End; double Index; double* Color; } ;
struct TYPE_6__ {TYPE_1__ Fog; } ;
typedef int GLint ;
typedef double GLfloat ;
typedef int GLenum ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;

void FUNC_1( GLcontext *VAR_5, GLenum VAR_6, const GLfloat *VAR_7 )
{
   GLenum VAR_8;

   switch (VAR_6) {
      case 129:
         VAR_8 = (GLenum) (GLint) *VAR_7;
  if (VAR_8==VAR_4 || VAR_8==VAR_0 || VAR_8==VAR_1) {
     VAR_5->Fog.Mode = VAR_8;
  }
  else {
     FUNC_0( VAR_5, VAR_2, "glFog" );
  }
  break;
      case 132:
  if (*VAR_7<0.0) {
     FUNC_0( VAR_5, VAR_3, "glFog" );
  }
  else {
     VAR_5->Fog.Density = *VAR_7;
  }
  break;
      case 128:

         if (*VAR_7<0.0F) {
            FUNC_0( VAR_5, VAR_3, "glFog(GL_FOG_START)" );
            return;
         }

  VAR_5->Fog.Start = *VAR_7;
  break;
      case 131:

         if (*VAR_7<0.0F) {
            FUNC_0( VAR_5, VAR_3, "glFog(GL_FOG_END)" );
            return;
         }

  VAR_5->Fog.End = *VAR_7;
  break;
      case 130:
  VAR_5->Fog.Index = *VAR_7;
  break;
      case 133:
  VAR_5->Fog.Color[0] = VAR_7[0];
  VAR_5->Fog.Color[1] = VAR_7[1];
  VAR_5->Fog.Color[2] = VAR_7[2];
  VAR_5->Fog.Color[3] = VAR_7[3];
         break;
      default:
         FUNC_0( VAR_5, VAR_2, "glFog" );
   }
}
