
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int Lface; int Org; int Dst; int Lnext; struct TYPE_8__* Sym; } ;
typedef int GLUvertex ;
typedef TYPE_1__ GLUhalfEdge ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int * FUNC_3 () ;

GLUhalfEdge *FUNC_4( GLUhalfEdge *VAR_0 )
{
  GLUhalfEdge *VAR_1;
  GLUhalfEdge *VAR_2 = FUNC_0( VAR_0 );
  if (VAR_2 == ((void*)0)) return ((void*)0);

  VAR_1 = VAR_2->Sym;


  FUNC_2( VAR_2, VAR_0->Lnext );


  VAR_2->Org = VAR_0->Dst;
  {
    GLUvertex *VAR_3= FUNC_3();
    if (VAR_3 == ((void*)0)) return ((void*)0);

    FUNC_1( VAR_3, VAR_1, VAR_2->Org );
  }
  VAR_2->Lface = VAR_1->Lface = VAR_0->Lface;

  return VAR_2;
}
