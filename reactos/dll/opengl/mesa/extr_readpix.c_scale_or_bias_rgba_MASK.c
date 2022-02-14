
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float RedScale; float RedBias; float GreenScale; float GreenBias; float BlueScale; float BlueBias; float AlphaScale; float AlphaBias; } ;
struct TYPE_5__ {TYPE_1__ Pixel; } ;
typedef TYPE_2__ GLcontext ;
typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static GLboolean FUNC_0( GLcontext *VAR_2 )
{
   if (VAR_2->Pixel.RedScale!=1.0F || VAR_2->Pixel.RedBias!=0.0F ||
       VAR_2->Pixel.GreenScale!=1.0F || VAR_2->Pixel.GreenBias!=0.0F ||
       VAR_2->Pixel.BlueScale!=1.0F || VAR_2->Pixel.BlueBias!=0.0F ||
       VAR_2->Pixel.AlphaScale!=1.0F || VAR_2->Pixel.AlphaBias!=0.0F) {
      return VAR_1;
   }
   else {
      return VAR_0;
   }
}
