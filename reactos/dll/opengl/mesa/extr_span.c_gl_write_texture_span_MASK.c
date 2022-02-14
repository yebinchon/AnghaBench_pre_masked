
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_11__ ;
typedef struct TYPE_30__ TYPE_10__ ;


struct TYPE_40__ {scalar_t__ SWmasking; scalar_t__ BlendEnabled; scalar_t__ SWLogicOpEnabled; scalar_t__ AlphaEnabled; } ;
struct TYPE_39__ {scalar_t__ Test; } ;
struct TYPE_38__ {scalar_t__ Enabled; } ;
struct TYPE_37__ {scalar_t__ StippleFlag; } ;
struct TYPE_36__ {scalar_t__ Enabled; } ;
struct TYPE_35__ {scalar_t__ Enabled; } ;
struct TYPE_34__ {scalar_t__ Fog; } ;
struct TYPE_33__ {scalar_t__ Enabled; } ;
struct TYPE_32__ {int FrontAlpha; int Alpha; int BackAlpha; } ;
struct TYPE_30__ {int (* DepthTestSpan ) (TYPE_11__*,int,int ,int ,int *,int *) ;int (* SetBuffer ) (TYPE_11__*,int ) ;int (* WriteColorSpan ) (TYPE_11__*,int,int ,int ,int *,int *,int *,int *,int *) ;} ;
struct TYPE_31__ {int RasterMask; TYPE_1__* Buffer; TYPE_10__ Driver; TYPE_9__ Color; TYPE_8__ Depth; TYPE_7__ Stencil; TYPE_6__ Polygon; TYPE_5__ Scissor; TYPE_4__ Texture; TYPE_3__ Hint; TYPE_2__ Fog; } ;
typedef int GLuint ;
typedef int GLubyte ;
typedef int GLint ;
typedef int GLfloat ;
typedef scalar_t__ GLenum ;
typedef int GLdepth ;
typedef TYPE_11__ GLcontext ;
typedef scalar_t__ GLboolean ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int,int) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (TYPE_11__*,int,int ,int ,int *) ;
 scalar_t__ FUNC_4 (TYPE_11__*,int,int *,int *) ;
 int FUNC_5 (TYPE_11__*,int,int ,int ,int *,int *,int *,int *,int *) ;
 int FUNC_6 (TYPE_11__*,int,int ,int ,int *,int *) ;
 int FUNC_7 (TYPE_11__*,int,int *,int *,int *,int *,int *) ;
 int FUNC_8 (TYPE_11__*,int,int ,int ,int *,int *,int *,int *,int *) ;
 int FUNC_9 (TYPE_11__*,int,int ,int ,int *,int *,int *,int *) ;
 scalar_t__ FUNC_10 (TYPE_11__*,int,int ,int ,int *) ;
 scalar_t__ FUNC_11 (TYPE_11__*,int,int ,int ,int *) ;
 int FUNC_12 (TYPE_11__*,int,int *,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_13 (TYPE_11__*,int,int ,int ,int *,int *) ;
 int FUNC_14 (TYPE_11__*,int,int ,int ,int *) ;
 int FUNC_15 (TYPE_11__*,int,int ,int ,int *,int *) ;
 int FUNC_16 (TYPE_11__*,int,int ,int ,int *,int *,int *,int *,int *) ;
 int FUNC_17 (TYPE_11__*,int ) ;
 int FUNC_18 (TYPE_11__*,int,int ,int ,int *,int *,int *,int *,int *) ;
 int FUNC_19 (TYPE_11__*,int ) ;

void FUNC_20( GLcontext *VAR_12,
                            GLuint VAR_13, GLint VAR_14, GLint VAR_15, GLdepth VAR_16[],
       GLfloat VAR_17[], GLfloat VAR_18[], GLfloat VAR_19[],
                            GLfloat VAR_20[],
       GLubyte VAR_21[], GLubyte VAR_22[],
       GLubyte VAR_23[], GLubyte VAR_24[],
       GLenum VAR_25 )
{
   GLubyte VAR_26[VAR_9];
   GLboolean VAR_27 = VAR_8;
   GLubyte VAR_28[VAR_9], VAR_29[VAR_9], VAR_30[VAR_9], VAR_31[VAR_9];
   GLubyte *VAR_32, *VAR_33, *VAR_34, *VAR_35;


   FUNC_2(VAR_26, 1, VAR_13);

   if ((VAR_12->RasterMask & VAR_11) || VAR_25==VAR_3) {
      if (FUNC_3( VAR_12,VAR_13,VAR_14,VAR_15,VAR_26)==0) {
  return;
      }
      VAR_27 = VAR_4;
   }


   if (VAR_25==VAR_3 || (VAR_12->RasterMask & VAR_1)) {

      FUNC_1( VAR_28, VAR_21, VAR_13 * sizeof(GLubyte) );
      FUNC_1( VAR_29, VAR_22, VAR_13 * sizeof(GLubyte) );
      FUNC_1( VAR_30, VAR_23, VAR_13 * sizeof(GLubyte) );
      FUNC_1( VAR_31, VAR_24, VAR_13 * sizeof(GLubyte) );
      VAR_32 = VAR_28;
      VAR_33 = VAR_29;
      VAR_34 = VAR_30;
      VAR_35 = VAR_31;
   }
   else {
      VAR_32 = VAR_21;
      VAR_33 = VAR_22;
      VAR_34 = VAR_23;
      VAR_35 = VAR_24;
   }


   FUNC_0(VAR_12->Texture.Enabled);
   FUNC_12( VAR_12, VAR_13, VAR_17, VAR_18, VAR_19, VAR_20, VAR_32, VAR_33, VAR_34, VAR_35 );


   if (VAR_12->Fog.Enabled && (VAR_12->Hint.Fog==VAR_6 || VAR_25==VAR_3
                            || VAR_12->Texture.Enabled)) {
      FUNC_7( VAR_12, VAR_13, VAR_16, VAR_32, VAR_33, VAR_34, VAR_35 );
   }


   if (VAR_12->Scissor.Enabled) {
      if (FUNC_10( VAR_12, VAR_13, VAR_14, VAR_15, VAR_26 )==0) {
  return;
      }
      VAR_27 = VAR_4;
   }


   if (VAR_12->Polygon.StippleFlag && VAR_25==VAR_7) {
      FUNC_14( VAR_12, VAR_13, VAR_14, VAR_15, VAR_26 );
      VAR_27 = VAR_4;
   }


   if (VAR_12->Color.AlphaEnabled) {
      if (FUNC_4( VAR_12, VAR_13, VAR_35, VAR_26 )==0) {
  return;
      }
      VAR_27 = VAR_4;
   }

   if (VAR_12->Stencil.Enabled) {

      if (FUNC_11( VAR_12, VAR_13, VAR_14, VAR_15, VAR_26 )==0) {
  return;
      }

      FUNC_6( VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_26 );
      VAR_27 = VAR_4;
   }
   else if (VAR_12->Depth.Test) {

      GLuint VAR_36 = (*VAR_12->Driver.DepthTestSpan)( VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_26 );
      if (VAR_36==0) {
         return;
      }
      if (VAR_36<VAR_13) {
         VAR_27 = VAR_4;
      }
   }

   if (VAR_12->RasterMask & VAR_10) {

      return;
   }


   if (VAR_12->Color.SWLogicOpEnabled) {
      FUNC_8( VAR_12, VAR_13, VAR_14, VAR_15, VAR_32, VAR_33, VAR_34, VAR_35, VAR_26 );
   }
   else if (VAR_12->Color.BlendEnabled) {
      FUNC_5( VAR_12, VAR_13, VAR_14, VAR_15, VAR_32, VAR_33, VAR_34, VAR_35, VAR_26 );
   }

   if (VAR_12->Color.SWmasking) {
      FUNC_9( VAR_12, VAR_13, VAR_14, VAR_15, VAR_32, VAR_33, VAR_34, VAR_35 );
   }


   (*VAR_12->Driver.WriteColorSpan)( VAR_12, VAR_13, VAR_14, VAR_15, VAR_32, VAR_33, VAR_34, VAR_35,
                                  VAR_27 ? ((void*)0) : VAR_26 );
   if (VAR_12->RasterMask & VAR_0) {
      FUNC_13( VAR_12, VAR_13, VAR_14, VAR_15, VAR_35, VAR_27 ? ((void*)0) : VAR_26 );
   }

   if (VAR_12->RasterMask & VAR_1) {

      FUNC_1( VAR_28, VAR_21, VAR_13 * sizeof(GLubyte) );
      FUNC_1( VAR_29, VAR_22, VAR_13 * sizeof(GLubyte) );
      FUNC_1( VAR_30, VAR_23, VAR_13 * sizeof(GLubyte) );
      FUNC_1( VAR_31, VAR_24, VAR_13 * sizeof(GLubyte) );
      (*VAR_12->Driver.SetBuffer)( VAR_12, VAR_2 );
      if (VAR_12->Color.SWLogicOpEnabled) {
         FUNC_8( VAR_12, VAR_13, VAR_14, VAR_15, VAR_32, VAR_33, VAR_34, VAR_35, VAR_26 );
      }
      else if (VAR_12->Color.BlendEnabled) {
         FUNC_5( VAR_12, VAR_13, VAR_14, VAR_15, VAR_32, VAR_33, VAR_34, VAR_35, VAR_26 );
      }
      if (VAR_12->Color.SWmasking) {
         FUNC_9( VAR_12, VAR_13, VAR_14, VAR_15, VAR_32, VAR_33, VAR_34, VAR_35 );
      }
      (*VAR_12->Driver.WriteColorSpan)( VAR_12, VAR_13, VAR_14, VAR_15, VAR_32, VAR_33, VAR_34, VAR_35,
                                     VAR_27 ? ((void*)0) : VAR_26 );
      (*VAR_12->Driver.SetBuffer)( VAR_12, VAR_5 );
      if (VAR_12->RasterMask & VAR_0) {
         VAR_12->Buffer->Alpha = VAR_12->Buffer->BackAlpha;
         FUNC_13( VAR_12, VAR_13, VAR_14, VAR_15, VAR_35, VAR_27 ? ((void*)0) : VAR_26 );
         VAR_12->Buffer->Alpha = VAR_12->Buffer->FrontAlpha;
      }
   }
}
