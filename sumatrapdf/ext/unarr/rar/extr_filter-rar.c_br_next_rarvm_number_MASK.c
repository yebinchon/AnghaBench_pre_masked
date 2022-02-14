
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct MemBitReader {int dummy; } ;


 int FUNC_0 (struct MemBitReader*,int) ;

__attribute__((used)) static uint32_t FUNC_1(struct MemBitReader *VAR_0)
{
    uint32_t VAR_1;
    switch (FUNC_0(VAR_0, 2)) {
    case 0:
        return FUNC_0(VAR_0, 4);
    case 1:
        VAR_1 = FUNC_0(VAR_0, 8);
        if (VAR_1 >= 16)
            return VAR_1;
        return 0xFFFFFF00 | (VAR_1 << 4) | FUNC_0(VAR_0, 4);
    case 2:
        return FUNC_0(VAR_0, 16);
    default:
        return FUNC_0(VAR_0, 32);
    }
}
