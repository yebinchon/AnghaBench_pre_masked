
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int BYTE ;



__attribute__((used)) static BYTE *FUNC_0(BYTE *VAR_0, ULONG *VAR_1)
{
    if ((*VAR_0 & 0x80) == 0x00)
    {
        *VAR_1 = (*VAR_0 & 0x7f);
        return VAR_0 + 1;
    }

    if ((*VAR_0 & 0xC0) == 0x80)
    {
        *VAR_1 = ((*VAR_0 & 0x3f) << 8 | *(VAR_0 + 1));
        return VAR_0 + 2;
    }

    if ((*VAR_0 & 0xE0) == 0xC0)
    {
        *VAR_1 = ((*VAR_0 & 0x1f) << 24 | *(VAR_0 + 1) << 16 |
                    *(VAR_0 + 2) << 8 | *(VAR_0 + 3));
        return VAR_0 + 4;
    }

    *VAR_1 = (ULONG)-1;
    return 0;
}
