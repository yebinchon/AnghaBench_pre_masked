
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline bool FUNC_0(const unsigned char *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    return VAR_0[(VAR_2 * ((VAR_3 + 7) >> 3)) + (VAR_1 >> 3)] & 1 << (VAR_1 & 7);
}
