
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_ctx {int wakeup_ctx; int (* wakeup_cb ) (int ) ;} ;


 int FUNC_0 (int ) ;

void FUNC_1(struct input_ctx *VAR_0)
{
    VAR_0->wakeup_cb(VAR_0->wakeup_ctx);
}
