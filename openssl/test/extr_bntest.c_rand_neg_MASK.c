
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(void)
{
    static unsigned int VAR_0 = 0;
    static int VAR_1[8] = { 0, 0, 0, 1, 1, 0, 1, 1 };

    return VAR_1[(VAR_0++) % 8];
}
