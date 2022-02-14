
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int TINF_DATA ;


 int FUNC_0 (int *) ;

uint32_t FUNC_1(TINF_DATA *VAR_0)
{
    uint32_t VAR_1 = 0;
    int VAR_2;
    for (VAR_2 = 4; VAR_2--;) {
        VAR_1 = VAR_1 << 8 | FUNC_0(VAR_0);
    }
    return VAR_1;
}
