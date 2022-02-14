
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int DrawBuffer; } ;
struct TYPE_10__ {int (* SetBuffer ) (TYPE_4__*,int const) ;} ;
struct TYPE_13__ {int NewState; TYPE_3__* Buffer; TYPE_2__ Color; TYPE_1__ Driver; } ;
struct TYPE_12__ {int * Alpha; int * BackAlpha; int * FrontAlpha; } ;
typedef int GLenum ;
typedef TYPE_4__ GLcontext ;






 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 int FUNC_2 (TYPE_4__*,int const) ;
 int FUNC_3 (TYPE_4__*,int const) ;

void FUNC_4( GLcontext *VAR_4, GLenum VAR_5 )
{
   if (FUNC_0(VAR_4)) {
      FUNC_1( VAR_4, VAR_2, "glDrawBuffer" );
      return;
   }
   switch (VAR_5) {
      case 134:
      case 132:
      case 133:
         if ( (*VAR_4->Driver.SetBuffer)( VAR_4, 134 ) == VAR_0 ) {
            FUNC_1( VAR_4, VAR_1, "glDrawBuffer" );
            return;
         }
         VAR_4->Color.DrawBuffer = VAR_5;
         VAR_4->Buffer->Alpha = VAR_4->Buffer->FrontAlpha;
  VAR_4->NewState |= VAR_3;
         break;
      case 137:
      case 136:
         if ( (*VAR_4->Driver.SetBuffer)( VAR_4, 137 ) == VAR_0) {
            FUNC_1( VAR_4, VAR_1, "glDrawBuffer" );
            return;
         }
         VAR_4->Color.DrawBuffer = VAR_5;
         VAR_4->Buffer->Alpha = VAR_4->Buffer->BackAlpha;
  VAR_4->NewState |= VAR_3;
         break;
      case 129:
         VAR_4->Color.DrawBuffer = VAR_5;
         VAR_4->Buffer->Alpha = ((void*)0);
         VAR_4->NewState |= VAR_3;
         break;
      case 131:
      case 135:
      case 130:
      case 128:
      case 138:
         FUNC_1( VAR_4, VAR_2, "glDrawBuffer" );
         break;
      default:
         FUNC_1( VAR_4, VAR_1, "glDrawBuffer" );
   }
}
