
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_11__ ;
typedef struct TYPE_29__ TYPE_10__ ;


struct TYPE_39__ {int (* DepthTestSpan ) (TYPE_11__*,int,int ,int ,int *,int *) ;int (* SetBuffer ) (TYPE_11__*,int ) ;int (* WriteColorSpan ) (TYPE_11__*,int,int ,int ,int *,int *,int *,int *,int *) ;} ;
struct TYPE_38__ {scalar_t__ SWmasking; scalar_t__ BlendEnabled; scalar_t__ SWLogicOpEnabled; scalar_t__ AlphaEnabled; } ;
struct TYPE_37__ {scalar_t__ Test; } ;
struct TYPE_36__ {scalar_t__ Enabled; } ;
struct TYPE_35__ {scalar_t__ StippleFlag; } ;
struct TYPE_34__ {scalar_t__ Enabled; } ;
struct TYPE_33__ {scalar_t__ Enabled; } ;
struct TYPE_32__ {scalar_t__ Fog; } ;
struct TYPE_31__ {scalar_t__ Enabled; } ;
struct TYPE_30__ {int RasterMask; TYPE_9__ Driver; TYPE_10__* Buffer; TYPE_8__ Color; TYPE_7__ Depth; TYPE_6__ Stencil; TYPE_5__ Polygon; TYPE_4__ Scissor; TYPE_3__ Texture; TYPE_2__ Hint; TYPE_1__ Fog; scalar_t__ MutablePixels; } ;
struct TYPE_29__ {int FrontAlpha; int Alpha; int BackAlpha; } ;
typedef int GLuint ;
typedef int GLubyte ;
typedef int GLint ;
typedef scalar_t__ GLenum ;
typedef int GLdepth ;
typedef TYPE_11__ GLcontext ;
typedef scalar_t__ GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int,int) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (TYPE_11__*,int,int ,int ,int *) ;
 scalar_t__ FUNC_3 (TYPE_11__*,int,int *,int *) ;
 int FUNC_4 (TYPE_11__*,int,int ,int ,int *,int *,int *,int *,int *) ;
 int FUNC_5 (TYPE_11__*,int,int ,int ,int *,int *) ;
 int FUNC_6 (TYPE_11__*,int,int *,int *,int *,int *,int *) ;
 int FUNC_7 (TYPE_11__*,int,int ,int ,int *,int *,int *,int *,int *) ;
 int FUNC_8 (TYPE_11__*,int,int ,int ,int *,int *,int *,int *) ;
 scalar_t__ FUNC_9 (TYPE_11__*,int,int ,int ,int *) ;
 scalar_t__ FUNC_10 (TYPE_11__*,int,int ,int ,int *) ;
 int FUNC_11 (TYPE_11__*,int,int ,int ,int *,int *) ;
 int FUNC_12 (TYPE_11__*,int,int ,int ,int *) ;
 int FUNC_13 (TYPE_11__*,int,int ,int ,int *,int *) ;
 int FUNC_14 (TYPE_11__*,int,int ,int ,int *,int *,int *,int *,int *) ;
 int FUNC_15 (TYPE_11__*,int ) ;
 int FUNC_16 (TYPE_11__*,int,int ,int ,int *,int *,int *,int *,int *) ;
 int FUNC_17 (TYPE_11__*,int ) ;

