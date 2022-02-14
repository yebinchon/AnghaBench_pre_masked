
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_20__ {TYPE_1__* eUp; } ;
struct TYPE_19__ {int mesh; int dict; int event; int pq; int fatalError; } ;
struct TYPE_18__ {int anEdge; } ;
struct TYPE_17__ {int Org; } ;
typedef TYPE_2__ GLUvertex ;
typedef TYPE_3__ GLUtesselator ;
typedef TYPE_4__ ActiveRegion ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;

int FUNC_15( GLUtesselator *VAR_1 )







{
  GLUvertex *VAR_2, *VAR_3;

  VAR_1->fatalError = VAR_0;







  FUNC_5( VAR_1 );
  if ( !FUNC_4( VAR_1 ) ) return 0;
  FUNC_3( VAR_1 );


  while( (VAR_2 = (GLUvertex *)FUNC_13( VAR_1->pq )) != ((void*)0) ) {
    for( ;; ) {
      VAR_3 = (GLUvertex *)FUNC_14( VAR_1->pq );
      if( VAR_3 == ((void*)0) || ! FUNC_9( VAR_3, VAR_2 )) break;
      VAR_3 = (GLUvertex *)FUNC_13( VAR_1->pq );
      FUNC_7( VAR_1, VAR_2->anEdge, VAR_3->anEdge );
    }
    FUNC_8( VAR_1, VAR_2 );
  }



  VAR_1->event = ((ActiveRegion *) FUNC_11( FUNC_12( VAR_1->dict )))->eUp->Org;
  FUNC_0( VAR_1 );
  FUNC_1( VAR_1 );
  FUNC_2( VAR_1 );

  if ( !FUNC_6( VAR_1->mesh ) ) return 0;
  FUNC_10( VAR_1->mesh );

  return 1;
}
