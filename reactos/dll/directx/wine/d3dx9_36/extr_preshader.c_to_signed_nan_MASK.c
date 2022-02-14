
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG64 ;


 scalar_t__ FUNC_0 (double) ;

__attribute__((used)) static double FUNC_1(double VAR_0)
{
    static const union
    {
        ULONG64 ulong64_value;
        double double_value;
    }
    VAR_1 =
    {
        0xfff8000000000000
    };

    return FUNC_0(VAR_0) ? VAR_1.double_value : VAR_0;
}