void FUNC_18( GLcontext *VAR_12,
                          GLuint VAR_13, GLint VAR_14, GLint VAR_15, GLdepth VAR_16[],
     GLubyte VAR_17[], GLubyte VAR_18[],
     GLubyte VAR_19[], GLubyte VAR_20[],
     GLenum VAR_21 )
{
   GLubyte VAR_22[VAR_9];
   GLboolean VAR_23 = VAR_8;
   GLubyte VAR_24[VAR_9], VAR_25[VAR_9], VAR_26[VAR_9], VAR_27[VAR_9];
   GLubyte *VAR_28, *VAR_29, *VAR_30, *VAR_31;


   FUNC_1(VAR_22, 1, VAR_13);

   if ((VAR_12->RasterMask & VAR_11) || VAR_21==VAR_3) {
      if (FUNC_2( VAR_12,VAR_13,VAR_14,VAR_15,VAR_22)==0) {
  return;
      }
      VAR_23 = VAR_4;
   }

   if ((VAR_21==VAR_3 && VAR_12->MutablePixels)
       || (VAR_12->RasterMask & VAR_1)) {

      FUNC_0( VAR_24, VAR_17, VAR_13 * sizeof(GLubyte) );
      FUNC_0( VAR_25, VAR_18, VAR_13 * sizeof(GLubyte) );
      FUNC_0( VAR_26, VAR_19, VAR_13 * sizeof(GLubyte) );
      FUNC_0( VAR_27, VAR_20, VAR_13 * sizeof(GLubyte) );
      VAR_28 = VAR_24;
      VAR_29 = VAR_25;
      VAR_30 = VAR_26;
      VAR_31 = VAR_27;
   }
   else {
      VAR_28 = VAR_17;
      VAR_29 = VAR_18;
      VAR_30 = VAR_19;
      VAR_31 = VAR_20;
   }


   if (VAR_12->Fog.Enabled && (VAR_12->Hint.Fog==VAR_6 || VAR_21==VAR_3
                            || VAR_12->Texture.Enabled)) {
      FUNC_6( VAR_12, VAR_13, VAR_16, VAR_28, VAR_29, VAR_30, VAR_31 );
   }


   if (VAR_12->Scissor.Enabled) {
      if (FUNC_9( VAR_12, VAR_13, VAR_14, VAR_15, VAR_22 )==0) {
  return;
      }
      VAR_23 = VAR_4;
   }


   if (VAR_12->Polygon.StippleFlag && VAR_21==VAR_7) {
      FUNC_12( VAR_12, VAR_13, VAR_14, VAR_15, VAR_22 );
      VAR_23 = VAR_4;
   }


   if (VAR_12->Color.AlphaEnabled) {
      if (FUNC_3( VAR_12, VAR_13, VAR_31, VAR_22 )==0) {
  return;
      }
      VAR_23 = VAR_4;
   }

   if (VAR_12->Stencil.Enabled) {

      if (FUNC_10( VAR_12, VAR_13, VAR_14, VAR_15, VAR_22 )==0) {
  return;
      }

      FUNC_5( VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_22 );
      VAR_23 = VAR_4;
   }
   else if (VAR_12->Depth.Test) {

      GLuint VAR_32 = (*VAR_12->Driver.DepthTestSpan)( VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_22 );
      if (VAR_32==0) {
         return;
      }
      if (VAR_32<VAR_13) {
         VAR_23 = VAR_4;
      }
   }

   if (VAR_12->RasterMask & VAR_10) {

      return;
   }


   if (VAR_12->Color.SWLogicOpEnabled) {
      FUNC_7( VAR_12, VAR_13, VAR_14, VAR_15, VAR_28, VAR_29, VAR_30, VAR_31, VAR_22 );
   }
   else if (VAR_12->Color.BlendEnabled) {
      FUNC_4( VAR_12, VAR_13, VAR_14, VAR_15, VAR_28, VAR_29, VAR_30, VAR_31, VAR_22 );
   }


   if (VAR_12->Color.SWmasking) {
      FUNC_8( VAR_12, VAR_13, VAR_14, VAR_15, VAR_28, VAR_29, VAR_30, VAR_31 );
   }


   (*VAR_12->Driver.WriteColorSpan)( VAR_12, VAR_13, VAR_14, VAR_15, VAR_28, VAR_29, VAR_30, VAR_31,
                                  VAR_23 ? ((void*)0) : VAR_22 );
   if (VAR_12->RasterMask & VAR_0) {
      FUNC_11( VAR_12, VAR_13, VAR_14, VAR_15, VAR_31, VAR_23 ? ((void*)0) : VAR_22 );
   }

   if (VAR_12->RasterMask & VAR_1) {

      FUNC_0( VAR_24, VAR_17, VAR_13 * sizeof(GLubyte) );
      FUNC_0( VAR_25, VAR_18, VAR_13 * sizeof(GLubyte) );
      FUNC_0( VAR_26, VAR_19, VAR_13 * sizeof(GLubyte) );
      FUNC_0( VAR_27, VAR_20, VAR_13 * sizeof(GLubyte) );
      (*VAR_12->Driver.SetBuffer)( VAR_12, VAR_2 );
      if (VAR_12->Color.SWLogicOpEnabled) {
         FUNC_7( VAR_12, VAR_13, VAR_14, VAR_15, VAR_28, VAR_29, VAR_30, VAR_31, VAR_22 );
      }
      else if (VAR_12->Color.BlendEnabled) {
         FUNC_4( VAR_12, VAR_13, VAR_14, VAR_15, VAR_28, VAR_29, VAR_30, VAR_31, VAR_22 );
      }
      if (VAR_12->Color.SWmasking) {
         FUNC_8( VAR_12, VAR_13, VAR_14, VAR_15, VAR_28, VAR_29, VAR_30, VAR_31 );
      }
      (*VAR_12->Driver.WriteColorSpan)( VAR_12, VAR_13, VAR_14, VAR_15, VAR_28, VAR_29, VAR_30, VAR_31,
                              VAR_23 ? ((void*)0) : VAR_22 );
      if (VAR_12->RasterMask & VAR_0) {
         VAR_12->Buffer->Alpha = VAR_12->Buffer->BackAlpha;
         FUNC_11( VAR_12, VAR_13, VAR_14, VAR_15, VAR_31, VAR_23 ? ((void*)0) : VAR_22 );
         VAR_12->Buffer->Alpha = VAR_12->Buffer->FrontAlpha;
      }
      (*VAR_12->Driver.SetBuffer)( VAR_12, VAR_5 );
   }

}
