
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* eUp; } ;
struct TYPE_13__ {TYPE_1__* eUp; scalar_t__ fixUpperEdge; } ;
struct TYPE_12__ {int Sym; } ;
struct TYPE_11__ {int Lnext; int * Org; } ;
typedef int GLUvertex ;
typedef int GLUhalfEdge ;
typedef TYPE_3__ ActiveRegion ;


 int FUNC_0 (TYPE_3__*,int *) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 TYPE_6__* FUNC_2 (TYPE_3__*) ;
 int * FUNC_3 (int ,int ) ;

__attribute__((used)) static ActiveRegion *FUNC_4( ActiveRegion *VAR_0 )
{
  GLUvertex *VAR_1 = VAR_0->eUp->Org;
  GLUhalfEdge *VAR_2;


  do {
    VAR_0 = FUNC_1( VAR_0 );
  } while( VAR_0->eUp->Org == VAR_1 );




  if( VAR_0->fixUpperEdge ) {
    VAR_2 = FUNC_3( FUNC_2(VAR_0)->eUp->Sym, VAR_0->eUp->Lnext );
    if (VAR_2 == ((void*)0)) return ((void*)0);
    if ( !FUNC_0( VAR_0, VAR_2 ) ) return ((void*)0);
    VAR_0 = FUNC_1( VAR_0 );
  }
  return VAR_0;
}
