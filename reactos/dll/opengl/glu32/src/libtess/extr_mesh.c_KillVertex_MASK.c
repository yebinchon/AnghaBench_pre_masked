
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* Onext; TYPE_1__* Org; } ;
struct TYPE_6__ {struct TYPE_6__* next; struct TYPE_6__* prev; TYPE_2__* anEdge; } ;
typedef TYPE_1__ GLUvertex ;
typedef TYPE_2__ GLUhalfEdge ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1( GLUvertex *VAR_0, GLUvertex *VAR_1 )
{
  GLUhalfEdge *VAR_2, *VAR_3 = VAR_0->anEdge;
  GLUvertex *VAR_4, *VAR_5;


  VAR_2 = VAR_3;
  do {
    VAR_2->Org = VAR_1;
    VAR_2 = VAR_2->Onext;
  } while( VAR_2 != VAR_3 );


  VAR_4 = VAR_0->prev;
  VAR_5 = VAR_0->next;
  VAR_5->prev = VAR_4;
  VAR_4->next = VAR_5;

  FUNC_0( VAR_0 );
}
