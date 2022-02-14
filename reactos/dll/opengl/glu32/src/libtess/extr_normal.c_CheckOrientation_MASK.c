
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {TYPE_6__* anEdge; struct TYPE_15__* next; } ;
struct TYPE_14__ {scalar_t__ winding; struct TYPE_14__* Lnext; TYPE_3__* Dst; TYPE_2__* Org; } ;
struct TYPE_13__ {int * tUnit; TYPE_1__* mesh; } ;
struct TYPE_12__ {int t; struct TYPE_12__* next; } ;
struct TYPE_11__ {int s; int t; } ;
struct TYPE_10__ {int s; int t; } ;
struct TYPE_9__ {TYPE_4__ vHead; TYPE_7__ fHead; } ;
typedef scalar_t__ GLdouble ;
typedef TYPE_4__ GLUvertex ;
typedef TYPE_5__ GLUtesselator ;
typedef TYPE_6__ GLUhalfEdge ;
typedef TYPE_7__ GLUface ;



__attribute__((used)) static void FUNC_0( GLUtesselator *VAR_0 )
{
  GLdouble VAR_1;
  GLUface *VAR_2, *VAR_3 = &VAR_0->mesh->fHead;
  GLUvertex *VAR_4, *VAR_5 = &VAR_0->mesh->vHead;
  GLUhalfEdge *VAR_6;




  VAR_1 = 0;
  for( VAR_2 = VAR_3->next; VAR_2 != VAR_3; VAR_2 = VAR_2->next ) {
    VAR_6 = VAR_2->anEdge;
    if( VAR_6->winding <= 0 ) continue;
    do {
      VAR_1 += (VAR_6->Org->s - VAR_6->Dst->s) * (VAR_6->Org->t + VAR_6->Dst->t);
      VAR_6 = VAR_6->Lnext;
    } while( VAR_6 != VAR_2->anEdge );
  }
  if( VAR_1 < 0 ) {

    for( VAR_4 = VAR_5->next; VAR_4 != VAR_5; VAR_4 = VAR_4->next ) {
      VAR_4->t = - VAR_4->t;
    }
    VAR_0->tUnit[0] = - VAR_0->tUnit[0];
    VAR_0->tUnit[1] = - VAR_0->tUnit[1];
    VAR_0->tUnit[2] = - VAR_0->tUnit[2];
  }
}
