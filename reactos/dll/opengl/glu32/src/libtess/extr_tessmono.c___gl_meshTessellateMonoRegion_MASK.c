
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* anEdge; } ;
struct TYPE_9__ {struct TYPE_9__* Sym; struct TYPE_9__* Lnext; struct TYPE_9__* Lprev; int Org; int Dst; } ;
typedef TYPE_1__ GLUhalfEdge ;
typedef TYPE_2__ GLUface ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (int) ;

int FUNC_6( GLUface *VAR_0 )
{
  GLUhalfEdge *VAR_1, *VAR_2;






  VAR_1 = VAR_0->anEdge;
  FUNC_5( VAR_1->Lnext != VAR_1 && VAR_1->Lnext->Lnext != VAR_1 );

  for( ; FUNC_3( VAR_1->Dst, VAR_1->Org ); VAR_1 = VAR_1->Lprev )
    ;
  for( ; FUNC_3( VAR_1->Org, VAR_1->Dst ); VAR_1 = VAR_1->Lnext )
    ;
  VAR_2 = VAR_1->Lprev;

  while( VAR_1->Lnext != VAR_2 ) {
    if( FUNC_3( VAR_1->Dst, VAR_2->Org )) {




      while( VAR_2->Lnext != VAR_1 && (FUNC_0( VAR_2->Lnext )
      || FUNC_2( VAR_2->Org, VAR_2->Dst, VAR_2->Lnext->Dst ) <= 0 )) {
 GLUhalfEdge *VAR_3= FUNC_4( VAR_2->Lnext, VAR_2 );
 if (VAR_3 == ((void*)0)) return 0;
 VAR_2 = VAR_3->Sym;
      }
      VAR_2 = VAR_2->Lprev;
    } else {

      while( VAR_2->Lnext != VAR_1 && (FUNC_1( VAR_1->Lprev )
      || FUNC_2( VAR_1->Dst, VAR_1->Org, VAR_1->Lprev->Org ) >= 0 )) {
 GLUhalfEdge *VAR_4= FUNC_4( VAR_1, VAR_1->Lprev );
 if (VAR_4 == ((void*)0)) return 0;
 VAR_1 = VAR_4->Sym;
      }
      VAR_1 = VAR_1->Lnext;
    }
  }




  FUNC_5( VAR_2->Lnext != VAR_1 );
  while( VAR_2->Lnext->Lnext != VAR_1 ) {
    GLUhalfEdge *VAR_5= FUNC_4( VAR_2->Lnext, VAR_2 );
    if (VAR_5 == ((void*)0)) return 0;
    VAR_2 = VAR_5->Sym;
  }

  return 1;
}
