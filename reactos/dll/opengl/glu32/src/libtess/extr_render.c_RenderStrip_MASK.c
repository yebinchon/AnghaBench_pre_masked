
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {void* marked; } ;
struct TYPE_8__ {TYPE_1__* Dst; struct TYPE_8__* Onext; TYPE_5__* Lface; TYPE_2__* Org; struct TYPE_8__* Dprev; } ;
struct TYPE_7__ {int data; } ;
struct TYPE_6__ {int data; } ;
typedef int GLUtesselator ;
typedef TYPE_3__ GLUhalfEdge ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 void* VAR_1 ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5( GLUtesselator *VAR_2, GLUhalfEdge *VAR_3, long VAR_4 )
{




  FUNC_0( VAR_0 );
  FUNC_2( VAR_3->Org->data );
  FUNC_2( VAR_3->Dst->data );

  while( ! FUNC_3( VAR_3->Lface )) {
    VAR_3->Lface->marked = VAR_1;
    --VAR_4;
    VAR_3 = VAR_3->Dprev;
    FUNC_2( VAR_3->Org->data );
    if( FUNC_3( VAR_3->Lface )) break;

    VAR_3->Lface->marked = VAR_1;
    --VAR_4;
    VAR_3 = VAR_3->Onext;
    FUNC_2( VAR_3->Dst->data );
  }

  FUNC_4( VAR_4 == 0 );
  FUNC_1();
}
