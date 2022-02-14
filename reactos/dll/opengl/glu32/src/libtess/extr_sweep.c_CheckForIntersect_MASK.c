
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_53__ TYPE_4__ ;
typedef struct TYPE_52__ TYPE_3__ ;
typedef struct TYPE_51__ TYPE_2__ ;
typedef struct TYPE_50__ TYPE_24__ ;
typedef struct TYPE_49__ TYPE_1__ ;


struct TYPE_53__ {int dirty; TYPE_3__* eUp; int fixUpperEdge; } ;
struct TYPE_52__ {TYPE_1__* Org; struct TYPE_52__* Oprev; struct TYPE_52__* Sym; struct TYPE_52__* Rprev; struct TYPE_52__* Onext; struct TYPE_52__* Lnext; TYPE_1__* Dst; } ;
struct TYPE_51__ {int env; int * pq; TYPE_1__* event; } ;
struct TYPE_50__ {int dirty; } ;
struct TYPE_49__ {scalar_t__ t; scalar_t__ s; scalar_t__ pqHandle; } ;
typedef scalar_t__ GLdouble ;
typedef TYPE_1__ GLUvertex ;
typedef TYPE_2__ GLUtesselator ;
typedef TYPE_3__ GLUhalfEdge ;
typedef TYPE_4__ ActiveRegion ;


 int FUNC_0 (TYPE_2__*,TYPE_4__*,TYPE_3__*,TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int VAR_0 ;
 TYPE_3__* FUNC_4 (TYPE_2__*,TYPE_4__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 TYPE_24__* FUNC_8 (TYPE_4__*) ;
 TYPE_4__* FUNC_9 (TYPE_4__*) ;
 int VAR_2 ;
 TYPE_4__* FUNC_10 (TYPE_4__*) ;
 TYPE_4__* FUNC_11 (TYPE_4__*) ;
 scalar_t__ FUNC_12 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_15 (TYPE_3__*,TYPE_3__*) ;
 int * FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_21( GLUtesselator *VAR_3, ActiveRegion *VAR_4 )
{
  ActiveRegion *VAR_5 = FUNC_9(VAR_4);
  GLUhalfEdge *VAR_6 = VAR_4->eUp;
  GLUhalfEdge *VAR_7 = VAR_5->eUp;
  GLUvertex *VAR_8 = VAR_6->Org;
  GLUvertex *VAR_9 = VAR_7->Org;
  GLUvertex *VAR_10 = VAR_6->Dst;
  GLUvertex *VAR_11 = VAR_7->Dst;
  GLdouble VAR_12, VAR_13;
  GLUvertex VAR_14, *VAR_15;
  GLUhalfEdge *VAR_16;

  FUNC_17( ! FUNC_12( VAR_11, VAR_10 ));
  FUNC_17( FUNC_3( VAR_10, VAR_3->event, VAR_8 ) <= 0 );
  FUNC_17( FUNC_3( VAR_11, VAR_3->event, VAR_9 ) >= 0 );
  FUNC_17( VAR_8 != VAR_3->event && VAR_9 != VAR_3->event );
  FUNC_17( ! VAR_4->fixUpperEdge && ! VAR_5->fixUpperEdge );

  if( VAR_8 == VAR_9 ) return VAR_0;

  VAR_12 = FUNC_7( VAR_8->t, VAR_10->t );
  VAR_13 = FUNC_6( VAR_9->t, VAR_11->t );
  if( VAR_12 > VAR_13 ) return VAR_0;

  if( FUNC_13( VAR_8, VAR_9 )) {
    if( FUNC_3( VAR_11, VAR_8, VAR_9 ) > 0 ) return VAR_0;
  } else {
    if( FUNC_3( VAR_10, VAR_9, VAR_8 ) < 0 ) return VAR_0;
  }


  FUNC_2( VAR_3 );

  FUNC_14( VAR_10, VAR_8, VAR_11, VAR_9, &VAR_14 );

  FUNC_17( FUNC_7( VAR_8->t, VAR_10->t ) <= VAR_14.t );
  FUNC_17( VAR_14.t <= FUNC_6( VAR_9->t, VAR_11->t ));
  FUNC_17( FUNC_7( VAR_11->s, VAR_10->s ) <= VAR_14.s );
  FUNC_17( VAR_14.s <= FUNC_6( VAR_9->s, VAR_8->s ));

  if( FUNC_13( &VAR_14, VAR_3->event )) {






    VAR_14.s = VAR_3->event->s;
    VAR_14.t = VAR_3->event->t;
  }






  VAR_15 = FUNC_13( VAR_8, VAR_9 ) ? VAR_8 : VAR_9;
  if( FUNC_13( VAR_15, &VAR_14 )) {
    VAR_14.s = VAR_15->s;
    VAR_14.t = VAR_15->t;
  }

  if( FUNC_12( &VAR_14, VAR_8 ) || FUNC_12( &VAR_14, VAR_9 )) {

    (void) FUNC_1( VAR_3, VAR_4 );
    return VAR_0;
  }

  if( (! FUNC_12( VAR_10, VAR_3->event )
   && FUNC_3( VAR_10, VAR_3->event, &VAR_14 ) >= 0)
      || (! FUNC_12( VAR_11, VAR_3->event )
   && FUNC_3( VAR_11, VAR_3->event, &VAR_14 ) <= 0 ))
  {




    if( VAR_11 == VAR_3->event ) {

      if (FUNC_16( VAR_6->Sym ) == ((void*)0)) FUNC_18(VAR_3->env,1);
      if ( !FUNC_15( VAR_7->Sym, VAR_6 ) ) FUNC_18(VAR_3->env,1);
      VAR_4 = FUNC_10( VAR_4 );
      if (VAR_4 == ((void*)0)) FUNC_18(VAR_3->env,1);
      VAR_6 = FUNC_9(VAR_4)->eUp;
      FUNC_4( VAR_3, FUNC_9(VAR_4), VAR_5 );
      FUNC_0( VAR_3, VAR_4, VAR_6->Oprev, VAR_6, VAR_6, VAR_2 );
      return VAR_2;
    }
    if( VAR_10 == VAR_3->event ) {

      if (FUNC_16( VAR_7->Sym ) == ((void*)0)) FUNC_18(VAR_3->env,1);
      if ( !FUNC_15( VAR_6->Lnext, VAR_7->Oprev ) ) FUNC_18(VAR_3->env,1);
      VAR_5 = VAR_4;
      VAR_4 = FUNC_11( VAR_4 );
      VAR_16 = FUNC_9(VAR_4)->eUp->Rprev;
      VAR_5->eUp = VAR_7->Oprev;
      VAR_7 = FUNC_4( VAR_3, VAR_5, ((void*)0) );
      FUNC_0( VAR_3, VAR_4, VAR_7->Onext, VAR_6->Rprev, VAR_16, VAR_2 );
      return VAR_2;
    }




    if( FUNC_3( VAR_10, VAR_3->event, &VAR_14 ) >= 0 ) {
      FUNC_8(VAR_4)->dirty = VAR_4->dirty = VAR_2;
      if (FUNC_16( VAR_6->Sym ) == ((void*)0)) FUNC_18(VAR_3->env,1);
      VAR_6->Org->s = VAR_3->event->s;
      VAR_6->Org->t = VAR_3->event->t;
    }
    if( FUNC_3( VAR_11, VAR_3->event, &VAR_14 ) <= 0 ) {
      VAR_4->dirty = VAR_5->dirty = VAR_2;
      if (FUNC_16( VAR_7->Sym ) == ((void*)0)) FUNC_18(VAR_3->env,1);
      VAR_7->Org->s = VAR_3->event->s;
      VAR_7->Org->t = VAR_3->event->t;
    }

    return VAR_0;
  }
  if (FUNC_16( VAR_6->Sym ) == ((void*)0)) FUNC_18(VAR_3->env,1);
  if (FUNC_16( VAR_7->Sym ) == ((void*)0)) FUNC_18(VAR_3->env,1);
  if ( !FUNC_15( VAR_7->Oprev, VAR_6 ) ) FUNC_18(VAR_3->env,1);
  VAR_6->Org->s = VAR_14.s;
  VAR_6->Org->t = VAR_14.t;
  VAR_6->Org->pqHandle = FUNC_20( VAR_3->pq, VAR_6->Org );
  if (VAR_6->Org->pqHandle == VAR_1) {
     FUNC_19(VAR_3->pq);
     VAR_3->pq = ((void*)0);
     FUNC_18(VAR_3->env,1);
  }
  FUNC_5( VAR_3, VAR_6->Org, VAR_8, VAR_10, VAR_9, VAR_11 );
  FUNC_8(VAR_4)->dirty = VAR_4->dirty = VAR_5->dirty = VAR_2;
  return VAR_0;
}
