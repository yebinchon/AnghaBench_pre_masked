
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* Onext; TYPE_1__* Org; } ;
struct TYPE_6__ {int * data; TYPE_2__* anEdge; struct TYPE_6__* prev; struct TYPE_6__* next; } ;
typedef TYPE_1__ GLUvertex ;
typedef TYPE_2__ GLUhalfEdge ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1( GLUvertex *VAR_0,
   GLUhalfEdge *VAR_1, GLUvertex *VAR_2 )
{
  GLUhalfEdge *VAR_3;
  GLUvertex *VAR_4;
  GLUvertex *VAR_5 = VAR_0;

  FUNC_0(VAR_5 != ((void*)0));


  VAR_4 = VAR_2->prev;
  VAR_5->prev = VAR_4;
  VAR_4->next = VAR_5;
  VAR_5->next = VAR_2;
  VAR_2->prev = VAR_5;

  VAR_5->anEdge = VAR_1;
  VAR_5->data = ((void*)0);



  VAR_3 = VAR_1;
  do {
    VAR_3->Org = VAR_5;
    VAR_3 = VAR_3->Onext;
  } while( VAR_3 != VAR_1 );
}
