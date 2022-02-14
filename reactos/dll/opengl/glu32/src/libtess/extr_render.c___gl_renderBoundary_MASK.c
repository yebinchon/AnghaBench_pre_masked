
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* anEdge; scalar_t__ inside; struct TYPE_9__* next; } ;
struct TYPE_8__ {struct TYPE_8__* Lnext; TYPE_1__* Org; } ;
struct TYPE_7__ {TYPE_4__ fHead; } ;
struct TYPE_6__ {int data; } ;
typedef int GLUtesselator ;
typedef TYPE_2__ GLUmesh ;
typedef TYPE_3__ GLUhalfEdge ;
typedef TYPE_4__ GLUface ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

void FUNC_3( GLUtesselator *VAR_1, GLUmesh *VAR_2 )
{
  GLUface *VAR_3;
  GLUhalfEdge *VAR_4;

  for( VAR_3 = VAR_2->fHead.next; VAR_3 != &VAR_2->fHead; VAR_3 = VAR_3->next ) {
    if( VAR_3->inside ) {
      FUNC_0( VAR_0 );
      VAR_4 = VAR_3->anEdge;
      do {
        FUNC_2( VAR_4->Org->data );
 VAR_4 = VAR_4->Lnext;
      } while( VAR_4 != VAR_3->anEdge );
      FUNC_1();
    }
  }
}
