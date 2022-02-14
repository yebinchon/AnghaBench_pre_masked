
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GUID ;



__attribute__((used)) static inline int FUNC_0(GUID *VAR_0)
{
    int VAR_1, VAR_2 = 0;

    for (VAR_1 = 0; VAR_1 < 8; VAR_1 ++)
        VAR_2 ^= ((const short *)VAR_0)[VAR_1];

    return VAR_2 & 0x1f;
}
