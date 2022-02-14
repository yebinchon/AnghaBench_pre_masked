
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint32_t FUNC_1(unsigned int VAR_0, int VAR_1)
{
    if (!FUNC_0(VAR_1 < (1 << 24) || VAR_0 < (1 << 8))
        || !FUNC_0(VAR_1 > 0 && VAR_0 > 0))
        return 0;
    return ((VAR_1 << 8) & 0xFFFFFF00) | (VAR_0 & 0x000000FF);
}
