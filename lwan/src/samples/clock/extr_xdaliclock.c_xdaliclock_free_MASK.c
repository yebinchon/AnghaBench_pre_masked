
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdaliclock {struct xdaliclock* clear_frame; struct xdaliclock* temp_frame; } ;


 int FUNC_0 (struct xdaliclock*) ;

void FUNC_1(struct xdaliclock *VAR_0)
{
    if (!VAR_0)
        return;

    FUNC_0(VAR_0->temp_frame);
    FUNC_0(VAR_0->clear_frame);
    FUNC_0(VAR_0);
}
