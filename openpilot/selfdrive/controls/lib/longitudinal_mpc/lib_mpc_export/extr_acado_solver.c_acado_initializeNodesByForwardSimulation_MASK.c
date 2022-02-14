
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
VAR_1.state[0] = VAR_0.x[VAR_2 * 3];
VAR_1.state[1] = VAR_0.x[VAR_2 * 3 + 1];
VAR_1.state[2] = VAR_0.x[VAR_2 * 3 + 2];
VAR_1.state[15] = VAR_0.u[VAR_2];
VAR_1.state[16] = VAR_0.od[VAR_2 * 2];
VAR_1.state[17] = VAR_0.od[VAR_2 * 2 + 1];

FUNC_0(VAR_1.state, VAR_2 == 0, VAR_2);

VAR_0.x[VAR_2 * 3 + 3] = VAR_1.state[0];
VAR_0.x[VAR_2 * 3 + 4] = VAR_1.state[1];
VAR_0.x[VAR_2 * 3 + 5] = VAR_1.state[2];
}
}
