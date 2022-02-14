
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int size; } ;
 TYPE_1__* FUNC_0 () ;

uint32_t FUNC_1(void)
{
    static uint32_t VAR_0 = 0;
    if (VAR_0 == 0)
    {
        switch (FUNC_0()->size)
        {
        case 134:

            VAR_0 = 256 * 1024;
            break;
        case 130:

            VAR_0 = 512 * 1024;
            break;
        case 128:

            VAR_0 = 1 * 1024 * 1024;
            break;
        case 136:

            VAR_0 = 2 * 1024 * 1024;
            break;
        case 133:

            VAR_0 = 4 * 1024 * 1024;
            break;
        case 135:

            VAR_0 = 2 * 1024 * 1024;
            break;
        case 131:

            VAR_0 = 4 * 1024 * 1024;
            break;
        case 132:

            VAR_0 = 4 * 1024 * 1024;
            break;
        case 129:

            VAR_0 = 8 * 1024 * 1024;
            break;
        case 137:

            VAR_0 = 16 * 1024 * 1024;
            break;
        default:

            VAR_0 = 512 * 1024;
            break;
        }
    }
    return VAR_0;
}
