
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {int (* ClearDepthBuffer ) (TYPE_4__*) ;int (* SetBuffer ) (TYPE_4__*,int ) ;int (* ClearColorAndDepth ) (TYPE_4__*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;} ;
struct TYPE_18__ {int Enabled; } ;
struct TYPE_20__ {scalar_t__ RenderMode; int RasterMask; int ClearCount; int ClearTime; TYPE_3__ Driver; TYPE_2__ Scissor; TYPE_1__* Buffer; scalar_t__ NewState; } ;
struct TYPE_17__ {scalar_t__ Xmin; scalar_t__ Xmax; scalar_t__ Ymin; scalar_t__ Ymax; } ;
typedef scalar_t__ GLint ;
typedef scalar_t__ GLdouble ;
typedef TYPE_4__ GLcontext ;
typedef int GLbitfield ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int ,char*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (TYPE_4__*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 (TYPE_4__*) ;

void FUNC_12( GLcontext *VAR_9, GLbitfield VAR_10 )
{




   if (FUNC_0(VAR_9)) {
      FUNC_4( VAR_9, VAR_6, "glClear" );
      return;
   }

   if (VAR_9->RenderMode==VAR_7) {
      if (VAR_9->NewState) {
         FUNC_6( VAR_9 );
      }




      if (VAR_9->Driver.ClearColorAndDepth &&
          (VAR_10 & VAR_3) && (VAR_10 & VAR_4)) {
         GLint VAR_11 = VAR_9->Buffer->Xmin;
         GLint VAR_12 = VAR_9->Buffer->Ymin;
         GLint VAR_13 = VAR_9->Buffer->Ymax - VAR_9->Buffer->Ymin + 1;
         GLint VAR_14 = VAR_9->Buffer->Xmax - VAR_9->Buffer->Xmin + 1;
         (*VAR_9->Driver.ClearColorAndDepth)( VAR_9, !VAR_9->Scissor.Enabled,
                                            VAR_11, VAR_12, VAR_14, VAR_13 );
         if (VAR_9->RasterMask & VAR_0) {

            (*VAR_9->Driver.SetBuffer)( VAR_9, VAR_2 );
            (*VAR_9->Driver.ClearColorAndDepth)( VAR_9, !VAR_9->Scissor.Enabled,
                                               VAR_11, VAR_12, VAR_14, VAR_13 );
            (*VAR_9->Driver.SetBuffer)( VAR_9, VAR_5 );
         }
      }
      else {

         if (VAR_10 & VAR_3) FUNC_1( VAR_9 );
         if (VAR_10 & VAR_4) (*VAR_9->Driver.ClearDepthBuffer)(VAR_9);
         if (VAR_10 & VAR_1) FUNC_2( VAR_9 );
         if (VAR_10 & VAR_8) FUNC_3( VAR_9 );
      }





   }
}
