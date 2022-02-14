
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int real_t ;
struct TYPE_2__ {int* g; int* x; int* y; int* lb; int* ub; int* lbA; int* ubA; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;

real_t FUNC_1( )
{
real_t VAR_1;

int VAR_2;
real_t VAR_3;

VAR_1 = + VAR_0.g[0]*VAR_0.x[0] + VAR_0.g[1]*VAR_0.x[1] + VAR_0.g[2]*VAR_0.x[2] + VAR_0.g[3]*VAR_0.x[3] + VAR_0.g[4]*VAR_0.x[4] + VAR_0.g[5]*VAR_0.x[5] + VAR_0.g[6]*VAR_0.x[6] + VAR_0.g[7]*VAR_0.x[7] + VAR_0.g[8]*VAR_0.x[8] + VAR_0.g[9]*VAR_0.x[9] + VAR_0.g[10]*VAR_0.x[10] + VAR_0.g[11]*VAR_0.x[11] + VAR_0.g[12]*VAR_0.x[12] + VAR_0.g[13]*VAR_0.x[13] + VAR_0.g[14]*VAR_0.x[14] + VAR_0.g[15]*VAR_0.x[15] + VAR_0.g[16]*VAR_0.x[16] + VAR_0.g[17]*VAR_0.x[17] + VAR_0.g[18]*VAR_0.x[18] + VAR_0.g[19]*VAR_0.x[19] + VAR_0.g[20]*VAR_0.x[20] + VAR_0.g[21]*VAR_0.x[21] + VAR_0.g[22]*VAR_0.x[22] + VAR_0.g[23]*VAR_0.x[23];
VAR_1 = FUNC_0( VAR_1 );
for (VAR_2 = 0; VAR_2 < 24; ++VAR_2)
{
VAR_3 = VAR_0.y[VAR_2];
if (VAR_3 > 1e-12)
VAR_1 += FUNC_0(VAR_0.lb[VAR_2] * VAR_3);
else if (VAR_3 < -1e-12)
VAR_1 += FUNC_0(VAR_0.ub[VAR_2] * VAR_3);
}
for (VAR_2 = 0; VAR_2 < 40; ++VAR_2)
{
VAR_3 = VAR_0.y[VAR_2 + 24];
if (VAR_3 > 1e-12)
VAR_1 += FUNC_0(VAR_0.lbA[VAR_2] * VAR_3);
else if (VAR_3 < -1e-12)
VAR_1 += FUNC_0(VAR_0.ubA[VAR_2] * VAR_3);
}
return VAR_1;
}
