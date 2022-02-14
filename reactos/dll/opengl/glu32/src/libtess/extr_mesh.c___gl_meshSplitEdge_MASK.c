
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int winding; struct TYPE_10__* Sym; int Rface; TYPE_1__* Dst; TYPE_1__* Org; struct TYPE_10__* Oprev; } ;
struct TYPE_9__ {TYPE_2__* anEdge; } ;
typedef TYPE_2__ GLUhalfEdge ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;

GLUhalfEdge *FUNC_2( GLUhalfEdge *VAR_0 )
{
  GLUhalfEdge *VAR_1;
  GLUhalfEdge *VAR_2= FUNC_1( VAR_0 );
  if (VAR_2 == ((void*)0)) return ((void*)0);

  VAR_1 = VAR_2->Sym;


  FUNC_0( VAR_0->Sym, VAR_0->Sym->Oprev );
  FUNC_0( VAR_0->Sym, VAR_1 );


  VAR_0->Dst = VAR_1->Org;
  VAR_1->Dst->anEdge = VAR_1->Sym;
  VAR_1->Rface = VAR_0->Rface;
  VAR_1->winding = VAR_0->winding;
  VAR_1->Sym->winding = VAR_0->Sym->winding;

  return VAR_1;
}
