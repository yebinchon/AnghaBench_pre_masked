
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(double VAR_0)
{
    union
    {
        double d;
        short s[4];
        int i[2];
    } VAR_1;

    VAR_1.d = VAR_0;
    return VAR_1.s[3] < 0;



}
