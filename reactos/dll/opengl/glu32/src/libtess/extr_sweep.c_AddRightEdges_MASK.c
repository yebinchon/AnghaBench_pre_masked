
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_28__ {scalar_t__ windingNumber; void* dirty; int inside; TYPE_1__* eUp; } ;
struct TYPE_27__ {scalar_t__ Org; scalar_t__ winding; int Oprev; struct TYPE_27__* Onext; int Sym; int Dst; } ;
struct TYPE_26__ {int env; } ;
struct TYPE_25__ {TYPE_3__* Sym; TYPE_3__* Rprev; } ;
typedef scalar_t__ GLboolean ;
typedef TYPE_2__ GLUtesselator ;
typedef TYPE_3__ GLUhalfEdge ;
typedef TYPE_4__ ActiveRegion ;


 int FUNC_0 (TYPE_2__*,TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 TYPE_4__* FUNC_5 (TYPE_4__*) ;
 void* VAR_1 ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ,TYPE_3__*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static void FUNC_12( GLUtesselator *VAR_2, ActiveRegion *VAR_3,
       GLUhalfEdge *VAR_4, GLUhalfEdge *VAR_5, GLUhalfEdge *VAR_6,
       GLboolean VAR_7 )
{
  ActiveRegion *VAR_8, *VAR_9;
  GLUhalfEdge *VAR_10, *VAR_11;
  int VAR_12 = VAR_1;


  VAR_10 = VAR_4;
  do {
    FUNC_10( FUNC_6( VAR_10->Org, VAR_10->Dst ));
    FUNC_0( VAR_2, VAR_3, VAR_10->Sym );
    VAR_10 = VAR_10->Onext;
  } while ( VAR_10 != VAR_5 );





  if( VAR_6 == ((void*)0) ) {
    VAR_6 = FUNC_5( VAR_3 )->eUp->Rprev;
  }
  VAR_9 = VAR_3;
  VAR_11 = VAR_6;
  for( ;; ) {
    VAR_8 = FUNC_5( VAR_9 );
    VAR_10 = VAR_8->eUp->Sym;
    if( VAR_10->Org != VAR_11->Org ) break;

    if( VAR_10->Onext != VAR_11 ) {

      if ( !FUNC_9( VAR_10->Oprev, VAR_10 ) ) FUNC_11(VAR_2->env,1);
      if ( !FUNC_9( VAR_11->Oprev, VAR_10 ) ) FUNC_11(VAR_2->env,1);
    }

    VAR_8->windingNumber = VAR_9->windingNumber - VAR_10->winding;
    VAR_8->inside = FUNC_4( VAR_2, VAR_8->windingNumber );




    VAR_9->dirty = VAR_1;
    if( ! VAR_12 && FUNC_2( VAR_2, VAR_9 )) {
      FUNC_1( VAR_10, VAR_11 );
      FUNC_3( VAR_2, VAR_9 );
      if ( !FUNC_8( VAR_11 ) ) FUNC_11(VAR_2->env,1);
    }
    VAR_12 = VAR_0;
    VAR_9 = VAR_8;
    VAR_11 = VAR_10;
  }
  VAR_9->dirty = VAR_1;
  FUNC_10( VAR_9->windingNumber - VAR_10->winding == VAR_8->windingNumber );

  if( VAR_7 ) {

    FUNC_7( VAR_2, VAR_9 );
  }
}
