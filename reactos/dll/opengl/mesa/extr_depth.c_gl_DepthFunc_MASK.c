
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Func; } ;
struct TYPE_7__ {int NewState; TYPE_1__ Depth; } ;
typedef int GLenum ;
typedef TYPE_2__ GLcontext ;






 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

void FUNC_2( GLcontext* VAR_3, GLenum VAR_4 )
{
   if (FUNC_0(VAR_3)) {
      FUNC_1( VAR_3, VAR_1, "glDepthFunc" );
      return;
   }

   switch (VAR_4) {
      case 129:
      case 130:
      case 133:
      case 131:
      case 132:
      case 128:
      case 134:
      case 135:
         VAR_3->Depth.Func = VAR_4;
         VAR_3->NewState |= VAR_2;
         break;
      default:
         FUNC_1( VAR_3, VAR_0, "glDepth.Func" );
   }
}
