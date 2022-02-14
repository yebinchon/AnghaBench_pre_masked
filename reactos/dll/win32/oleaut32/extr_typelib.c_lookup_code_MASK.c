
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitstream {int current; int* buffer; int length; } ;
typedef int DWORD ;
typedef int BYTE ;



__attribute__((used)) static const char *FUNC_0(const BYTE *VAR_0, DWORD VAR_1, struct bitstream *VAR_2)
{
    const BYTE *VAR_3 = VAR_0;

    while (VAR_3 < VAR_0 + VAR_1 && *VAR_3 == 0x80)
    {
        if (VAR_3 + 2 >= VAR_0 + VAR_1) return ((void*)0);

        if (!(VAR_2->current & 0xff))
        {
            if (!VAR_2->length) return ((void*)0);
            VAR_2->current = (*VAR_2->buffer << 8) | 1;
            VAR_2->buffer++;
            VAR_2->length--;
        }

        if (VAR_2->current & 0x8000)
        {
            VAR_3 += 3;
        }
        else
        {
            VAR_3 = VAR_0 + (*(VAR_3 + 2) | (*(VAR_3 + 1) << 8));
        }

        VAR_2->current <<= 1;
    }

    if (VAR_3 + 1 < VAR_0 + VAR_1 && *(VAR_3 + 1))
    {

        const BYTE *VAR_4 = VAR_3 + 1;
        while (VAR_4 < VAR_0 + VAR_1 && *VAR_4) VAR_4++;
        return (VAR_4 < VAR_0 + VAR_1) ? (const char *)(VAR_3 + 1) : ((void*)0);
    }

    return ((void*)0);
}
