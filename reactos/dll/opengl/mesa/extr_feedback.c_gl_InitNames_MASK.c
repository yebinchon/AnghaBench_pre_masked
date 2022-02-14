
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {double HitMinZ; double HitMaxZ; int HitFlag; scalar_t__ NameStackDepth; } ;
struct TYPE_7__ {TYPE_1__ Select; } ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

void FUNC_2( GLcontext *VAR_2 )
{
   if (FUNC_0(VAR_2)) {
      FUNC_1( VAR_2, VAR_1, "glInitNames" );
   }
   VAR_2->Select.NameStackDepth = 0;
   VAR_2->Select.HitFlag = VAR_0;
   VAR_2->Select.HitMinZ = 1.0;
   VAR_2->Select.HitMaxZ = 0.0;
}
