
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ HitMinZ; scalar_t__ HitMaxZ; int HitFlag; } ;
struct TYPE_5__ {TYPE_1__ Select; } ;
typedef scalar_t__ GLfloat ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;

void FUNC_0( GLcontext *VAR_1, GLfloat VAR_2 )
{
   VAR_1->Select.HitFlag = VAR_0;
   if (VAR_2 < VAR_1->Select.HitMinZ) {
      VAR_1->Select.HitMinZ = VAR_2;
   }
   if (VAR_2 > VAR_1->Select.HitMaxZ) {
      VAR_1->Select.HitMaxZ = VAR_2;
   }
}
