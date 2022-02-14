
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bufusage_start; scalar_t__ need_bufusage; int starttime; scalar_t__ need_timer; } ;
typedef TYPE_1__ Instrumentation ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;

void
FUNC_2(Instrumentation *VAR_2)
{
 if (VAR_2->need_timer &&
  !FUNC_0(VAR_2->starttime))
  FUNC_1(VAR_0, "InstrStartNode called twice in a row");


 if (VAR_2->need_bufusage)
  VAR_2->bufusage_start = VAR_1;
}
