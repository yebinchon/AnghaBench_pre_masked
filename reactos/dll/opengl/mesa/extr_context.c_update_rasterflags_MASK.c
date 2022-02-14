
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ DrawBuffer; scalar_t__ ColorMask; scalar_t__ IndexMask; scalar_t__ SWmasking; scalar_t__ SWLogicOpEnabled; scalar_t__ BlendEnabled; scalar_t__ AlphaEnabled; } ;
struct TYPE_15__ {scalar_t__ X; scalar_t__ Width; scalar_t__ Y; scalar_t__ Height; } ;
struct TYPE_14__ {scalar_t__ Enabled; } ;
struct TYPE_13__ {scalar_t__ Enabled; } ;
struct TYPE_12__ {scalar_t__ Enabled; } ;
struct TYPE_11__ {scalar_t__ Test; } ;
struct TYPE_19__ {int RasterMask; TYPE_8__ Color; TYPE_7__* Visual; TYPE_6__* Buffer; TYPE_5__ Viewport; TYPE_4__ Stencil; TYPE_3__ Scissor; TYPE_2__ Fog; TYPE_1__ Depth; } ;
struct TYPE_17__ {scalar_t__ RGBAflag; scalar_t__ BackAlphaEnabled; scalar_t__ FrontAlphaEnabled; } ;
struct TYPE_16__ {scalar_t__ Width; scalar_t__ Height; } ;
typedef TYPE_9__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_0( GLcontext *VAR_14 )
{
   VAR_14->RasterMask = 0;

   if (VAR_14->Color.AlphaEnabled) VAR_14->RasterMask |= VAR_1;
   if (VAR_14->Color.BlendEnabled) VAR_14->RasterMask |= VAR_2;
   if (VAR_14->Depth.Test) VAR_14->RasterMask |= VAR_3;
   if (VAR_14->Fog.Enabled) VAR_14->RasterMask |= VAR_4;
   if (VAR_14->Color.SWLogicOpEnabled) VAR_14->RasterMask |= VAR_8;
   if (VAR_14->Scissor.Enabled) VAR_14->RasterMask |= VAR_11;
   if (VAR_14->Stencil.Enabled) VAR_14->RasterMask |= VAR_12;
   if (VAR_14->Color.SWmasking) VAR_14->RasterMask |= VAR_9;
   if (VAR_14->Visual->FrontAlphaEnabled) VAR_14->RasterMask |= VAR_0;
   if (VAR_14->Visual->BackAlphaEnabled) VAR_14->RasterMask |= VAR_0;

   if ( VAR_14->Viewport.X<0
       || VAR_14->Viewport.X + VAR_14->Viewport.Width > VAR_14->Buffer->Width
       || VAR_14->Viewport.Y<0
       || VAR_14->Viewport.Y + VAR_14->Viewport.Height > VAR_14->Buffer->Height) {
      VAR_14->RasterMask |= VAR_13;
   }


   if (VAR_14->Color.DrawBuffer==VAR_6) {
      VAR_14->RasterMask |= VAR_5;
   }


   if (VAR_14->Color.DrawBuffer==VAR_7) {
      VAR_14->RasterMask |= VAR_10;
   }
   else if (VAR_14->Visual->RGBAflag && VAR_14->Color.ColorMask==0) {
      VAR_14->RasterMask |= VAR_10;
   }
   else if (!VAR_14->Visual->RGBAflag && VAR_14->Color.IndexMask==0) {
      VAR_14->RasterMask |= VAR_10;
   }
}
