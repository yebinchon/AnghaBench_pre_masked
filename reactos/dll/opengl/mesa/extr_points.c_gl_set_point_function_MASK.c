
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ PointsFunc; } ;
struct TYPE_9__ {double Size; scalar_t__ SmoothFlag; } ;
struct TYPE_8__ {scalar_t__ Enabled; } ;
struct TYPE_11__ {scalar_t__ RenderMode; TYPE_4__ Driver; TYPE_3__ Point; TYPE_2__ Texture; scalar_t__ NoRaster; TYPE_1__* Visual; } ;
struct TYPE_7__ {scalar_t__ RGBAflag; } ;
typedef TYPE_5__ GLcontext ;
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

void FUNC_0( GLcontext *VAR_11 )
{
   GLboolean VAR_12 = VAR_11->Visual->RGBAflag;

   if (VAR_11->RenderMode==VAR_1) {
      if (VAR_11->NoRaster) {
         VAR_11->Driver.PointsFunc = VAR_6;
         return;
      }
      if (VAR_11->Driver.PointsFunc) {

         VAR_11->Driver.PointsFunc = VAR_11->Driver.PointsFunc;
      }
      else {
         if (VAR_11->Point.SmoothFlag && VAR_12) {
            VAR_11->Driver.PointsFunc = VAR_2;
         }
         else if (VAR_11->Texture.Enabled) {
     VAR_11->Driver.PointsFunc = VAR_10;
         }
         else if (VAR_11->Point.Size==1.0) {

            if (VAR_12)
               VAR_11->Driver.PointsFunc = VAR_9;
            else
               VAR_11->Driver.PointsFunc = VAR_8;
         }
         else {

            if (VAR_12)
               VAR_11->Driver.PointsFunc = VAR_5;
            else
               VAR_11->Driver.PointsFunc = VAR_4;
         }
      }
   }
   else if (VAR_11->RenderMode==VAR_0) {
      VAR_11->Driver.PointsFunc = VAR_3;
   }
   else {

      VAR_11->Driver.PointsFunc = VAR_7;
   }

}
