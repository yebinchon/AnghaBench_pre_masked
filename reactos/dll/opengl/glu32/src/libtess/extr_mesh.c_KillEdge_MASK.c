
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* Sym; } ;
typedef TYPE_1__ GLUhalfEdge ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1( GLUhalfEdge *VAR_0 )
{
  GLUhalfEdge *VAR_1, *VAR_2;


  if( VAR_0->Sym < VAR_0 ) { VAR_0 = VAR_0->Sym; }


  VAR_2 = VAR_0->next;
  VAR_1 = VAR_0->Sym->next;
  VAR_2->Sym->next = VAR_1;
  VAR_1->Sym->next = VAR_2;

  FUNC_0( VAR_0 );
}
