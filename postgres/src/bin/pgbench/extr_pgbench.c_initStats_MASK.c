
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_3__ {int lag; int latency; scalar_t__ skipped; scalar_t__ cnt; int start_time; } ;
typedef TYPE_1__ StatsData ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(StatsData *VAR_0, time_t VAR_1)
{
 VAR_0->start_time = VAR_1;
 VAR_0->cnt = 0;
 VAR_0->skipped = 0;
 FUNC_0(&VAR_0->latency);
 FUNC_0(&VAR_0->lag);
}
