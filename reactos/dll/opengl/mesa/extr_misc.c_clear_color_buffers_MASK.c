
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int (* SetBuffer ) (TYPE_5__*,int ) ;int (* Clear ) (TYPE_5__*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;} ;
struct TYPE_15__ {int Enabled; } ;
struct TYPE_13__ {scalar_t__ SWmasking; } ;
struct TYPE_17__ {int RasterMask; TYPE_4__ Driver; TYPE_3__ Scissor; TYPE_2__* Buffer; TYPE_1__ Color; } ;
struct TYPE_14__ {scalar_t__ Xmin; scalar_t__ Xmax; scalar_t__ Ymin; scalar_t__ Ymax; } ;
typedef scalar_t__ GLint ;
typedef TYPE_5__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_5__*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_5__*,int ) ;

__attribute__((used)) static void FUNC_6( GLcontext *VAR_4 )
{
   if (VAR_4->Color.SWmasking) {
      FUNC_0( VAR_4 );
   }
   else {
      GLint VAR_5 = VAR_4->Buffer->Xmin;
      GLint VAR_6 = VAR_4->Buffer->Ymin;
      GLint VAR_7 = VAR_4->Buffer->Ymax - VAR_4->Buffer->Ymin + 1;
      GLint VAR_8 = VAR_4->Buffer->Xmax - VAR_4->Buffer->Xmin + 1;
      (*VAR_4->Driver.Clear)( VAR_4, !VAR_4->Scissor.Enabled,
                            VAR_5, VAR_6, VAR_8, VAR_7 );
      if (VAR_4->RasterMask & VAR_0) {

         FUNC_1( VAR_4 );
      }
   }

   if (VAR_4->RasterMask & VAR_1) {

      (*VAR_4->Driver.SetBuffer)( VAR_4, VAR_2 );
      if (VAR_4->Color.SWmasking) {
         FUNC_0( VAR_4 );
      }
      else {
         GLint VAR_9 = VAR_4->Buffer->Xmin;
         GLint VAR_10 = VAR_4->Buffer->Ymin;
         GLint VAR_11 = VAR_4->Buffer->Ymax - VAR_4->Buffer->Ymin + 1;
         GLint VAR_12 = VAR_4->Buffer->Xmax - VAR_4->Buffer->Xmin + 1;
         (*VAR_4->Driver.Clear)( VAR_4, !VAR_4->Scissor.Enabled,
                               VAR_9, VAR_10, VAR_12, VAR_11 );
      }
      (*VAR_4->Driver.SetBuffer)( VAR_4, VAR_3 );
   }
}
