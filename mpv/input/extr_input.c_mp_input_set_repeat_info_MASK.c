
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_ctx {TYPE_1__* opts; } ;
struct TYPE_2__ {int ar_rate; int ar_delay; } ;


 int FUNC_0 (struct input_ctx*) ;
 int FUNC_1 (struct input_ctx*) ;

void FUNC_2(struct input_ctx *VAR_0, int VAR_1, int VAR_2)
{
    FUNC_0(VAR_0);
    VAR_0->opts->ar_rate = VAR_1;
    VAR_0->opts->ar_delay = VAR_2;
    FUNC_1(VAR_0);
}
