
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


struct TYPE_34__ {TYPE_4__* eUp; } ;
struct TYPE_33__ {scalar_t__ Dst; TYPE_2__* Sym; struct TYPE_33__* Onext; int Lprev; struct TYPE_33__* Oprev; int Org; } ;
struct TYPE_32__ {int env; int event; } ;
struct TYPE_31__ {TYPE_1__* activeRegion; } ;
struct TYPE_30__ {void* fixUpperEdge; } ;
typedef TYPE_3__ GLUtesselator ;
typedef TYPE_4__ GLUhalfEdge ;
typedef TYPE_5__ ActiveRegion ;


 int FUNC_0 (TYPE_3__*,TYPE_5__*,TYPE_4__*,TYPE_4__*,TYPE_4__*,void*) ;
 int FUNC_1 (TYPE_3__*,TYPE_5__*) ;
 void* VAR_0 ;
 TYPE_4__* FUNC_2 (TYPE_3__*,TYPE_5__*,TYPE_5__*) ;
 TYPE_5__* FUNC_3 (TYPE_5__*) ;
 void* VAR_1 ;
 TYPE_5__* FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_3__*,TYPE_5__*) ;
 TYPE_4__* FUNC_8 (int ,TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static void FUNC_11( GLUtesselator *VAR_2, ActiveRegion *VAR_3,
    GLUhalfEdge *VAR_4 )
{
  GLUhalfEdge *VAR_5;
  GLUhalfEdge *VAR_6 = VAR_4->Onext;
  ActiveRegion *VAR_7 = FUNC_3(VAR_3);
  GLUhalfEdge *VAR_8 = VAR_3->eUp;
  GLUhalfEdge *VAR_9 = VAR_7->eUp;
  int VAR_10 = VAR_0;

  if( VAR_8->Dst != VAR_9->Dst ) {
    (void) FUNC_1( VAR_2, VAR_3 );
  }




  if( FUNC_5( VAR_8->Org, VAR_2->event )) {
    if ( !FUNC_9( VAR_6->Oprev, VAR_8 ) ) FUNC_10(VAR_2->env,1);
    VAR_3 = FUNC_4( VAR_3 );
    if (VAR_3 == ((void*)0)) FUNC_10(VAR_2->env,1);
    VAR_6 = FUNC_3( VAR_3 )->eUp;
    FUNC_2( VAR_2, FUNC_3(VAR_3), VAR_7 );
    VAR_10 = VAR_1;
  }
  if( FUNC_5( VAR_9->Org, VAR_2->event )) {
    if ( !FUNC_9( VAR_4, VAR_9->Oprev ) ) FUNC_10(VAR_2->env,1);
    VAR_4 = FUNC_2( VAR_2, VAR_7, ((void*)0) );
    VAR_10 = VAR_1;
  }
  if( VAR_10 ) {
    FUNC_0( VAR_2, VAR_3, VAR_4->Onext, VAR_6, VAR_6, VAR_1 );
    return;
  }




  if( FUNC_6( VAR_9->Org, VAR_8->Org )) {
    VAR_5 = VAR_9->Oprev;
  } else {
    VAR_5 = VAR_8;
  }
  VAR_5 = FUNC_8( VAR_4->Lprev, VAR_5 );
  if (VAR_5 == ((void*)0)) FUNC_10(VAR_2->env,1);




  FUNC_0( VAR_2, VAR_3, VAR_5, VAR_5->Onext, VAR_5->Onext, VAR_0 );
  VAR_5->Sym->activeRegion->fixUpperEdge = VAR_1;
  FUNC_7( VAR_2, VAR_3 );
}
