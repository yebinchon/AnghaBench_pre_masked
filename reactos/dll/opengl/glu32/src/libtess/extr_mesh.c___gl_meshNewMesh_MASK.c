
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {void* inside; void* marked; int * trail; int * data; int * anEdge; struct TYPE_9__* prev; struct TYPE_9__* next; } ;
struct TYPE_8__ {int * activeRegion; scalar_t__ winding; int * Lface; int * Org; int * Lnext; int * Onext; struct TYPE_8__* Sym; struct TYPE_8__* next; } ;
struct TYPE_6__ {int * data; int * anEdge; struct TYPE_6__* prev; struct TYPE_6__* next; } ;
struct TYPE_7__ {TYPE_3__ eHeadSym; TYPE_3__ eHead; TYPE_4__ fHead; TYPE_1__ vHead; } ;
typedef TYPE_1__ GLUvertex ;
typedef TYPE_2__ GLUmesh ;
typedef TYPE_3__ GLUhalfEdge ;
typedef TYPE_4__ GLUface ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

GLUmesh *FUNC_1( void )
{
  GLUvertex *VAR_1;
  GLUface *VAR_2;
  GLUhalfEdge *VAR_3;
  GLUhalfEdge *VAR_4;
  GLUmesh *VAR_5 = (GLUmesh *)FUNC_0( sizeof( GLUmesh ));
  if (VAR_5 == ((void*)0)) {
     return ((void*)0);
  }

  VAR_1 = &VAR_5->vHead;
  VAR_2 = &VAR_5->fHead;
  VAR_3 = &VAR_5->eHead;
  VAR_4 = &VAR_5->eHeadSym;

  VAR_1->next = VAR_1->prev = VAR_1;
  VAR_1->anEdge = ((void*)0);
  VAR_1->data = ((void*)0);

  VAR_2->next = VAR_2->prev = VAR_2;
  VAR_2->anEdge = ((void*)0);
  VAR_2->data = ((void*)0);
  VAR_2->trail = ((void*)0);
  VAR_2->marked = VAR_0;
  VAR_2->inside = VAR_0;

  VAR_3->next = VAR_3;
  VAR_3->Sym = VAR_4;
  VAR_3->Onext = ((void*)0);
  VAR_3->Lnext = ((void*)0);
  VAR_3->Org = ((void*)0);
  VAR_3->Lface = ((void*)0);
  VAR_3->winding = 0;
  VAR_3->activeRegion = ((void*)0);

  VAR_4->next = VAR_4;
  VAR_4->Sym = VAR_3;
  VAR_4->Onext = ((void*)0);
  VAR_4->Lnext = ((void*)0);
  VAR_4->Org = ((void*)0);
  VAR_4->Lface = ((void*)0);
  VAR_4->winding = 0;
  VAR_4->activeRegion = ((void*)0);

  return VAR_5;
}
