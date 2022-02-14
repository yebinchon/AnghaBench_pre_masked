
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* next; struct TYPE_11__* Sym; struct TYPE_11__* Lnext; int Dst; int Org; } ;
struct TYPE_10__ {int env; TYPE_1__* mesh; } ;
struct TYPE_9__ {TYPE_3__ eHead; } ;
typedef TYPE_2__ GLUtesselator ;
typedef TYPE_3__ GLUhalfEdge ;


 int FUNC_0 (TYPE_2__*,TYPE_3__*,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4( GLUtesselator *VAR_0 )



{
  GLUhalfEdge *VAR_1, *VAR_2, *VAR_3;
  GLUhalfEdge *VAR_4 = &VAR_0->mesh->eHead;


  for( VAR_1 = VAR_4->next; VAR_1 != VAR_4; VAR_1 = VAR_2 ) {
    VAR_2 = VAR_1->next;
    VAR_3 = VAR_1->Lnext;

    if( FUNC_1( VAR_1->Org, VAR_1->Dst ) && VAR_1->Lnext->Lnext != VAR_1 ) {


      FUNC_0( VAR_0, VAR_3, VAR_1 );
      if ( !FUNC_2( VAR_1 ) ) FUNC_3(VAR_0->env,1);
      VAR_1 = VAR_3;
      VAR_3 = VAR_1->Lnext;
    }
    if( VAR_3->Lnext == VAR_1 ) {


      if( VAR_3 != VAR_1 ) {
 if( VAR_3 == VAR_2 || VAR_3 == VAR_2->Sym ) { VAR_2 = VAR_2->next; }
 if ( !FUNC_2( VAR_3 ) ) FUNC_3(VAR_0->env,1);
      }
      if( VAR_1 == VAR_2 || VAR_1 == VAR_2->Sym ) { VAR_2 = VAR_2->next; }
      if ( !FUNC_2( VAR_1 ) ) FUNC_3(VAR_0->env,1);
    }
  }
}
