
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* eUp; } ;
struct TYPE_7__ {int * Dst; } ;
typedef int GLUvertex ;
typedef TYPE_2__ ActiveRegion ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static ActiveRegion *FUNC_1( ActiveRegion *VAR_0 )
{
  GLUvertex *VAR_1 = VAR_0->eUp->Dst;


  do {
    VAR_0 = FUNC_0( VAR_0 );
  } while( VAR_0->eUp->Dst == VAR_1 );
  return VAR_0;
}
