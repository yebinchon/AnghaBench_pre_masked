
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* anEdge; } ;
struct TYPE_11__ {int anEdge; } ;
struct TYPE_10__ {int Oprev; struct TYPE_10__* Onext; TYPE_6__* Org; TYPE_5__* Lface; TYPE_5__* Rface; struct TYPE_10__* Sym; } ;
typedef TYPE_1__ GLUhalfEdge ;
typedef int GLUface ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_2 (TYPE_6__*,int *) ;
 int FUNC_3 (int *,TYPE_1__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int * FUNC_5 () ;

int FUNC_6( GLUhalfEdge *VAR_2 )
{
  GLUhalfEdge *VAR_3 = VAR_2->Sym;
  int VAR_4 = VAR_0;




  if( VAR_2->Lface != VAR_2->Rface ) {

    VAR_4 = VAR_1;
    FUNC_1( VAR_2->Lface, VAR_2->Rface );
  }

  if( VAR_2->Onext == VAR_2 ) {
    FUNC_2( VAR_2->Org, ((void*)0) );
  } else {

    VAR_2->Rface->anEdge = VAR_2->Oprev;
    VAR_2->Org->anEdge = VAR_2->Onext;

    FUNC_4( VAR_2, VAR_2->Oprev );
    if( ! VAR_4 ) {
      GLUface *VAR_5= FUNC_5();
      if (VAR_5 == ((void*)0)) return 0;


      FUNC_3( VAR_5, VAR_2, VAR_2->Lface );
    }
  }




  if( VAR_3->Onext == VAR_3 ) {
    FUNC_2( VAR_3->Org, ((void*)0) );
    FUNC_1( VAR_3->Lface, ((void*)0) );
  } else {

    VAR_2->Lface->anEdge = VAR_3->Oprev;
    VAR_3->Org->anEdge = VAR_3->Onext;
    FUNC_4( VAR_3, VAR_3->Oprev );
  }


  FUNC_0( VAR_2 );

  return 1;
}
