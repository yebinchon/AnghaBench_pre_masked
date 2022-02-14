
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_25__ {int Enabled; scalar_t__ EnvMode; TYPE_8__* Current1D; TYPE_7__* Current2D; TYPE_1__* Current; } ;
struct TYPE_24__ {scalar_t__ MinFilter; scalar_t__ MagFilter; } ;
struct TYPE_23__ {scalar_t__ MinFilter; scalar_t__ MagFilter; scalar_t__ WrapS; scalar_t__ WrapT; TYPE_2__** Image; } ;
struct TYPE_22__ {scalar_t__ EightBitColor; scalar_t__ RGBAflag; } ;
struct TYPE_21__ {scalar_t__ StippleFlag; } ;
struct TYPE_20__ {scalar_t__ Func; scalar_t__ Mask; } ;
struct TYPE_19__ {scalar_t__ PerspectiveCorrection; } ;
struct TYPE_18__ {scalar_t__ Format; scalar_t__ Border; } ;
struct TYPE_17__ {scalar_t__ Complete; } ;
struct TYPE_15__ {scalar_t__ TriangleFunc; } ;
struct TYPE_14__ {scalar_t__ ShadeModel; } ;
struct TYPE_16__ {scalar_t__ RenderMode; scalar_t__ TextureMatrixType; scalar_t__ RasterMask; TYPE_11__ Driver; TYPE_10__ Light; TYPE_9__ Texture; TYPE_6__* Visual; TYPE_5__ Polygon; TYPE_4__ Depth; TYPE_3__ Hint; scalar_t__ NoRaster; } ;
typedef TYPE_12__ GLcontext ;
typedef scalar_t__ GLboolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;

void FUNC_0( GLcontext *VAR_27 )
{
   GLboolean VAR_28 = VAR_27->Visual->RGBAflag;

   if (VAR_27->RenderMode==VAR_7) {
      if (VAR_27->NoRaster) {
         VAR_27->Driver.TriangleFunc = VAR_21;
         return;
      }
      if (VAR_27->Driver.TriangleFunc) {

      }
      else if (VAR_27->Texture.Enabled
               && VAR_27->Texture.Current
               && VAR_27->Texture.Current->Complete) {
         if ( (VAR_27->Texture.Enabled==VAR_15)
             && VAR_27->Texture.Current2D->MinFilter==VAR_6
             && VAR_27->Texture.Current2D->MagFilter==VAR_6
             && VAR_27->Texture.Current2D->WrapS==VAR_8
             && VAR_27->Texture.Current2D->WrapT==VAR_8
             && VAR_27->Texture.Current2D->Image[0]->Format==VAR_10
             && VAR_27->Texture.Current2D->Image[0]->Border==0
             && (VAR_27->Texture.EnvMode==VAR_1
                 || VAR_27->Texture.EnvMode==VAR_9)
             && VAR_27->Hint.PerspectiveCorrection==VAR_3
             && VAR_27->TextureMatrixType==VAR_13
             && ((VAR_27->RasterMask==VAR_0
                  && VAR_27->Depth.Func==VAR_5
                  && VAR_27->Depth.Mask==VAR_12)
                 || VAR_27->RasterMask==0)
             && VAR_27->Polygon.StippleFlag==VAR_2
             && VAR_27->Visual->EightBitColor) {
            if (VAR_27->RasterMask==VAR_0) {
               VAR_27->Driver.TriangleFunc = VAR_24;
            }
            else {
               VAR_27->Driver.TriangleFunc = VAR_23;
            }
         }
         else {
            GLboolean VAR_29 = VAR_12;

            if (VAR_27->Texture.Enabled & VAR_15) {
               if (VAR_27->Texture.Current2D->MinFilter==
                   VAR_27->Texture.Current2D->MagFilter) {
                  VAR_29 = VAR_2;
               }
            }
            else if (VAR_27->Texture.Enabled & VAR_14) {
               if (VAR_27->Texture.Current1D->MinFilter==
                   VAR_27->Texture.Current1D->MagFilter) {
                  VAR_29 = VAR_2;
               }
            }
            if (VAR_29)
               VAR_27->Driver.TriangleFunc = VAR_20;
            else
               VAR_27->Driver.TriangleFunc = VAR_19;
         }
      }
      else {
  if (VAR_27->Light.ShadeModel==VAR_11) {

            if (VAR_28)
               VAR_27->Driver.TriangleFunc = VAR_26;
            else
               VAR_27->Driver.TriangleFunc = VAR_25;
  }
  else {

            if (VAR_28)
               VAR_27->Driver.TriangleFunc = VAR_18;
            else
               VAR_27->Driver.TriangleFunc = VAR_17;
  }
      }
   }
   else if (VAR_27->RenderMode==VAR_4) {
      VAR_27->Driver.TriangleFunc = VAR_16;
   }
   else {

      VAR_27->Driver.TriangleFunc = VAR_22;
   }
}
