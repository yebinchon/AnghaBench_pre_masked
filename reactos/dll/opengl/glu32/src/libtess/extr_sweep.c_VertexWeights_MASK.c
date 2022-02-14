
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {double* coords; } ;
typedef double GLfloat ;
typedef double GLdouble ;
typedef TYPE_1__ GLUvertex ;


 double FUNC_0 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1( GLUvertex *VAR_0, GLUvertex *VAR_1, GLUvertex *VAR_2,
      GLfloat *VAR_3 )







{
  GLdouble VAR_4 = FUNC_0( VAR_1, VAR_0 );
  GLdouble VAR_5 = FUNC_0( VAR_2, VAR_0 );

  VAR_3[0] = 0.5 * VAR_5 / (VAR_4 + VAR_5);
  VAR_3[1] = 0.5 * VAR_4 / (VAR_4 + VAR_5);
  VAR_0->coords[0] += VAR_3[0]*VAR_1->coords[0] + VAR_3[1]*VAR_2->coords[0];
  VAR_0->coords[1] += VAR_3[0]*VAR_1->coords[1] + VAR_3[1]*VAR_2->coords[1];
  VAR_0->coords[2] += VAR_3[0]*VAR_1->coords[2] + VAR_3[1]*VAR_2->coords[2];
}
