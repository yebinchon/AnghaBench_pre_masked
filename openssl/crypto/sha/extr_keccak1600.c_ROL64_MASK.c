
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static uint64_t FUNC_1(uint64_t VAR_1, int VAR_2)
{
    if (VAR_2 == 0) {
        return VAR_1;
    } else if (!VAR_0) {
        return (VAR_1 << VAR_2) | (VAR_1 >> (64-VAR_2));
    } else {
        uint32_t VAR_3 = (uint32_t)(VAR_1 >> 32), VAR_4 = (uint32_t)VAR_1;

        if (VAR_2 & 1) {
            uint32_t VAR_5 = VAR_3;

            VAR_2 >>= 1;
            VAR_3 = FUNC_0(VAR_4, VAR_2);
            VAR_4 = FUNC_0(VAR_5, VAR_2 + 1);
        } else {
            VAR_2 >>= 1;
            VAR_4 = FUNC_0(VAR_4, VAR_2);
            VAR_3 = FUNC_0(VAR_3, VAR_2);
        }

        return ((uint64_t)VAR_3 << 32) | VAR_4;
    }
}
