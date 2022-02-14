
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int winding; TYPE_2__* Lface; TYPE_1__* Rface; struct TYPE_10__* next; } ;
struct TYPE_9__ {TYPE_4__ eHead; } ;
struct TYPE_8__ {scalar_t__ inside; } ;
struct TYPE_7__ {scalar_t__ inside; } ;
typedef int GLboolean ;
typedef TYPE_3__ GLUmesh ;
typedef TYPE_4__ GLUhalfEdge ;


 int FUNC_0 (TYPE_4__*) ;

int FUNC_1( GLUmesh *VAR_0, int VAR_1,
           GLboolean VAR_2 )
{
  GLUhalfEdge *VAR_3, *VAR_4;

  for( VAR_3 = VAR_0->eHead.next; VAR_3 != &VAR_0->eHead; VAR_3 = VAR_4 ) {
    VAR_4 = VAR_3->next;
    if( VAR_3->Rface->inside != VAR_3->Lface->inside ) {


      VAR_3->winding = (VAR_3->Lface->inside) ? VAR_1 : -VAR_1;
    } else {


      if( ! VAR_2 ) {
 VAR_3->winding = 0;
      } else {
 if ( !FUNC_0( VAR_3 ) ) return 0;
      }
    }
  }
  return 1;
}
