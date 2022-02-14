
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* TwoSide; void* LocalViewer; int Ambient; } ;
struct TYPE_7__ {TYPE_1__ Model; } ;
struct TYPE_8__ {int NewState; TYPE_2__ Light; } ;
typedef double GLfloat ;
typedef int GLenum ;
typedef TYPE_3__ GLcontext ;


 int FUNC_0 (int ,double const*) ;
 void* VAR_0 ;
 int VAR_1 ;



 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;

void FUNC_2( GLcontext *VAR_4, GLenum VAR_5, const GLfloat *VAR_6 )
{
   switch (VAR_5) {
      case 130:
         FUNC_0( VAR_4->Light.Model.Ambient, VAR_6 );
         break;
      case 129:
         if (VAR_6[0]==0.0)
            VAR_4->Light.Model.LocalViewer = VAR_0;
         else
            VAR_4->Light.Model.LocalViewer = VAR_2;
         break;
      case 128:
         if (VAR_6[0]==0.0)
            VAR_4->Light.Model.TwoSide = VAR_0;
         else
            VAR_4->Light.Model.TwoSide = VAR_2;
         break;
      default:
         FUNC_1( VAR_4, VAR_1, "glLightModel" );
         break;
   }
   VAR_4->NewState |= VAR_3;
}
