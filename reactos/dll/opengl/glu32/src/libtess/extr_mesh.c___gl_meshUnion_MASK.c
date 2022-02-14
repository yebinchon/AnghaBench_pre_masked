
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_22__ {TYPE_1__* prev; struct TYPE_22__* next; } ;
struct TYPE_21__ {TYPE_5__* Sym; struct TYPE_21__* next; } ;
struct TYPE_19__ {TYPE_2__* prev; struct TYPE_19__* next; } ;
struct TYPE_20__ {TYPE_8__ eHead; TYPE_6__ vHead; TYPE_9__ fHead; } ;
struct TYPE_18__ {TYPE_4__* next; } ;
struct TYPE_17__ {TYPE_3__* Sym; } ;
struct TYPE_16__ {TYPE_8__* next; } ;
struct TYPE_15__ {TYPE_6__* next; } ;
struct TYPE_14__ {TYPE_9__* next; } ;
typedef TYPE_6__ GLUvertex ;
typedef TYPE_7__ GLUmesh ;
typedef TYPE_8__ GLUhalfEdge ;
typedef TYPE_9__ GLUface ;


 int FUNC_0 (TYPE_7__*) ;

GLUmesh *FUNC_1( GLUmesh *VAR_0, GLUmesh *VAR_1 )
{
  GLUface *VAR_2 = &VAR_0->fHead;
  GLUvertex *VAR_3 = &VAR_0->vHead;
  GLUhalfEdge *VAR_4 = &VAR_0->eHead;
  GLUface *VAR_5 = &VAR_1->fHead;
  GLUvertex *VAR_6 = &VAR_1->vHead;
  GLUhalfEdge *VAR_7 = &VAR_1->eHead;


  if( VAR_5->next != VAR_5 ) {
    VAR_2->prev->next = VAR_5->next;
    VAR_5->next->prev = VAR_2->prev;
    VAR_5->prev->next = VAR_2;
    VAR_2->prev = VAR_5->prev;
  }

  if( VAR_6->next != VAR_6 ) {
    VAR_3->prev->next = VAR_6->next;
    VAR_6->next->prev = VAR_3->prev;
    VAR_6->prev->next = VAR_3;
    VAR_3->prev = VAR_6->prev;
  }

  if( VAR_7->next != VAR_7 ) {
    VAR_4->Sym->next->Sym->next = VAR_7->next;
    VAR_7->next->Sym->next = VAR_4->Sym->next;
    VAR_7->Sym->next->Sym->next = VAR_4;
    VAR_4->Sym->next = VAR_7->Sym->next;
  }

  FUNC_0( VAR_1 );
  return VAR_0;
}
