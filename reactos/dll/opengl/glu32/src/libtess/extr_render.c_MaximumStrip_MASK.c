
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct FaceCount {long size; TYPE_1__* eStart; int * member_2; int * member_1; int member_0; } ;
struct TYPE_3__ {struct TYPE_3__* Onext; struct TYPE_3__* Sym; int Rface; struct TYPE_3__* Oprev; struct TYPE_3__* Dnext; int Lface; struct TYPE_3__* Dprev; } ;
typedef TYPE_1__ GLUhalfEdge ;
typedef int GLUface ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (long) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static struct FaceCount FUNC_4( GLUhalfEdge *VAR_1 )
{
  struct FaceCount VAR_2 = { 0, ((void*)0), &VAR_0 };
  long VAR_3 = 0, VAR_4 = 0;
  GLUface *VAR_5 = ((void*)0);
  GLUhalfEdge *VAR_6, *VAR_7, *VAR_8;

  for( VAR_6 = VAR_1; ! FUNC_3( VAR_6->Lface ); ++VAR_4, VAR_6 = VAR_6->Onext ) {
    FUNC_0( VAR_6->Lface, VAR_5 );
    ++VAR_4;
    VAR_6 = VAR_6->Dprev;
    if( FUNC_3( VAR_6->Lface )) break;
    FUNC_0( VAR_6->Lface, VAR_5 );
  }
  VAR_7 = VAR_6;

  for( VAR_6 = VAR_1; ! FUNC_3( VAR_6->Rface ); ++VAR_3, VAR_6 = VAR_6->Dnext ) {
    FUNC_0( VAR_6->Rface, VAR_5 );
    ++VAR_3;
    VAR_6 = VAR_6->Oprev;
    if( FUNC_3( VAR_6->Rface )) break;
    FUNC_0( VAR_6->Rface, VAR_5 );
  }
  VAR_8 = VAR_6;

  VAR_2.size = VAR_4 + VAR_3;
  if( FUNC_2( VAR_4 )) {
    VAR_2.eStart = VAR_7->Sym;
  } else if( FUNC_2( VAR_3 )) {
    VAR_2.eStart = VAR_8;
  } else {



    --VAR_2.size;
    VAR_2.eStart = VAR_8->Onext;
  }

  FUNC_1( VAR_5 );
  return VAR_2;
}
