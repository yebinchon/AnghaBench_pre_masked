
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int BlendSrc; int BlendDst; } ;
struct TYPE_7__ {int NewState; TYPE_1__ Color; } ;
typedef int GLenum ;
typedef TYPE_2__ GLcontext ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

void FUNC_2( GLcontext* VAR_3, GLenum VAR_4, GLenum VAR_5 )
{
   if (FUNC_0(VAR_3)) {
      FUNC_1( VAR_3, VAR_1, "glBlendFunc" );
      return;
   }

   switch (VAR_4) {
      case 128:
      case 136:
      case 137:
      case 134:
      case 131:
      case 133:
      case 138:
      case 135:
      case 130:
         VAR_3->Color.BlendSrc = VAR_4;
         break;
      default:
         FUNC_1( VAR_3, VAR_0, "glBlendFunc(sfactor)" );
         return;
   }

   switch (VAR_5) {
      case 128:
      case 136:
      case 129:
      case 132:
      case 131:
      case 133:
      case 138:
      case 135:
         VAR_3->Color.BlendDst = VAR_5;
         break;
      default:
         FUNC_1( VAR_3, VAR_0, "glBlendFunc(dfactor)" );
   }

   VAR_3->NewState |= VAR_2;
}
