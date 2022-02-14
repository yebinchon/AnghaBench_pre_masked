
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* QuadFunc; } ;
struct TYPE_5__ {scalar_t__ RenderMode; TYPE_1__ Driver; scalar_t__ NoRaster; } ;
typedef TYPE_2__ GLcontext ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;

void FUNC_0( GLcontext *VAR_3 )
{
   if (VAR_3->RenderMode==VAR_0) {
      if (VAR_3->NoRaster) {
         VAR_3->Driver.QuadFunc = VAR_1;
      }
      else if (VAR_3->Driver.QuadFunc) {

      }
      else {
         VAR_3->Driver.QuadFunc = VAR_2;
      }
   }
   else {

      VAR_3->Driver.QuadFunc = VAR_2;
   }
}
