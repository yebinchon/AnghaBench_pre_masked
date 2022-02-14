
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int UnwindOp; int OpInfo; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
typedef TYPE_2__ UNWIND_CODE ;
__attribute__((used)) static int FUNC_0(UNWIND_CODE VAR_0)
{
    switch (VAR_0.u.UnwindOp)
    {
    case 132:
        return 2 + (VAR_0.u.OpInfo != 0);
    case 131:
    case 129:
        return 2;
    case 130:
    case 128:
        return 3;
    default:
        return 1;
    }
}
