
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; struct TYPE_7__* prev; TYPE_1__* anEdge; } ;
struct TYPE_6__ {struct TYPE_6__* Lnext; TYPE_2__* Lface; } ;
typedef TYPE_1__ GLUhalfEdge ;
typedef TYPE_2__ GLUface ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1( GLUface *VAR_0, GLUface *VAR_1 )
{
  GLUhalfEdge *VAR_2, *VAR_3 = VAR_0->anEdge;
  GLUface *VAR_4, *VAR_5;


  VAR_2 = VAR_3;
  do {
    VAR_2->Lface = VAR_1;
    VAR_2 = VAR_2->Lnext;
  } while( VAR_2 != VAR_3 );


  VAR_4 = VAR_0->prev;
  VAR_5 = VAR_0->next;
  VAR_5->prev = VAR_4;
  VAR_4->next = VAR_5;

  FUNC_0( VAR_0 );
}
