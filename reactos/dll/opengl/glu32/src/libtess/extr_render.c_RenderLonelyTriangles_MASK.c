
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* anEdge; struct TYPE_12__* trail; } ;
struct TYPE_11__ {struct TYPE_11__* Lnext; TYPE_2__* Org; TYPE_1__* Rface; } ;
struct TYPE_10__ {scalar_t__ flagBoundary; } ;
struct TYPE_9__ {int data; } ;
struct TYPE_8__ {int inside; } ;
typedef TYPE_3__ GLUtesselator ;
typedef TYPE_4__ GLUhalfEdge ;
typedef TYPE_5__ GLUface ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4( GLUtesselator *VAR_1, GLUface *VAR_2 )
{



  GLUhalfEdge *VAR_3;
  int VAR_4;
  int VAR_5 = -1;

  FUNC_0( VAR_0 );

  for( ; VAR_2 != ((void*)0); VAR_2 = VAR_2->trail ) {


    VAR_3 = VAR_2->anEdge;
    do {
      if( VAR_1->flagBoundary ) {



 VAR_4 = ! VAR_3->Rface->inside;
 if( VAR_5 != VAR_4 ) {
   VAR_5 = VAR_4;
          FUNC_1( VAR_5 );
 }
      }
      FUNC_3( VAR_3->Org->data );

      VAR_3 = VAR_3->Lnext;
    } while( VAR_3 != VAR_2->anEdge );
  }
  FUNC_2();
}
