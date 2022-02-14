
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * x; int * od; int * u; } ;
struct TYPE_3__ {int * state; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,int,int) ;

void FUNC_1( )
{
int VAR_2;
for (VAR_2 = 0; VAR_2 < 20; ++VAR_2)
{
VAR_1.state[0] = VAR_0.x[VAR_2 * 4];
VAR_1.state[1] = VAR_0.x[VAR_2 * 4 + 1];
VAR_1.state[2] = VAR_0.x[VAR_2 * 4 + 2];
VAR_1.state[3] = VAR_0.x[VAR_2 * 4 + 3];
VAR_1.state[24] = VAR_0.u[VAR_2];
VAR_1.state[25] = VAR_0.od[VAR_2 * 17];
VAR_1.state[26] = VAR_0.od[VAR_2 * 17 + 1];
VAR_1.state[27] = VAR_0.od[VAR_2 * 17 + 2];
VAR_1.state[28] = VAR_0.od[VAR_2 * 17 + 3];
VAR_1.state[29] = VAR_0.od[VAR_2 * 17 + 4];
VAR_1.state[30] = VAR_0.od[VAR_2 * 17 + 5];
VAR_1.state[31] = VAR_0.od[VAR_2 * 17 + 6];
VAR_1.state[32] = VAR_0.od[VAR_2 * 17 + 7];
VAR_1.state[33] = VAR_0.od[VAR_2 * 17 + 8];
VAR_1.state[34] = VAR_0.od[VAR_2 * 17 + 9];
VAR_1.state[35] = VAR_0.od[VAR_2 * 17 + 10];
VAR_1.state[36] = VAR_0.od[VAR_2 * 17 + 11];
VAR_1.state[37] = VAR_0.od[VAR_2 * 17 + 12];
VAR_1.state[38] = VAR_0.od[VAR_2 * 17 + 13];
VAR_1.state[39] = VAR_0.od[VAR_2 * 17 + 14];
VAR_1.state[40] = VAR_0.od[VAR_2 * 17 + 15];
VAR_1.state[41] = VAR_0.od[VAR_2 * 17 + 16];

FUNC_0(VAR_1.state, VAR_2 == 0, VAR_2);

VAR_0.x[VAR_2 * 4 + 4] = VAR_1.state[0];
VAR_0.x[VAR_2 * 4 + 5] = VAR_1.state[1];
VAR_0.x[VAR_2 * 4 + 6] = VAR_1.state[2];
VAR_0.x[VAR_2 * 4 + 7] = VAR_1.state[3];
}
}
