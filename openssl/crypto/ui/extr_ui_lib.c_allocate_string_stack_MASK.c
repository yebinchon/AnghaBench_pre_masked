
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * strings; } ;
typedef TYPE_1__ UI ;


 int * FUNC_0 () ;

__attribute__((used)) static int FUNC_1(UI *VAR_0)
{
    if (VAR_0->strings == ((void*)0)) {
        VAR_0->strings = FUNC_0();
        if (VAR_0->strings == ((void*)0)) {
            return -1;
        }
    }
    return 0;
}
