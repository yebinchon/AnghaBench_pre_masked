
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* mesh; } ;
struct TYPE_6__ {scalar_t__* coords; struct TYPE_6__* next; } ;
struct TYPE_5__ {TYPE_2__ vHead; } ;
typedef scalar_t__ GLdouble ;
typedef TYPE_2__ GLUvertex ;
typedef TYPE_3__ GLUtesselator ;


 int VAR_0 ;
 size_t FUNC_0 (scalar_t__*) ;

__attribute__((used)) static void FUNC_1( GLUtesselator *VAR_1, GLdouble VAR_2[3] )
{
  GLUvertex *VAR_3, *VAR_4, *VAR_5;
  GLdouble VAR_6, VAR_7, VAR_8;
  GLdouble VAR_9[3], VAR_10[3], VAR_11[3], VAR_12[3], VAR_13[3];
  GLUvertex *VAR_14[3], *VAR_15[3];
  GLUvertex *VAR_16 = &VAR_1->mesh->vHead;
  int VAR_17;

  VAR_9[0] = VAR_9[1] = VAR_9[2] = -2 * VAR_0;
  VAR_10[0] = VAR_10[1] = VAR_10[2] = 2 * VAR_0;

  for( VAR_3 = VAR_16->next; VAR_3 != VAR_16; VAR_3 = VAR_3->next ) {
    for( VAR_17 = 0; VAR_17 < 3; ++VAR_17 ) {
      VAR_6 = VAR_3->coords[VAR_17];
      if( VAR_6 < VAR_10[VAR_17] ) { VAR_10[VAR_17] = VAR_6; VAR_15[VAR_17] = VAR_3; }
      if( VAR_6 > VAR_9[VAR_17] ) { VAR_9[VAR_17] = VAR_6; VAR_14[VAR_17] = VAR_3; }
    }
  }




  VAR_17 = 0;
  if( VAR_9[1] - VAR_10[1] > VAR_9[0] - VAR_10[0] ) { VAR_17 = 1; }
  if( VAR_9[2] - VAR_10[2] > VAR_9[VAR_17] - VAR_10[VAR_17] ) { VAR_17 = 2; }
  if( VAR_10[VAR_17] >= VAR_9[VAR_17] ) {

    VAR_2[0] = 0; VAR_2[1] = 0; VAR_2[2] = 1;
    return;
  }




  VAR_8 = 0;
  VAR_4 = VAR_15[VAR_17];
  VAR_5 = VAR_14[VAR_17];
  VAR_11[0] = VAR_4->coords[0] - VAR_5->coords[0];
  VAR_11[1] = VAR_4->coords[1] - VAR_5->coords[1];
  VAR_11[2] = VAR_4->coords[2] - VAR_5->coords[2];
  for( VAR_3 = VAR_16->next; VAR_3 != VAR_16; VAR_3 = VAR_3->next ) {
    VAR_12[0] = VAR_3->coords[0] - VAR_5->coords[0];
    VAR_12[1] = VAR_3->coords[1] - VAR_5->coords[1];
    VAR_12[2] = VAR_3->coords[2] - VAR_5->coords[2];
    VAR_13[0] = VAR_11[1]*VAR_12[2] - VAR_11[2]*VAR_12[1];
    VAR_13[1] = VAR_11[2]*VAR_12[0] - VAR_11[0]*VAR_12[2];
    VAR_13[2] = VAR_11[0]*VAR_12[1] - VAR_11[1]*VAR_12[0];
    VAR_7 = VAR_13[0]*VAR_13[0] + VAR_13[1]*VAR_13[1] + VAR_13[2]*VAR_13[2];
    if( VAR_7 > VAR_8 ) {
      VAR_8 = VAR_7;
      VAR_2[0] = VAR_13[0];
      VAR_2[1] = VAR_13[1];
      VAR_2[2] = VAR_13[2];
    }
  }

  if( VAR_8 <= 0 ) {

    VAR_2[0] = VAR_2[1] = VAR_2[2] = 0;
    VAR_2[FUNC_0(VAR_11)] = 1;
  }
}
