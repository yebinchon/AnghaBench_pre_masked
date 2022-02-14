
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_31__ {scalar_t__ fixUpperEdge; TYPE_3__* eUp; } ;
struct TYPE_30__ {struct TYPE_30__* Onext; struct TYPE_30__* Oprev; struct TYPE_30__* Sym; int Dst; int Org; } ;
struct TYPE_29__ {int env; } ;
struct TYPE_28__ {int anEdge; } ;
typedef TYPE_1__ GLUvertex ;
typedef TYPE_2__ GLUtesselator ;
typedef TYPE_3__ GLUhalfEdge ;
typedef TYPE_4__ ActiveRegion ;


 int FUNC_0 (TYPE_2__*,TYPE_4__*,TYPE_3__*,TYPE_3__*,TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ,TYPE_3__*) ;
 int * FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,int) ;

__attribute__((used)) static void FUNC_13( GLUtesselator *VAR_3,
       ActiveRegion *VAR_4, GLUvertex *VAR_5 )





{
  GLUhalfEdge *VAR_6, *VAR_7, *VAR_8, *VAR_9;
  ActiveRegion *VAR_10;

  VAR_6 = VAR_4->eUp;
  if( FUNC_7( VAR_6->Org, VAR_5 )) {



    FUNC_11( VAR_1 );
    FUNC_4( VAR_3, VAR_6, VAR_5->anEdge );
    return;
  }

  if( ! FUNC_7( VAR_6->Dst, VAR_5 )) {

    if (FUNC_10( VAR_6->Sym ) == ((void*)0)) FUNC_12(VAR_3->env,1);
    if( VAR_4->fixUpperEdge ) {

      if ( !FUNC_8( VAR_6->Onext ) ) FUNC_12(VAR_3->env,1);
      VAR_4->fixUpperEdge = VAR_0;
    }
    if ( !FUNC_9( VAR_5->anEdge, VAR_6 ) ) FUNC_12(VAR_3->env,1);
    FUNC_5( VAR_3, VAR_5 );
    return;
  }




  FUNC_11( VAR_1 );
  VAR_4 = FUNC_6( VAR_4 );
  VAR_10 = FUNC_3( VAR_4 );
  VAR_8 = VAR_10->eUp->Sym;
  VAR_7 = VAR_9 = VAR_8->Onext;
  if( VAR_10->fixUpperEdge ) {



    FUNC_11( VAR_7 != VAR_8 );
    FUNC_1( VAR_3, VAR_10 );
    if ( !FUNC_8( VAR_8 ) ) FUNC_12(VAR_3->env,1);
    VAR_8 = VAR_7->Oprev;
  }
  if ( !FUNC_9( VAR_5->anEdge, VAR_8 ) ) FUNC_12(VAR_3->env,1);
  if( ! FUNC_2( VAR_7 )) {

    VAR_7 = ((void*)0);
  }
  FUNC_0( VAR_3, VAR_4, VAR_8->Onext, VAR_9, VAR_7, VAR_2 );
}
