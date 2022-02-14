
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int modulus; int quotient; } ;
typedef int ARM_UDIVRESULT ;
typedef TYPE_1__ ARM_SDIVRESULT ;


 int FUNC_0 (int *,int,int) ;

ARM_SDIVRESULT
FUNC_1(
    int VAR_0,
    int VAR_1)
{
    ARM_SDIVRESULT VAR_2;
    int VAR_3, VAR_4;

    VAR_4 = VAR_0 & 0x80000000;
    if (VAR_4)
    {
        VAR_1 = -VAR_1;
    }

    VAR_3 = VAR_0 & 0x80000000;
    if (VAR_3)
    {
        VAR_0 = -VAR_0;
    }

    FUNC_0((ARM_UDIVRESULT*)&VAR_2, VAR_0, VAR_1);

    if (VAR_4 ^ VAR_3)
    {
        VAR_2.quotient = -VAR_2.quotient;
    }

    if (VAR_4)
    {
        VAR_2.modulus = -VAR_2.modulus;
    }

    return VAR_2;
}
