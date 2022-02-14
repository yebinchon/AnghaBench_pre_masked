
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ fatalError; } ;
struct TYPE_5__ {int * data; int * coords; } ;
typedef int GLfloat ;
typedef int GLdouble ;
typedef TYPE_1__ GLUvertex ;
typedef TYPE_2__ GLUtesselator ;


 int FUNC_0 (int *,void**,int *,int **) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2( GLUtesselator *VAR_2, GLUvertex *VAR_3,
    void *VAR_4[4], GLfloat VAR_5[4], int VAR_6 )
{
  GLdouble VAR_7[3];


  VAR_7[0] = VAR_3->coords[0];
  VAR_7[1] = VAR_3->coords[1];
  VAR_7[2] = VAR_3->coords[2];

  VAR_3->data = ((void*)0);
  FUNC_0( VAR_7, VAR_4, VAR_5, &VAR_3->data );
  if( VAR_3->data == ((void*)0) ) {
    if( ! VAR_6 ) {
      VAR_3->data = VAR_4[0];
    } else if( ! VAR_2->fatalError ) {




      FUNC_1( VAR_0 );
      VAR_2->fatalError = VAR_1;
    }
  }
}
