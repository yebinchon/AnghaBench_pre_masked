
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;


struct TYPE_25__ {int pqHandle; } ;
struct TYPE_24__ {int dirty; TYPE_2__* eUp; } ;
struct TYPE_23__ {struct TYPE_23__* Oprev; int Sym; TYPE_6__* Org; int Dst; } ;
struct TYPE_22__ {int env; int pq; } ;
struct TYPE_21__ {int dirty; } ;
typedef TYPE_1__ GLUtesselator ;
typedef TYPE_2__ GLUhalfEdge ;
typedef TYPE_3__ ActiveRegion ;


 scalar_t__ FUNC_0 (int ,TYPE_6__*,TYPE_6__*) ;
 int VAR_0 ;
 TYPE_15__* FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_6__*,TYPE_6__*) ;
 scalar_t__ FUNC_5 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10( GLUtesselator *VAR_2, ActiveRegion *VAR_3 )
{
  ActiveRegion *VAR_4 = FUNC_2(VAR_3);
  GLUhalfEdge *VAR_5 = VAR_3->eUp;
  GLUhalfEdge *VAR_6 = VAR_4->eUp;

  if( FUNC_5( VAR_5->Org, VAR_6->Org )) {
    if( FUNC_0( VAR_6->Dst, VAR_5->Org, VAR_6->Org ) > 0 ) return VAR_0;


    if( ! FUNC_4( VAR_5->Org, VAR_6->Org )) {

      if ( FUNC_7( VAR_6->Sym ) == ((void*)0)) FUNC_8(VAR_2->env,1);
      if ( !FUNC_6( VAR_5, VAR_6->Oprev ) ) FUNC_8(VAR_2->env,1);
      VAR_3->dirty = VAR_4->dirty = VAR_1;

    } else if( VAR_5->Org != VAR_6->Org ) {

      FUNC_9( VAR_2->pq, VAR_5->Org->pqHandle );
      FUNC_3( VAR_2, VAR_6->Oprev, VAR_5 );
    }
  } else {
    if( FUNC_0( VAR_5->Dst, VAR_6->Org, VAR_5->Org ) < 0 ) return VAR_0;


    FUNC_1(VAR_3)->dirty = VAR_3->dirty = VAR_1;
    if (FUNC_7( VAR_5->Sym ) == ((void*)0)) FUNC_8(VAR_2->env,1);
    if ( !FUNC_6( VAR_6->Oprev, VAR_5 ) ) FUNC_8(VAR_2->env,1);
  }
  return VAR_1;
}
