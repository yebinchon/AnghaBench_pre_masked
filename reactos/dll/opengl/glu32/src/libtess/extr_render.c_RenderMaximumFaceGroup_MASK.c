
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct FaceCount {int size; TYPE_2__* eStart; int (* render ) (TYPE_1__*,TYPE_2__*,int) ;} ;
struct TYPE_14__ {TYPE_2__* anEdge; } ;
struct TYPE_13__ {struct TYPE_13__* Lprev; struct TYPE_13__* Lnext; } ;
struct TYPE_12__ {int flagBoundary; } ;
typedef TYPE_1__ GLUtesselator ;
typedef TYPE_2__ GLUhalfEdge ;
typedef TYPE_3__ GLUface ;


 struct FaceCount FUNC_0 (TYPE_2__*) ;
 struct FaceCount FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_4( GLUtesselator *VAR_0, GLUface *VAR_1 )
{







  GLUhalfEdge *VAR_2 = VAR_1->anEdge;
  struct FaceCount VAR_3, VAR_4;

  VAR_3.size = 1;
  VAR_3.eStart = VAR_2;
  VAR_3.render = &FUNC_2;

  if( ! VAR_0->flagBoundary ) {
    VAR_4 = FUNC_0( VAR_2 ); if( VAR_4.size > VAR_3.size ) { VAR_3 = VAR_4; }
    VAR_4 = FUNC_0( VAR_2->Lnext ); if( VAR_4.size > VAR_3.size ) { VAR_3 = VAR_4; }
    VAR_4 = FUNC_0( VAR_2->Lprev ); if( VAR_4.size > VAR_3.size ) { VAR_3 = VAR_4; }

    VAR_4 = FUNC_1( VAR_2 ); if( VAR_4.size > VAR_3.size ) { VAR_3 = VAR_4; }
    VAR_4 = FUNC_1( VAR_2->Lnext ); if( VAR_4.size > VAR_3.size ) { VAR_3 = VAR_4; }
    VAR_4 = FUNC_1( VAR_2->Lprev ); if( VAR_4.size > VAR_3.size ) { VAR_3 = VAR_4; }
  }
  (*(VAR_3.render))( VAR_0, VAR_3.eStart, VAR_3.size );
}
