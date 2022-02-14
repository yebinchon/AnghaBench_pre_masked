
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* anEdge; struct TYPE_9__* next; } ;
struct TYPE_8__ {int Onext; struct TYPE_8__* Lnext; } ;
struct TYPE_7__ {TYPE_3__ fHead; } ;
typedef TYPE_1__ GLUmesh ;
typedef TYPE_2__ GLUhalfEdge ;
typedef TYPE_3__ GLUface ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3( GLUmesh *VAR_0 )
{
  GLUface *VAR_1, *VAR_2;
  GLUhalfEdge *VAR_3;


  for( VAR_1 = VAR_0->fHead.next; VAR_1 != &VAR_0->fHead; VAR_1 = VAR_2 ) {
    VAR_2 = VAR_1->next;
    VAR_3 = VAR_1->anEdge;
    FUNC_2( VAR_3->Lnext != VAR_3 );

    if( VAR_3->Lnext->Lnext == VAR_3 ) {

      FUNC_0( VAR_3->Onext, VAR_3 );
      if ( !FUNC_1( VAR_3 ) ) return 0;
    }
  }
  return 1;
}
