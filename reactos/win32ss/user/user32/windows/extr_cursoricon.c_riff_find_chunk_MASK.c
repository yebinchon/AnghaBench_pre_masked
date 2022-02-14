
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* data; int data_size; } ;
typedef TYPE_1__ riff_chunk_t ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0( DWORD VAR_2, DWORD VAR_3, const riff_chunk_t *VAR_4, riff_chunk_t *VAR_5 )
{
    const unsigned char *VAR_6 = VAR_4->data;
    const unsigned char *VAR_7 = VAR_4->data + (VAR_4->data_size - (2 * sizeof(DWORD)));

    if (VAR_3 == VAR_0 || VAR_3 == VAR_1) VAR_7 -= sizeof(DWORD);

    while (VAR_6 < VAR_7)
    {
        if ((!VAR_3 && *(const DWORD *)VAR_6 == VAR_2 )
                || (VAR_3 && *(const DWORD *)VAR_6 == VAR_3 && *((const DWORD *)VAR_6 + 2) == VAR_2 ))
        {
            VAR_6 += sizeof(DWORD);
            VAR_5->data_size = (*(const DWORD *)VAR_6 + 1) & ~1;
            VAR_6 += sizeof(DWORD);
            if (VAR_3 == VAR_0 || VAR_3 == VAR_1) VAR_6 += sizeof(DWORD);
            VAR_5->data = VAR_6;

            return;
        }

        VAR_6 += sizeof(DWORD);
        VAR_6 += (*(const DWORD *)VAR_6 + 1) & ~1;
        VAR_6 += sizeof(DWORD);
    }
}
