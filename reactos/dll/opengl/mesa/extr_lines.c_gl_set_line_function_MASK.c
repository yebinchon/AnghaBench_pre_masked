
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


struct TYPE_18__ {scalar_t__ LineFunc; } ;
struct TYPE_17__ {scalar_t__ Fog; } ;
struct TYPE_16__ {scalar_t__ Enabled; } ;
struct TYPE_15__ {scalar_t__ Test; } ;
struct TYPE_14__ {scalar_t__ ShadeModel; } ;
struct TYPE_13__ {scalar_t__ Enabled; } ;
struct TYPE_12__ {double Width; scalar_t__ SmoothFlag; scalar_t__ StippleFlag; } ;
struct TYPE_19__ {scalar_t__ RenderMode; TYPE_8__ Driver; TYPE_7__ Hint; TYPE_6__ Fog; TYPE_5__ Depth; TYPE_4__ Light; TYPE_3__ Texture; TYPE_2__ Line; scalar_t__ NoRaster; TYPE_1__* Visual; } ;
struct TYPE_11__ {scalar_t__ RGBAflag; } ;
typedef TYPE_9__ GLcontext ;
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
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;

void FUNC_0( GLcontext *VAR_21 )
{
   GLboolean VAR_22 = VAR_21->Visual->RGBAflag;


   if (VAR_21->RenderMode==VAR_2) {
      if (VAR_21->NoRaster) {
         VAR_21->Driver.LineFunc = VAR_14;
         return;
      }
      if (VAR_21->Driver.LineFunc) {

         VAR_21->Driver.LineFunc = VAR_21->Driver.LineFunc;
      }
      else if (VAR_21->Texture.Enabled) {
         if (VAR_21->Light.ShadeModel==VAR_3) {
            VAR_21->Driver.LineFunc = VAR_20;
         }
         else {
            VAR_21->Driver.LineFunc = VAR_9;
         }
      }
      else if (VAR_21->Line.Width!=1.0 || VAR_21->Line.StippleFlag
               || VAR_21->Line.SmoothFlag || VAR_21->Texture.Enabled) {
         if (VAR_21->Light.ShadeModel==VAR_3) {
            if (VAR_22)
               VAR_21->Driver.LineFunc = VAR_13;
            else
               VAR_21->Driver.LineFunc = VAR_12;
         }
         else {
            if (VAR_22)
               VAR_21->Driver.LineFunc = VAR_11;
            else
               VAR_21->Driver.LineFunc = VAR_10;
         }
      }
      else {
  if (VAR_21->Light.ShadeModel==VAR_3) {

            if (VAR_21->Depth.Test
         || (VAR_21->Fog.Enabled && VAR_21->Hint.Fog==VAR_1)) {
               if (VAR_22)
                  VAR_21->Driver.LineFunc = VAR_19;
               else
                  VAR_21->Driver.LineFunc = VAR_17;
            }
            else {
               if (VAR_22)
                  VAR_21->Driver.LineFunc = VAR_18;
               else
                  VAR_21->Driver.LineFunc = VAR_16;
            }
  }
         else {

            if (VAR_21->Depth.Test
                || (VAR_21->Fog.Enabled && VAR_21->Hint.Fog==VAR_1)) {
               if (VAR_22)
                  VAR_21->Driver.LineFunc = VAR_8;
               else
                  VAR_21->Driver.LineFunc = VAR_6;
            }
            else {
               if (VAR_22)
                  VAR_21->Driver.LineFunc = VAR_7;
               else
                  VAR_21->Driver.LineFunc = VAR_5;
            }
         }
      }
   }
   else if (VAR_21->RenderMode==VAR_0) {
      VAR_21->Driver.LineFunc = VAR_4;
   }
   else {

      VAR_21->Driver.LineFunc = VAR_15;
   }
}
