
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {void* dirty; void* sentinel; void* fixUpperEdge; int * nodeUp; TYPE_2__* eUp; } ;
struct TYPE_10__ {TYPE_3__* activeRegion; } ;
struct TYPE_9__ {int env; int dict; } ;
typedef TYPE_1__ GLUtesselator ;
typedef TYPE_2__ GLUhalfEdge ;
typedef TYPE_3__ ActiveRegion ;


 void* VAR_0 ;
 int * FUNC_0 (int ,int *,TYPE_3__*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static ActiveRegion *FUNC_3( GLUtesselator *VAR_1,
         ActiveRegion *VAR_2,
         GLUhalfEdge *VAR_3 )






{
  ActiveRegion *VAR_4 = (ActiveRegion *)FUNC_2( sizeof( ActiveRegion ));
  if (VAR_4 == ((void*)0)) FUNC_1(VAR_1->env,1);

  VAR_4->eUp = VAR_3;

  VAR_4->nodeUp = FUNC_0( VAR_1->dict, VAR_2->nodeUp, VAR_4 );
  if (VAR_4->nodeUp == ((void*)0)) FUNC_1(VAR_1->env,1);
  VAR_4->fixUpperEdge = VAR_0;
  VAR_4->sentinel = VAR_0;
  VAR_4->dirty = VAR_0;

  VAR_3->activeRegion = VAR_4;
  return VAR_4;
}
