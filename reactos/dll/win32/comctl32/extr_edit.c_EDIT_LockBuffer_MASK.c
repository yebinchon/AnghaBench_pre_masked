
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock_count; int hloc32W; scalar_t__ text; } ;
typedef TYPE_1__ EDITSTATE ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(EDITSTATE *VAR_0)
{
    if (!VAR_0->text)
    {
        if (!VAR_0->hloc32W)
            return;

        VAR_0->text = FUNC_0(VAR_0->hloc32W);
    }

    VAR_0->lock_count++;
}
