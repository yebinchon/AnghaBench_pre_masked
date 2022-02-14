
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* eUp; int fixUpperEdge; } ;
struct TYPE_6__ {TYPE_2__* activeRegion; } ;
typedef TYPE_1__ GLUhalfEdge ;
typedef TYPE_2__ ActiveRegion ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2( ActiveRegion *VAR_1, GLUhalfEdge *VAR_2 )



{
  FUNC_1( VAR_1->fixUpperEdge );
  if ( !FUNC_0( VAR_1->eUp ) ) return 0;
  VAR_1->fixUpperEdge = VAR_0;
  VAR_1->eUp = VAR_2;
  VAR_2->activeRegion = VAR_1;

  return 1;
}
