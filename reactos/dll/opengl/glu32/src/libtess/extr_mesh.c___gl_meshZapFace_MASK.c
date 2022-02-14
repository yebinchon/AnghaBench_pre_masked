
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* anEdge; } ;
struct TYPE_9__ {struct TYPE_9__* next; struct TYPE_9__* prev; TYPE_1__* anEdge; } ;
struct TYPE_8__ {int Oprev; struct TYPE_8__* Onext; TYPE_6__* Org; struct TYPE_8__* Sym; int * Rface; int * Lface; struct TYPE_8__* Lnext; } ;
typedef TYPE_1__ GLUhalfEdge ;
typedef TYPE_2__ GLUface ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_6__*,int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4( GLUface *VAR_0 )
{
  GLUhalfEdge *VAR_1 = VAR_0->anEdge;
  GLUhalfEdge *VAR_2, *VAR_3, *VAR_4;
  GLUface *VAR_5, *VAR_6;


  VAR_3 = VAR_1->Lnext;
  do {
    VAR_2 = VAR_3;
    VAR_3 = VAR_2->Lnext;

    VAR_2->Lface = ((void*)0);
    if( VAR_2->Rface == ((void*)0) ) {


      if( VAR_2->Onext == VAR_2 ) {
 FUNC_1( VAR_2->Org, ((void*)0) );
      } else {

 VAR_2->Org->anEdge = VAR_2->Onext;
 FUNC_2( VAR_2, VAR_2->Oprev );
      }
      VAR_4 = VAR_2->Sym;
      if( VAR_4->Onext == VAR_4 ) {
 FUNC_1( VAR_4->Org, ((void*)0) );
      } else {

 VAR_4->Org->anEdge = VAR_4->Onext;
 FUNC_2( VAR_4, VAR_4->Oprev );
      }
      FUNC_0( VAR_2 );
    }
  } while( VAR_2 != VAR_1 );


  VAR_5 = VAR_0->prev;
  VAR_6 = VAR_0->next;
  VAR_6->prev = VAR_5;
  VAR_5->next = VAR_6;

  FUNC_3( VAR_0 );
}
