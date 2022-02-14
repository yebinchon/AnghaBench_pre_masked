
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint64_t FUNC_1(uint8_t *VAR_0, int VAR_1)
{
    FUNC_0(VAR_1 >= 0 && VAR_1 <= 8);
    uint64_t VAR_2 = 0;
    while (VAR_1--)
        VAR_2 = (VAR_2 << 8) + *VAR_0++;
    return VAR_2;
}
