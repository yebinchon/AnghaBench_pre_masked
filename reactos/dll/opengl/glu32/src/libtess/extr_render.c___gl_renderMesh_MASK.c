
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int marked; scalar_t__ inside; struct TYPE_11__* next; } ;
struct TYPE_10__ {TYPE_3__ fHead; } ;
struct TYPE_9__ {int * lonelyTriList; } ;
typedef TYPE_1__ GLUtesselator ;
typedef TYPE_2__ GLUmesh ;
typedef TYPE_3__ GLUface ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_2 (int ) ;

void FUNC_3( GLUtesselator *VAR_1, GLUmesh *VAR_2 )
{
  GLUface *VAR_3;


  VAR_1->lonelyTriList = ((void*)0);

  for( VAR_3 = VAR_2->fHead.next; VAR_3 != &VAR_2->fHead; VAR_3 = VAR_3->next ) {
    VAR_3->marked = VAR_0;
  }
  for( VAR_3 = VAR_2->fHead.next; VAR_3 != &VAR_2->fHead; VAR_3 = VAR_3->next ) {





    if( VAR_3->inside && ! VAR_3->marked ) {
      FUNC_1( VAR_1, VAR_3 );
      FUNC_2( VAR_3->marked );
    }
  }
  if( VAR_1->lonelyTriList != ((void*)0) ) {
    FUNC_0( VAR_1, VAR_1->lonelyTriList );
    VAR_1->lonelyTriList = ((void*)0);
  }
}
