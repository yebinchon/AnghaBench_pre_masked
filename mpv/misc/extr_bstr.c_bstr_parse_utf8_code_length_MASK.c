
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;

int FUNC_1(unsigned char VAR_0)
{
    if (VAR_0 < 128)
        return 1;
    int VAR_1 = 7 - FUNC_0(VAR_0 ^ 255);
    return (VAR_1 >= 2 && VAR_1 <= 4) ? VAR_1 : -1;
}
