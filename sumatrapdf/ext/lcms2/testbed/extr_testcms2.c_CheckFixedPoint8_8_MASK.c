
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;


 int FUNC_0 (double) ;

__attribute__((used)) static
cmsInt32Number FUNC_1(void)
{
    if (!FUNC_0(1.0)) return 0;
    if (!FUNC_0(2.0)) return 0;
    if (!FUNC_0(1.23456)) return 0;
    if (!FUNC_0(0.99999)) return 0;
    if (!FUNC_0(0.1234567890123456789099999)) return 0;
    if (!FUNC_0(+255.1234567890123456789099999)) return 0;

    return 1;
}
