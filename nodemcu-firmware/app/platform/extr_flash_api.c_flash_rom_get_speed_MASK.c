
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int speed; } ;






 TYPE_1__* FUNC_0 () ;

uint32_t FUNC_1(void)
{
    uint32_t VAR_0 = 0;
    uint8_t VAR_1 = FUNC_0()->speed;
    switch (VAR_1)
    {
    case 129:

        VAR_0 = 40000000;
        break;
    case 130:

        VAR_0 = 26700000;
        break;
    case 131:

        VAR_0 = 20000000;
        break;
    case 128:

        VAR_0 = 80000000;
        break;
    }
    return VAR_0;
}
