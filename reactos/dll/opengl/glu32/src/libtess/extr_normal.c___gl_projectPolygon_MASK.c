
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int* normal; int* sUnit; int* tUnit; TYPE_1__* mesh; } ;
struct TYPE_8__ {int* coords; void* t; void* s; struct TYPE_8__* next; } ;
struct TYPE_7__ {TYPE_2__ vHead; } ;
typedef int GLdouble ;
typedef TYPE_2__ GLUvertex ;
typedef TYPE_3__ GLUtesselator ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int*) ;
 void* FUNC_2 (int*,int*) ;
 int VAR_0 ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_5( GLUtesselator *VAR_5 )
{
  GLUvertex *VAR_6, *VAR_7 = &VAR_5->mesh->vHead;
  GLdouble VAR_8[3];
  GLdouble *VAR_9, *VAR_10;
  int VAR_11, VAR_12 = VAR_0;

  VAR_8[0] = VAR_5->normal[0];
  VAR_8[1] = VAR_5->normal[1];
  VAR_8[2] = VAR_5->normal[2];
  if( VAR_8[0] == 0 && VAR_8[1] == 0 && VAR_8[2] == 0 ) {
    FUNC_1( VAR_5, VAR_8 );
    VAR_12 = VAR_3;
  }
  VAR_9 = VAR_5->sUnit;
  VAR_10 = VAR_5->tUnit;
  VAR_11 = FUNC_3( VAR_8 );
  VAR_9[VAR_11] = 0;
  VAR_9[(VAR_11+1)%3] = VAR_1;
  VAR_9[(VAR_11+2)%3] = VAR_2;

  VAR_10[VAR_11] = 0;
  VAR_10[(VAR_11+1)%3] = (VAR_8[VAR_11] > 0) ? -VAR_2 : VAR_2;
  VAR_10[(VAR_11+2)%3] = (VAR_8[VAR_11] > 0) ? VAR_1 : -VAR_1;



  for( VAR_6 = VAR_7->next; VAR_6 != VAR_7; VAR_6 = VAR_6->next ) {
    VAR_6->s = FUNC_2( VAR_6->coords, VAR_9 );
    VAR_6->t = FUNC_2( VAR_6->coords, VAR_10 );
  }
  if( VAR_12 ) {
    FUNC_0( VAR_5 );
  }
}
