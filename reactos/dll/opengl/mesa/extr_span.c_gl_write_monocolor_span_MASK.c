
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


struct TYPE_36__ {size_t (* DepthTestSpan ) (TYPE_8__*,size_t,scalar_t__,scalar_t__,int *,scalar_t__*) ;int (* SetBuffer ) (TYPE_8__*,int ) ;int (* WriteMonocolorSpan ) (TYPE_8__*,size_t,scalar_t__,scalar_t__,scalar_t__*) ;int (* WriteColorSpan ) (TYPE_8__*,size_t,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;} ;
struct TYPE_35__ {scalar_t__ SWmasking; scalar_t__ BlendEnabled; scalar_t__ SWLogicOpEnabled; scalar_t__ AlphaEnabled; } ;
struct TYPE_34__ {scalar_t__ Test; } ;
struct TYPE_33__ {scalar_t__ Enabled; } ;
struct TYPE_32__ {scalar_t__ StippleFlag; } ;
struct TYPE_31__ {scalar_t__ Enabled; } ;
struct TYPE_37__ {int RasterMask; TYPE_1__* Buffer; TYPE_7__ Driver; TYPE_6__ Color; TYPE_5__ Depth; TYPE_4__ Stencil; TYPE_3__ Polygon; TYPE_2__ Scissor; } ;
struct TYPE_30__ {int FrontAlpha; int Alpha; int BackAlpha; } ;
typedef size_t GLuint ;
typedef scalar_t__ GLubyte ;
typedef scalar_t__ GLint ;
typedef scalar_t__ GLenum ;
typedef int GLdepth ;
typedef TYPE_8__ GLcontext ;
typedef scalar_t__ GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__*,int,size_t) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (TYPE_8__*,size_t,scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_2 (TYPE_8__*,size_t,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (TYPE_8__*,size_t,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (TYPE_8__*,size_t,scalar_t__,scalar_t__,int *,scalar_t__*) ;
 int FUNC_5 (TYPE_8__*,size_t,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (TYPE_8__*,size_t,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_7 (TYPE_8__*,size_t,scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_8 (TYPE_8__*,size_t,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_9 (TYPE_8__*,size_t,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_10 (TYPE_8__*,size_t,scalar_t__,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_11 (TYPE_8__*,size_t,scalar_t__,scalar_t__,scalar_t__*) ;
 size_t FUNC_12 (TYPE_8__*,size_t,scalar_t__,scalar_t__,int *,scalar_t__*) ;
 int FUNC_13 (TYPE_8__*,size_t,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_14 (TYPE_8__*,int ) ;
 int FUNC_15 (TYPE_8__*,size_t,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_16 (TYPE_8__*,int ) ;
 int FUNC_17 (TYPE_8__*,size_t,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_18 (TYPE_8__*,int ) ;
 int FUNC_19 (TYPE_8__*,size_t,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_20 (TYPE_8__*,int ) ;

void FUNC_21( GLcontext *VAR_11,
                              GLuint VAR_12, GLint VAR_13, GLint VAR_14, GLdepth VAR_15[],
         GLint VAR_16, GLint VAR_17, GLint VAR_18, GLint VAR_19,
                              GLenum VAR_20 )
{
   GLuint VAR_21;
   GLubyte VAR_22[VAR_8];
   GLboolean VAR_23 = VAR_7;
   GLubyte VAR_24[VAR_8], VAR_25[VAR_8], VAR_26[VAR_8], VAR_27[VAR_8];


   FUNC_0(VAR_22, 1, VAR_12);

   if ((VAR_11->RasterMask & VAR_10) || VAR_20==VAR_3) {
      if (FUNC_1( VAR_11,VAR_12,VAR_13,VAR_14,VAR_22)==0) {
  return;
      }
      VAR_23 = VAR_4;
   }


   if (VAR_11->Scissor.Enabled) {
      if (FUNC_7( VAR_11, VAR_12, VAR_13, VAR_14, VAR_22 )==0) {
  return;
      }
      VAR_23 = VAR_4;
   }


   if (VAR_11->Polygon.StippleFlag && VAR_20==VAR_6) {
      FUNC_11( VAR_11, VAR_12, VAR_13, VAR_14, VAR_22 );
      VAR_23 = VAR_4;
   }


   if (VAR_11->Color.AlphaEnabled) {
      GLubyte VAR_28[VAR_8];
      for (VAR_21=0;VAR_21<VAR_12;VAR_21++) {
         VAR_28[VAR_21] = VAR_19;
      }
      if (FUNC_2( VAR_11, VAR_12, VAR_28, VAR_22 )==0) {
  return;
      }
      VAR_23 = VAR_4;
   }

   if (VAR_11->Stencil.Enabled) {

      if (FUNC_8( VAR_11, VAR_12, VAR_13, VAR_14, VAR_22 )==0) {
  return;
      }

      FUNC_4( VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_22 );
      VAR_23 = VAR_4;
   }
   else if (VAR_11->Depth.Test) {

      GLuint VAR_29 = (*VAR_11->Driver.DepthTestSpan)( VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_22 );
      if (VAR_29==0) {
         return;
      }
      if (VAR_29<VAR_12) {
         VAR_23 = VAR_4;
      }
   }

   if (VAR_11->RasterMask & VAR_9) {

      return;
   }

   if (VAR_11->Color.BlendEnabled || VAR_11->Color.SWLogicOpEnabled
       || VAR_11->Color.SWmasking) {

      for (VAR_21=0;VAR_21<VAR_12;VAR_21++) {
  if (VAR_22[VAR_21]) {
     VAR_24[VAR_21] = VAR_16;
     VAR_25[VAR_21] = VAR_17;
     VAR_26[VAR_21] = VAR_18;
     VAR_27[VAR_21] = VAR_19;
  }
      }

      if (VAR_11->Color.SWLogicOpEnabled) {
         FUNC_5( VAR_11, VAR_12, VAR_13, VAR_14, VAR_24, VAR_25, VAR_26, VAR_27, VAR_22 );
      }
      else if (VAR_11->Color.BlendEnabled) {
         FUNC_3( VAR_11, VAR_12, VAR_13, VAR_14, VAR_24, VAR_25, VAR_26, VAR_27, VAR_22 );
      }


      if (VAR_11->Color.SWmasking) {
         FUNC_6( VAR_11, VAR_12, VAR_13, VAR_14, VAR_24, VAR_25, VAR_26, VAR_27 );
      }


      (*VAR_11->Driver.WriteColorSpan)( VAR_11, VAR_12, VAR_13, VAR_14, VAR_24, VAR_25, VAR_26, VAR_27,
                                     VAR_23 ? ((void*)0) : VAR_22 );
      if (VAR_11->RasterMask & VAR_0) {
         FUNC_9( VAR_11, VAR_12, VAR_13, VAR_14, VAR_27, VAR_23 ? ((void*)0) : VAR_22 );
      }

      if (VAR_11->RasterMask & VAR_1) {

         for (VAR_21=0;VAR_21<VAR_12;VAR_21++) {
            if (VAR_22[VAR_21]) {
               VAR_24[VAR_21] = VAR_16;
               VAR_25[VAR_21] = VAR_17;
               VAR_26[VAR_21] = VAR_18;
               VAR_27[VAR_21] = VAR_19;
            }
         }
         (*VAR_11->Driver.SetBuffer)( VAR_11, VAR_2 );
         if (VAR_11->Color.SWLogicOpEnabled) {
            FUNC_5( VAR_11, VAR_12, VAR_13, VAR_14, VAR_24, VAR_25, VAR_26, VAR_27, VAR_22);
         }
         else if (VAR_11->Color.BlendEnabled) {
            FUNC_3( VAR_11, VAR_12, VAR_13, VAR_14, VAR_24, VAR_25, VAR_26, VAR_27, VAR_22 );
         }
         if (VAR_11->Color.SWmasking) {
            FUNC_6( VAR_11, VAR_12, VAR_13, VAR_14, VAR_24, VAR_25, VAR_26, VAR_27 );
         }
         (*VAR_11->Driver.WriteColorSpan)( VAR_11, VAR_12, VAR_13, VAR_14, VAR_24, VAR_25, VAR_26, VAR_27,
                                        VAR_23 ? ((void*)0) : VAR_22 );
         (*VAR_11->Driver.SetBuffer)( VAR_11, VAR_5 );
         if (VAR_11->RasterMask & VAR_0) {
            VAR_11->Buffer->Alpha = VAR_11->Buffer->BackAlpha;
            FUNC_9( VAR_11, VAR_12, VAR_13, VAR_14, VAR_27,
                                 VAR_23 ? ((void*)0) : VAR_22 );
            VAR_11->Buffer->Alpha = VAR_11->Buffer->FrontAlpha;
         }
      }
   }
   else {
      (*VAR_11->Driver.WriteMonocolorSpan)( VAR_11, VAR_12, VAR_13, VAR_14, VAR_22 );
      if (VAR_11->RasterMask & VAR_0) {
         FUNC_10( VAR_11, VAR_12, VAR_13, VAR_14, VAR_19, VAR_23 ? ((void*)0) : VAR_22 );
      }
      if (VAR_11->RasterMask & VAR_1) {

         (*VAR_11->Driver.SetBuffer)( VAR_11, VAR_2 );
         (*VAR_11->Driver.WriteMonocolorSpan)( VAR_11, VAR_12, VAR_13, VAR_14, VAR_22 );
         (*VAR_11->Driver.SetBuffer)( VAR_11, VAR_5 );
         if (VAR_11->RasterMask & VAR_0) {
            VAR_11->Buffer->Alpha = VAR_11->Buffer->BackAlpha;
            FUNC_10( VAR_11, VAR_12, VAR_13, VAR_14, VAR_19,
                                      VAR_23 ? ((void*)0) : VAR_22 );
            VAR_11->Buffer->Alpha = VAR_11->Buffer->FrontAlpha;
         }
      }
   }
}
