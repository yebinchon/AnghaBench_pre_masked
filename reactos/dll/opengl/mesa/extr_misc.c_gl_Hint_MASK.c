
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ PolygonSmooth; scalar_t__ PointSmooth; scalar_t__ PerspectiveCorrection; scalar_t__ LineSmooth; scalar_t__ Fog; } ;
struct TYPE_7__ {int NewState; TYPE_1__ Hint; } ;
typedef scalar_t__ GLenum ;
typedef TYPE_2__ GLcontext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 scalar_t__ VAR_4 ;



 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

void FUNC_2( GLcontext *VAR_6, GLenum VAR_7, GLenum VAR_8 )
{
   if (FUNC_0(VAR_6)) {
      FUNC_1( VAR_6, VAR_3, "glHint" );
      return;
   }
   if (VAR_8!=VAR_0 && VAR_8!=VAR_1 && VAR_8!=VAR_4) {
      FUNC_1( VAR_6, VAR_2, "glHint(mode)" );
      return;
   }
   switch (VAR_7) {
      case 132:
         VAR_6->Hint.Fog = VAR_8;
         break;
      case 131:
         VAR_6->Hint.LineSmooth = VAR_8;
         break;
      case 130:
         VAR_6->Hint.PerspectiveCorrection = VAR_8;
         break;
      case 129:
         VAR_6->Hint.PointSmooth = VAR_8;
         break;
      case 128:
         VAR_6->Hint.PolygonSmooth = VAR_8;
         break;
      default:
         FUNC_1( VAR_6, VAR_2, "glHint(target)" );
   }
   VAR_6->NewState |= VAR_5;
}
