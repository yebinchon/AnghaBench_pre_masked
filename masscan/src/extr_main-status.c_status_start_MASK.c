
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; int time; int clock; } ;
struct Status {int timer; TYPE_1__ last; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct Status*,int ,int) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct Status *VAR_0)
{
    FUNC_1(VAR_0, 0, sizeof(*VAR_0));
    VAR_0->last.clock = FUNC_0();
    VAR_0->last.time = FUNC_2(0);
    VAR_0->last.count = 0;
    VAR_0->timer = 0x1;
}
