
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ mstime_t ;
struct TYPE_2__ {scalar_t__ latency_monitor_threshold; } ;


 int FUNC_0 (char const*,scalar_t__) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(const char *VAR_1, mstime_t VAR_2) {
    if (VAR_2 >= VAR_0.latency_monitor_threshold)
        FUNC_0(VAR_1, VAR_2);
}
