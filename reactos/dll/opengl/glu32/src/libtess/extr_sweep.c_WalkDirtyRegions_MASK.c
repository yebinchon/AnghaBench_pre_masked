
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {scalar_t__ fixUpperEdge; TYPE_2__* eUp; scalar_t__ dirty; } ;
struct TYPE_22__ {scalar_t__ Dst; scalar_t__ Org; } ;
struct TYPE_21__ {scalar_t__ event; int env; } ;
typedef TYPE_1__ GLUtesselator ;
typedef TYPE_2__ GLUhalfEdge ;
typedef TYPE_3__ ActiveRegion ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static void FUNC_9( GLUtesselator *VAR_1, ActiveRegion *VAR_2 )
{
  ActiveRegion *VAR_3 = FUNC_6(VAR_2);
  GLUhalfEdge *VAR_4, *VAR_5;

  for( ;; ) {

    while( VAR_3->dirty ) {
      VAR_2 = VAR_3;
      VAR_3 = FUNC_6(VAR_3);
    }
    if( ! VAR_2->dirty ) {
      VAR_3 = VAR_2;
      VAR_2 = FUNC_5( VAR_2 );
      if( VAR_2 == ((void*)0) || ! VAR_2->dirty ) {

 return;
      }
    }
    VAR_2->dirty = VAR_0;
    VAR_4 = VAR_2->eUp;
    VAR_5 = VAR_3->eUp;

    if( VAR_4->Dst != VAR_5->Dst ) {

      if( FUNC_2( VAR_1, VAR_2 )) {





 if( VAR_3->fixUpperEdge ) {
   FUNC_4( VAR_1, VAR_3 );
   if ( !FUNC_7( VAR_5 ) ) FUNC_8(VAR_1->env,1);
   VAR_3 = FUNC_6( VAR_2 );
   VAR_5 = VAR_3->eUp;
 } else if( VAR_2->fixUpperEdge ) {
   FUNC_4( VAR_1, VAR_2 );
   if ( !FUNC_7( VAR_4 ) ) FUNC_8(VAR_1->env,1);
   VAR_2 = FUNC_5( VAR_3 );
   VAR_4 = VAR_2->eUp;
 }
      }
    }
    if( VAR_4->Org != VAR_5->Org ) {
      if( VAR_4->Dst != VAR_5->Dst
   && ! VAR_2->fixUpperEdge && ! VAR_3->fixUpperEdge
   && (VAR_4->Dst == VAR_1->event || VAR_5->Dst == VAR_1->event) )
      {
 if( FUNC_1( VAR_1, VAR_2 )) {

   return;
 }
      } else {



 (void) FUNC_3( VAR_1, VAR_2 );
      }
    }
    if( VAR_4->Org == VAR_5->Org && VAR_4->Dst == VAR_5->Dst ) {

      FUNC_0( VAR_5, VAR_4 );
      FUNC_4( VAR_1, VAR_2 );
      if ( !FUNC_7( VAR_4 ) ) FUNC_8(VAR_1->env,1);
      VAR_2 = FUNC_5( VAR_3 );
    }
  }
}
