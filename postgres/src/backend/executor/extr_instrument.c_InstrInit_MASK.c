
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int need_bufusage; int need_timer; } ;
typedef TYPE_1__ Instrumentation ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

void
FUNC_1(Instrumentation *VAR_2, int VAR_3)
{
 FUNC_0(VAR_2, 0, sizeof(Instrumentation));
 VAR_2->need_bufusage = (VAR_3 & VAR_0) != 0;
 VAR_2->need_timer = (VAR_3 & VAR_1) != 0;
}
