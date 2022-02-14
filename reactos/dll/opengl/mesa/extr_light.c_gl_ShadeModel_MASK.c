
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ShadeModel; } ;
struct TYPE_7__ {int NewState; TYPE_1__ Light; } ;
typedef int GLenum ;
typedef TYPE_2__ GLcontext ;



 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

void FUNC_2( GLcontext *VAR_3, GLenum VAR_4 )
{
   if (FUNC_0(VAR_3)) {
      FUNC_1( VAR_3, VAR_1, "glShadeModel" );
      return;
   }

   switch (VAR_4) {
      case 129:
      case 128:
         if (VAR_3->Light.ShadeModel!=VAR_4) {
            VAR_3->Light.ShadeModel = VAR_4;
            VAR_3->NewState |= VAR_2;
         }
         break;
      default:
         FUNC_1( VAR_3, VAR_0, "glShadeModel" );
   }
}
