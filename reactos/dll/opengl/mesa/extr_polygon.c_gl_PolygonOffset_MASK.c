
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* OffsetUnits; void* OffsetFactor; } ;
struct TYPE_7__ {TYPE_1__ Polygon; } ;
typedef void* GLfloat ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

void FUNC_2( GLcontext *VAR_1,
                       GLfloat VAR_2, GLfloat VAR_3 )
{
   if (FUNC_0(VAR_1)) {
      FUNC_1( VAR_1, VAR_0, "glPolygonOffset" );
      return;
   }
   VAR_1->Polygon.OffsetFactor = VAR_2;
   VAR_1->Polygon.OffsetUnits = VAR_3;
}
