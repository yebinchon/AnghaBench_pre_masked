
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* anEdge; } ;
struct TYPE_13__ {TYPE_8__* Lface; int Org; int Dst; struct TYPE_13__* Lnext; struct TYPE_13__* Sym; } ;
typedef TYPE_1__ GLUhalfEdge ;
typedef int GLUface ;


 int VAR_0 ;
 int FUNC_0 (TYPE_8__*,TYPE_8__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*,TYPE_8__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int VAR_1 ;
 int * FUNC_4 () ;

GLUhalfEdge *FUNC_5( GLUhalfEdge *VAR_2, GLUhalfEdge *VAR_3 )
{
  GLUhalfEdge *VAR_4;
  int VAR_5 = VAR_0;
  GLUhalfEdge *VAR_6 = FUNC_1( VAR_2 );
  if (VAR_6 == ((void*)0)) return ((void*)0);

  VAR_4 = VAR_6->Sym;

  if( VAR_3->Lface != VAR_2->Lface ) {

    VAR_5 = VAR_1;
    FUNC_0( VAR_3->Lface, VAR_2->Lface );
  }


  FUNC_3( VAR_6, VAR_2->Lnext );
  FUNC_3( VAR_4, VAR_3 );


  VAR_6->Org = VAR_2->Dst;
  VAR_4->Org = VAR_3->Org;
  VAR_6->Lface = VAR_4->Lface = VAR_2->Lface;


  VAR_2->Lface->anEdge = VAR_4;

  if( ! VAR_5 ) {
    GLUface *VAR_7= FUNC_4();
    if (VAR_7 == ((void*)0)) return ((void*)0);


    FUNC_2( VAR_7, VAR_6, VAR_2->Lface );
  }
  return VAR_6;
}
