
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int const DrawBuffer; } ;
struct TYPE_14__ {int (* SetBuffer ) (TYPE_5__*,int const) ;} ;
struct TYPE_12__ {int ReadBuffer; } ;
struct TYPE_16__ {TYPE_4__ Color; TYPE_3__ Driver; int NewState; TYPE_2__* Buffer; TYPE_1__ Pixel; } ;
struct TYPE_13__ {int BackAlpha; int Alpha; int FrontAlpha; } ;
typedef int GLenum ;
typedef TYPE_5__ GLcontext ;






 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_5__*,int ,char*) ;
 int FUNC_2 (TYPE_5__*,int const) ;
 int FUNC_3 (TYPE_5__*,int const) ;
 int FUNC_4 (TYPE_5__*,int const) ;

void FUNC_5( GLcontext *VAR_4, GLenum VAR_5 )
{
   if (FUNC_0(VAR_4)) {
      FUNC_1( VAR_4, VAR_2, "glReadBuffer" );
      return;
   }
   switch (VAR_5) {
      case 132:
      case 131:
         if ( (*VAR_4->Driver.SetBuffer)( VAR_4, 132 ) == VAR_0) {
            FUNC_1( VAR_4, VAR_1, "glReadBuffer" );
            return;
         }
         VAR_4->Pixel.ReadBuffer = VAR_5;
         VAR_4->Buffer->Alpha = VAR_4->Buffer->FrontAlpha;
         VAR_4->NewState |= VAR_3;
         break;
      case 135:
      case 134:
         if ( (*VAR_4->Driver.SetBuffer)( VAR_4, 135 ) == VAR_0) {
            FUNC_1( VAR_4, VAR_1, "glReadBuffer" );
            return;
         }
         VAR_4->Pixel.ReadBuffer = VAR_5;
         VAR_4->Buffer->Alpha = VAR_4->Buffer->BackAlpha;
         VAR_4->NewState |= VAR_3;
         break;
      case 130:
      case 133:
      case 129:
      case 128:
      case 136:
         FUNC_1( VAR_4, VAR_2, "glReadBuffer" );
         break;
      default:
         FUNC_1( VAR_4, VAR_1, "glReadBuffer" );
   }


   (void) (*VAR_4->Driver.SetBuffer)( VAR_4, VAR_4->Color.DrawBuffer );
}
