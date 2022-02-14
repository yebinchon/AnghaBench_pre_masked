
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT3264 ;
struct TYPE_3__ {int quotient; int modulus; } ;
typedef scalar_t__ INT3264 ;
typedef TYPE_1__ ARM_DIVRESULT ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;

void
FUNC_2(
    ARM_DIVRESULT *VAR_0,
    UINT3264 VAR_1,
    UINT3264 VAR_2)
{
    UINT3264 VAR_3;
    UINT3264 VAR_4;
    UINT3264 VAR_5;





    if (VAR_1 == 0)
    {

        FUNC_1();
    }
    if (VAR_1 > VAR_2)
    {
        VAR_0->quotient = 0;
        VAR_0->modulus = VAR_1;
        return;
    }


    VAR_3 = FUNC_0(VAR_1);
    VAR_3 -= FUNC_0(VAR_2);



    VAR_1 <<= VAR_3;

    VAR_4 = (UINT3264)1 << VAR_3;

    VAR_5 = 0;
    do
    {
        if (VAR_2 >= VAR_1)
        {
            VAR_5 |= VAR_4;
            VAR_2 -= VAR_1;
        }
        VAR_1 >>= 1;
        VAR_4 >>= 1;
    }
    while (VAR_4);
    VAR_0->quotient = VAR_5;
    VAR_0->modulus = VAR_2;
    return;
}
