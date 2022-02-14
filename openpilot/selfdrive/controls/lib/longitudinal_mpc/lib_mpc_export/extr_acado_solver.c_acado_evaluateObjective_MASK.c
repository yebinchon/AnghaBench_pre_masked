
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int WN; int * od; int * x; int * W; int * u; } ;
struct TYPE_3__ {int QN2; int QN1; int * objValueOut; int * DyN; int * objValueIn; int * R2; int * R1; int * Q2; int * Q1; int * Dy; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int *,int *,int *) ;

void FUNC_5( )
{
int VAR_2;
for (VAR_2 = 0; VAR_2 < 20; ++VAR_2)
{
VAR_1.objValueIn[0] = VAR_0.x[VAR_2 * 3];
VAR_1.objValueIn[1] = VAR_0.x[VAR_2 * 3 + 1];
VAR_1.objValueIn[2] = VAR_0.x[VAR_2 * 3 + 2];
VAR_1.objValueIn[3] = VAR_0.u[VAR_2];
VAR_1.objValueIn[4] = VAR_0.od[VAR_2 * 2];
VAR_1.objValueIn[5] = VAR_0.od[VAR_2 * 2 + 1];

FUNC_0( VAR_1.objValueIn, VAR_1.objValueOut );
VAR_1.Dy[VAR_2 * 4] = VAR_1.objValueOut[0];
VAR_1.Dy[VAR_2 * 4 + 1] = VAR_1.objValueOut[1];
VAR_1.Dy[VAR_2 * 4 + 2] = VAR_1.objValueOut[2];
VAR_1.Dy[VAR_2 * 4 + 3] = VAR_1.objValueOut[3];

FUNC_2( &(VAR_1.objValueOut[ 4 ]), &(VAR_0.W[ VAR_2 * 16 ]), &(VAR_1.Q1[ VAR_2 * 9 ]), &(VAR_1.Q2[ VAR_2 * 12 ]) );

FUNC_4( &(VAR_1.objValueOut[ 16 ]), &(VAR_0.W[ VAR_2 * 16 ]), &(VAR_1.R1[ VAR_2 ]), &(VAR_1.R2[ VAR_2 * 4 ]) );

}
VAR_1.objValueIn[0] = VAR_0.x[60];
VAR_1.objValueIn[1] = VAR_0.x[61];
VAR_1.objValueIn[2] = VAR_0.x[62];
VAR_1.objValueIn[3] = VAR_0.od[40];
VAR_1.objValueIn[4] = VAR_0.od[41];
FUNC_1( VAR_1.objValueIn, VAR_1.objValueOut );

VAR_1.DyN[0] = VAR_1.objValueOut[0];
VAR_1.DyN[1] = VAR_1.objValueOut[1];
VAR_1.DyN[2] = VAR_1.objValueOut[2];

FUNC_3( &(VAR_1.objValueOut[ 3 ]), VAR_0.WN, VAR_1.QN1, VAR_1.QN2 );

}
