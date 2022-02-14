
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * activeRegion; scalar_t__ winding; int * Lface; int * Org; struct TYPE_5__* Lnext; struct TYPE_5__* Onext; struct TYPE_5__* Sym; struct TYPE_5__* next; } ;
struct TYPE_6__ {TYPE_1__ eSym; TYPE_1__ e; } ;
typedef TYPE_1__ GLUhalfEdge ;
typedef TYPE_2__ EdgePair ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static GLUhalfEdge *FUNC_1( GLUhalfEdge *VAR_0 )
{
  GLUhalfEdge *VAR_1;
  GLUhalfEdge *VAR_2;
  GLUhalfEdge *VAR_3;
  EdgePair *VAR_4 = (EdgePair *)FUNC_0( sizeof( EdgePair ));
  if (VAR_4 == ((void*)0)) return ((void*)0);

  VAR_1 = &VAR_4->e;
  VAR_2 = &VAR_4->eSym;


  if( VAR_0->Sym < VAR_0 ) { VAR_0 = VAR_0->Sym; }




  VAR_3 = VAR_0->Sym->next;
  VAR_2->next = VAR_3;
  VAR_3->Sym->next = VAR_1;
  VAR_1->next = VAR_0;
  VAR_0->Sym->next = VAR_2;

  VAR_1->Sym = VAR_2;
  VAR_1->Onext = VAR_1;
  VAR_1->Lnext = VAR_2;
  VAR_1->Org = ((void*)0);
  VAR_1->Lface = ((void*)0);
  VAR_1->winding = 0;
  VAR_1->activeRegion = ((void*)0);

  VAR_2->Sym = VAR_1;
  VAR_2->Onext = VAR_2;
  VAR_2->Lnext = VAR_1;
  VAR_2->Org = ((void*)0);
  VAR_2->Lface = ((void*)0);
  VAR_2->winding = 0;
  VAR_2->activeRegion = ((void*)0);

  return VAR_1;
}
