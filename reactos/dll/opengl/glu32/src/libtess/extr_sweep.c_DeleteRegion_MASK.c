
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int nodeUp; TYPE_1__* eUp; scalar_t__ fixUpperEdge; } ;
struct TYPE_8__ {int dict; } ;
struct TYPE_7__ {scalar_t__ winding; int * activeRegion; } ;
typedef TYPE_2__ GLUtesselator ;
typedef TYPE_3__ ActiveRegion ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_3( GLUtesselator *VAR_0, ActiveRegion *VAR_1 )
{
  if( VAR_1->fixUpperEdge ) {




    FUNC_0( VAR_1->eUp->winding == 0 );
  }
  VAR_1->eUp->activeRegion = ((void*)0);
  FUNC_1( VAR_0->dict, VAR_1->nodeUp );
  FUNC_2( VAR_1 );
}
