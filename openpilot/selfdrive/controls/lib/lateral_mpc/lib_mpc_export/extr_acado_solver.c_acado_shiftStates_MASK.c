
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* real_t ;
struct TYPE_4__ {void** x; void** od; void** u; } ;
struct TYPE_3__ {void** state; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (void**,int,int) ;

void FUNC_1( int VAR_2, real_t* const VAR_3, real_t* const VAR_4 )
{
int VAR_5;
for (VAR_5 = 0; VAR_5 < 20; ++VAR_5)
{
VAR_0.x[VAR_5 * 4] = VAR_0.x[VAR_5 * 4 + 4];
VAR_0.x[VAR_5 * 4 + 1] = VAR_0.x[VAR_5 * 4 + 5];
VAR_0.x[VAR_5 * 4 + 2] = VAR_0.x[VAR_5 * 4 + 6];
VAR_0.x[VAR_5 * 4 + 3] = VAR_0.x[VAR_5 * 4 + 7];
}

if (VAR_2 == 1 && VAR_3 != 0)
{
VAR_0.x[80] = VAR_3[0];
VAR_0.x[81] = VAR_3[1];
VAR_0.x[82] = VAR_3[2];
VAR_0.x[83] = VAR_3[3];
}
else if (VAR_2 == 2)
{
VAR_1.state[0] = VAR_0.x[80];
VAR_1.state[1] = VAR_0.x[81];
VAR_1.state[2] = VAR_0.x[82];
VAR_1.state[3] = VAR_0.x[83];
if (VAR_4 != 0)
{
VAR_1.state[24] = VAR_4[0];
}
else
{
VAR_1.state[24] = VAR_0.u[19];
}
VAR_1.state[25] = VAR_0.od[340];
VAR_1.state[26] = VAR_0.od[341];
VAR_1.state[27] = VAR_0.od[342];
VAR_1.state[28] = VAR_0.od[343];
VAR_1.state[29] = VAR_0.od[344];
VAR_1.state[30] = VAR_0.od[345];
VAR_1.state[31] = VAR_0.od[346];
VAR_1.state[32] = VAR_0.od[347];
VAR_1.state[33] = VAR_0.od[348];
VAR_1.state[34] = VAR_0.od[349];
VAR_1.state[35] = VAR_0.od[350];
VAR_1.state[36] = VAR_0.od[351];
VAR_1.state[37] = VAR_0.od[352];
VAR_1.state[38] = VAR_0.od[353];
VAR_1.state[39] = VAR_0.od[354];
VAR_1.state[40] = VAR_0.od[355];
VAR_1.state[41] = VAR_0.od[356];

FUNC_0(VAR_1.state, 1, 19);

VAR_0.x[80] = VAR_1.state[0];
VAR_0.x[81] = VAR_1.state[1];
VAR_0.x[82] = VAR_1.state[2];
VAR_0.x[83] = VAR_1.state[3];
}
}
