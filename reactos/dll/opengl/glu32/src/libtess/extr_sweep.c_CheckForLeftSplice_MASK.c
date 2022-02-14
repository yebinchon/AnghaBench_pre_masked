
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;


struct TYPE_21__ {int dirty; int inside; TYPE_4__* eUp; } ;
struct TYPE_20__ {TYPE_2__* Rface; struct TYPE_20__* Sym; struct TYPE_20__* Lnext; int Org; int Dst; TYPE_1__* Lface; } ;
struct TYPE_19__ {int env; } ;
struct TYPE_18__ {int inside; } ;
struct TYPE_17__ {int inside; } ;
struct TYPE_16__ {int dirty; } ;
typedef TYPE_3__ GLUtesselator ;
typedef TYPE_4__ GLUhalfEdge ;
typedef TYPE_5__ ActiveRegion ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 TYPE_12__* FUNC_1 (TYPE_5__*) ;
 TYPE_5__* FUNC_2 (TYPE_5__*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_4__*) ;
 TYPE_4__* FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9( GLUtesselator *VAR_2, ActiveRegion *VAR_3 )
{
  ActiveRegion *VAR_4 = FUNC_2(VAR_3);
  GLUhalfEdge *VAR_5 = VAR_3->eUp;
  GLUhalfEdge *VAR_6 = VAR_4->eUp;
  GLUhalfEdge *VAR_7;

  FUNC_7( ! FUNC_3( VAR_5->Dst, VAR_6->Dst ));

  if( FUNC_4( VAR_5->Dst, VAR_6->Dst )) {
    if( FUNC_0( VAR_5->Dst, VAR_6->Dst, VAR_5->Org ) < 0 ) return VAR_0;


    FUNC_1(VAR_3)->dirty = VAR_3->dirty = VAR_1;
    VAR_7 = FUNC_6( VAR_5 );
    if (VAR_7 == ((void*)0)) FUNC_8(VAR_2->env,1);
    if ( !FUNC_5( VAR_6->Sym, VAR_7 ) ) FUNC_8(VAR_2->env,1);
    VAR_7->Lface->inside = VAR_3->inside;
  } else {
    if( FUNC_0( VAR_6->Dst, VAR_5->Dst, VAR_6->Org ) > 0 ) return VAR_0;


    VAR_3->dirty = VAR_4->dirty = VAR_1;
    VAR_7 = FUNC_6( VAR_6 );
    if (VAR_7 == ((void*)0)) FUNC_8(VAR_2->env,1);
    if ( !FUNC_5( VAR_5->Lnext, VAR_6->Sym ) ) FUNC_8(VAR_2->env,1);
    VAR_7->Rface->inside = VAR_3->inside;
  }
  return VAR_1;
}
