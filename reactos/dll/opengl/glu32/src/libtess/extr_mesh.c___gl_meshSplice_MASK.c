
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {TYPE_1__* anEdge; } ;
struct TYPE_15__ {TYPE_1__* anEdge; } ;
struct TYPE_14__ {TYPE_9__* Lface; TYPE_7__* Org; } ;
typedef int GLUvertex ;
typedef TYPE_1__ GLUhalfEdge ;
typedef int GLUface ;


 int VAR_0 ;
 int FUNC_0 (TYPE_9__*,TYPE_9__*) ;
 int FUNC_1 (TYPE_7__*,TYPE_7__*) ;
 int FUNC_2 (int *,TYPE_1__*,TYPE_9__*) ;
 int FUNC_3 (int *,TYPE_1__*,TYPE_7__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int VAR_1 ;
 int * FUNC_5 () ;
 int * FUNC_6 () ;

int FUNC_7( GLUhalfEdge *VAR_2, GLUhalfEdge *VAR_3 )
{
  int VAR_4 = VAR_0;
  int VAR_5 = VAR_0;

  if( VAR_2 == VAR_3 ) return 1;

  if( VAR_3->Org != VAR_2->Org ) {

    VAR_5 = VAR_1;
    FUNC_1( VAR_3->Org, VAR_2->Org );
  }
  if( VAR_3->Lface != VAR_2->Lface ) {

    VAR_4 = VAR_1;
    FUNC_0( VAR_3->Lface, VAR_2->Lface );
  }


  FUNC_4( VAR_3, VAR_2 );

  if( ! VAR_5 ) {
    GLUvertex *VAR_6= FUNC_6();
    if (VAR_6 == ((void*)0)) return 0;




    FUNC_3( VAR_6, VAR_3, VAR_2->Org );
    VAR_2->Org->anEdge = VAR_2;
  }
  if( ! VAR_4 ) {
    GLUface *VAR_7= FUNC_5();
    if (VAR_7 == ((void*)0)) return 0;




    FUNC_2( VAR_7, VAR_3, VAR_2->Lface );
    VAR_2->Lface->anEdge = VAR_2;
  }

  return 1;
}
