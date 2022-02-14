
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long long monotonic; unsigned long long realtime; } ;
typedef TYPE_1__ heartbeat_t ;



inline void FUNC_0(heartbeat_t *VAR_0)
{
    VAR_0->monotonic = VAR_0->realtime = 0ULL;
}
