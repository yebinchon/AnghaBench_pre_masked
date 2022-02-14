
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
VAR_0.x[VAR_5 * 3] = VAR_0.x[VAR_5 * 3 + 3];
VAR_0.x[VAR_5 * 3 + 1] = VAR_0.x[VAR_5 * 3 + 4];
VAR_0.x[VAR_5 * 3 + 2] = VAR_0.x[VAR_5 * 3 + 5];
}

if (VAR_2 == 1 && VAR_3 != 0)
{
VAR_0.x[60] = VAR_3[0];
VAR_0.x[61] = VAR_3[1];
VAR_0.x[62] = VAR_3[2];
}
else if (VAR_2 == 2)
{
VAR_1.state[0] = VAR_0.x[60];
VAR_1.state[1] = VAR_0.x[61];
VAR_1.state[2] = VAR_0.x[62];
if (VAR_4 != 0)
{
VAR_1.state[15] = VAR_4[0];
}
else
{
VAR_1.state[15] = VAR_0.u[19];
}
VAR_1.state[16] = VAR_0.od[40];
VAR_1.state[17] = VAR_0.od[41];

FUNC_0(VAR_1.state, 1, 19);

VAR_0.x[60] = VAR_1.state[0];
VAR_0.x[61] = VAR_1.state[1];
VAR_0.x[62] = VAR_1.state[2];
}
}
