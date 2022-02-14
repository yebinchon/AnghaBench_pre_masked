
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct FaceCount {TYPE_1__* eStart; int size; int * member_2; int * member_1; int member_0; } ;
struct TYPE_3__ {int Rface; struct TYPE_3__* Oprev; int Lface; struct TYPE_3__* Onext; } ;
typedef TYPE_1__ GLUhalfEdge ;
typedef int GLUface ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static struct FaceCount FUNC_3( GLUhalfEdge *VAR_1 )
{




  struct FaceCount VAR_2 = { 0, ((void*)0), &VAR_0 };
  GLUface *VAR_3 = ((void*)0);
  GLUhalfEdge *VAR_4;

  for( VAR_4 = VAR_1; ! FUNC_2( VAR_4->Lface ); VAR_4 = VAR_4->Onext ) {
    FUNC_0( VAR_4->Lface, VAR_3 );
    ++VAR_2.size;
  }
  for( VAR_4 = VAR_1; ! FUNC_2( VAR_4->Rface ); VAR_4 = VAR_4->Oprev ) {
    FUNC_0( VAR_4->Rface, VAR_3 );
    ++VAR_2.size;
  }
  VAR_2.eStart = VAR_4;

  FUNC_1( VAR_3 );
  return VAR_2;
}
