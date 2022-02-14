
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int inside; struct TYPE_6__* next; } ;
struct TYPE_5__ {TYPE_2__ fHead; } ;
typedef TYPE_1__ GLUmesh ;
typedef TYPE_2__ GLUface ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1( GLUmesh *VAR_0 )
{
  GLUface *VAR_1, *VAR_2;


  for( VAR_1 = VAR_0->fHead.next; VAR_1 != &VAR_0->fHead; VAR_1 = VAR_2 ) {

    VAR_2 = VAR_1->next;
    if( ! VAR_1->inside ) {
      FUNC_0( VAR_1 );
    }
  }
}
