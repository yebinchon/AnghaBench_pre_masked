
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ RowLength; scalar_t__ SkipPixels; scalar_t__ SkipRows; scalar_t__ SwapBytes; scalar_t__ LsbFirst; } ;
struct TYPE_7__ {double RedBias; double RedScale; double GreenBias; double GreenScale; double BlueBias; double BlueScale; double AlphaBias; double AlphaScale; scalar_t__ MapColorFlag; double ZoomX; double ZoomY; } ;
struct TYPE_9__ {scalar_t__ FastDrawPixels; TYPE_3__ Unpack; TYPE_2__ Pixel; TYPE_1__* Visual; } ;
struct TYPE_6__ {scalar_t__ RGBAflag; scalar_t__ EightBitColor; } ;
typedef TYPE_4__ GLcontext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0( GLcontext *VAR_2 )
{
   if (VAR_2->Visual->RGBAflag==VAR_1 &&
       VAR_2->Visual->EightBitColor &&
       VAR_2->Pixel.RedBias==0.0 && VAR_2->Pixel.RedScale==1.0 &&
       VAR_2->Pixel.GreenBias==0.0 && VAR_2->Pixel.GreenScale==1.0 &&
       VAR_2->Pixel.BlueBias==0.0 && VAR_2->Pixel.BlueScale==1.0 &&
       VAR_2->Pixel.AlphaBias==0.0 && VAR_2->Pixel.AlphaScale==1.0 &&
       VAR_2->Pixel.MapColorFlag==VAR_0 &&
       VAR_2->Pixel.ZoomX==1.0 && VAR_2->Pixel.ZoomY==1.0 &&

       VAR_2->Unpack.RowLength==0 &&
       VAR_2->Unpack.SkipPixels==0 &&
       VAR_2->Unpack.SkipRows==0 &&
       VAR_2->Unpack.SwapBytes==0 &&
       VAR_2->Unpack.LsbFirst==0) {
      VAR_2->FastDrawPixels = VAR_1;
   }
   else {
      VAR_2->FastDrawPixels = VAR_0;
   }
}
