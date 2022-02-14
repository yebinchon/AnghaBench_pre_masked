
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;



__attribute__((used)) static float FUNC_0(DWORD VAR_0, DWORD VAR_1, DWORD VAR_2)
{
    DWORD VAR_3 = VAR_1 < 32 ? (1u << VAR_1) - 1 : ~0u;

    if (!VAR_1)
        return 1.0f;

    VAR_0 >>= VAR_2;
    VAR_0 &= VAR_3;

    return (float)VAR_0 / (float)VAR_3;
}
