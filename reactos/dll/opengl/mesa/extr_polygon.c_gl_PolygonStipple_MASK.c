
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ StippleFlag; } ;
struct TYPE_7__ {int* PolygonStipple; int NewState; TYPE_1__ Polygon; } ;
typedef int GLubyte ;
typedef int GLint ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

void FUNC_2( GLcontext *VAR_2, const GLubyte *VAR_3 )
{
   GLint VAR_4;

   if (FUNC_0(VAR_2)) {
      FUNC_1( VAR_2, VAR_0, "glPolygonStipple" );
      return;
   }


   for (VAR_4=0;VAR_4<32;VAR_4++) {
      VAR_2->PolygonStipple[VAR_4] = (VAR_3[VAR_4*4+0] << 24)
                             | (VAR_3[VAR_4*4+1] << 16)
                             | (VAR_3[VAR_4*4+2] << 8)
                             | (VAR_3[VAR_4*4+3]);
   }

   if (VAR_2->Polygon.StippleFlag) {
      VAR_2->NewState |= VAR_1;
   }
}
