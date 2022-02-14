
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_25__ {int s; int t; } ;
typedef int GLdouble ;
typedef TYPE_1__ GLUvertex ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 void* FUNC_2 (int ,int,int ,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,TYPE_1__*) ;

void FUNC_8( GLUvertex *VAR_0, GLUvertex *VAR_1,
    GLUvertex *VAR_2, GLUvertex *VAR_3,
    GLUvertex *VAR_4 )




{
  GLdouble VAR_5, VAR_6;
  if( ! FUNC_7( VAR_0, VAR_1 )) { FUNC_3( VAR_0, VAR_1 ); }
  if( ! FUNC_7( VAR_2, VAR_3 )) { FUNC_3( VAR_2, VAR_3 ); }
  if( ! FUNC_7( VAR_0, VAR_2 )) { FUNC_3( VAR_0, VAR_2 ); FUNC_3( VAR_1, VAR_3 ); }

  if( ! FUNC_7( VAR_2, VAR_1 )) {

    VAR_4->s = (VAR_2->s + VAR_1->s) / 2;
  } else if( FUNC_7( VAR_1, VAR_3 )) {

    VAR_5 = FUNC_0( VAR_0, VAR_2, VAR_1 );
    VAR_6 = FUNC_0( VAR_2, VAR_1, VAR_3 );
    if( VAR_5+VAR_6 < 0 ) { VAR_5 = -VAR_5; VAR_6 = -VAR_6; }
    VAR_4->s = FUNC_2( VAR_5, VAR_2->s, VAR_6, VAR_1->s );
  } else {

    VAR_5 = FUNC_1( VAR_0, VAR_2, VAR_1 );
    VAR_6 = -FUNC_1( VAR_0, VAR_3, VAR_1 );
    if( VAR_5+VAR_6 < 0 ) { VAR_5 = -VAR_5; VAR_6 = -VAR_6; }
    VAR_4->s = FUNC_2( VAR_5, VAR_2->s, VAR_6, VAR_3->s );
  }



  if( ! FUNC_5( VAR_0, VAR_1 )) { FUNC_3( VAR_0, VAR_1 ); }
  if( ! FUNC_5( VAR_2, VAR_3 )) { FUNC_3( VAR_2, VAR_3 ); }
  if( ! FUNC_5( VAR_0, VAR_2 )) { FUNC_3( VAR_0, VAR_2 ); FUNC_3( VAR_1, VAR_3 ); }

  if( ! FUNC_5( VAR_2, VAR_1 )) {

    VAR_4->t = (VAR_2->t + VAR_1->t) / 2;
  } else if( FUNC_5( VAR_1, VAR_3 )) {

    VAR_5 = FUNC_4( VAR_0, VAR_2, VAR_1 );
    VAR_6 = FUNC_4( VAR_2, VAR_1, VAR_3 );
    if( VAR_5+VAR_6 < 0 ) { VAR_5 = -VAR_5; VAR_6 = -VAR_6; }
    VAR_4->t = FUNC_2( VAR_5, VAR_2->t, VAR_6, VAR_1->t );
  } else {

    VAR_5 = FUNC_6( VAR_0, VAR_2, VAR_1 );
    VAR_6 = -FUNC_6( VAR_0, VAR_3, VAR_1 );
    if( VAR_5+VAR_6 < 0 ) { VAR_5 = -VAR_5; VAR_6 = -VAR_6; }
    VAR_4->t = FUNC_2( VAR_5, VAR_2->t, VAR_6, VAR_3->t );
  }
}
