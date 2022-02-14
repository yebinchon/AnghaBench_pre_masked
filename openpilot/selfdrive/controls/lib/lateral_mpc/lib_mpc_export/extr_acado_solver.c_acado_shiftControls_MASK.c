
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int real_t ;
struct TYPE_2__ {int * u; } ;


 TYPE_1__ VAR_0 ;

void FUNC_0( real_t* const VAR_1 )
{
int VAR_2;
for (VAR_2 = 0; VAR_2 < 19; ++VAR_2)
{
VAR_0.u[VAR_2] = VAR_0.u[VAR_2 + 1];
}

if (VAR_1 != 0)
{
VAR_0.u[19] = VAR_1[0];
}
}
