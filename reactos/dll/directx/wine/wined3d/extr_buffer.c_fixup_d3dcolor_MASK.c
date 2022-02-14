
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;



__attribute__((used)) static inline unsigned int FUNC_0(DWORD *VAR_0)
{
    DWORD VAR_1 = *VAR_0;
    *VAR_0 = 0;
    *VAR_0 |= (VAR_1 & 0xff00ff00u);
    *VAR_0 |= (VAR_1 & 0x00ff0000u) >> 16;
    *VAR_0 |= (VAR_1 & 0x000000ffu) << 16;

    return sizeof(*VAR_0);
}
