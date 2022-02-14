
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int inside; TYPE_1__* eUp; } ;
struct TYPE_7__ {TYPE_1__* anEdge; int inside; } ;
struct TYPE_6__ {TYPE_2__* Lface; } ;
typedef int GLUtesselator ;
typedef TYPE_1__ GLUhalfEdge ;
typedef TYPE_2__ GLUface ;
typedef TYPE_3__ ActiveRegion ;


 int FUNC_0 (int *,TYPE_3__*) ;

__attribute__((used)) static void FUNC_1( GLUtesselator *VAR_0, ActiveRegion *VAR_1 )







{
  GLUhalfEdge *VAR_2 = VAR_1->eUp;
  GLUface *VAR_3 = VAR_2->Lface;

  VAR_3->inside = VAR_1->inside;
  VAR_3->anEdge = VAR_2;
  FUNC_0( VAR_0, VAR_1 );
}
