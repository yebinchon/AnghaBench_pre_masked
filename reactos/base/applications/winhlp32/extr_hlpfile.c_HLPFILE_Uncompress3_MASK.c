
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int num_phrases; unsigned int* phrases_offsets; int const* phrases_buffer; } ;
typedef TYPE_1__ HLPFILE ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int const*,unsigned int) ;
 int FUNC_2 (char*,char,unsigned int) ;

__attribute__((used)) static BOOL FUNC_3(HLPFILE* VAR_1, char* VAR_2, const char* VAR_3,
                                const BYTE* VAR_4, const BYTE* VAR_5)
{
    unsigned int VAR_6, VAR_7;

    for (; VAR_4 < VAR_5; VAR_4++)
    {
        if ((*VAR_4 & 1) == 0)
        {
            VAR_6 = *VAR_4 / 2;
            if (VAR_6 > VAR_1->num_phrases)
            {
                FUNC_0("index in phrases %d/%d\n", VAR_6, VAR_1->num_phrases);
                VAR_7 = 0;
            }
            else
            {
                VAR_7 = VAR_1->phrases_offsets[VAR_6 + 1] - VAR_1->phrases_offsets[VAR_6];
                if (VAR_2 + VAR_7 <= VAR_3)
                    FUNC_1(VAR_2, &VAR_1->phrases_buffer[VAR_1->phrases_offsets[VAR_6]], VAR_7);
            }
        }
        else if ((*VAR_4 & 0x03) == 0x01)
        {
            VAR_6 = (*VAR_4 + 1) * 64;
            VAR_6 += *++VAR_4;
            if (VAR_6 > VAR_1->num_phrases)
            {
                FUNC_0("index in phrases %d/%d\n", VAR_6, VAR_1->num_phrases);
                VAR_7 = 0;
            }
            else
            {
                VAR_7 = VAR_1->phrases_offsets[VAR_6 + 1] - VAR_1->phrases_offsets[VAR_6];
                if (VAR_2 + VAR_7 <= VAR_3)
                    FUNC_1(VAR_2, &VAR_1->phrases_buffer[VAR_1->phrases_offsets[VAR_6]], VAR_7);
            }
        }
        else if ((*VAR_4 & 0x07) == 0x03)
        {
            VAR_7 = (*VAR_4 / 8) + 1;
            if (VAR_2 + VAR_7 <= VAR_3)
                FUNC_1(VAR_2, VAR_4 + 1, VAR_7);
            VAR_4 += VAR_7;
        }
        else
        {
            VAR_7 = (*VAR_4 / 16) + 1;
            if (VAR_2 + VAR_7 <= VAR_3)
                FUNC_2(VAR_2, ((*VAR_4 & 0x0F) == 0x07) ? ' ' : 0, VAR_7);
        }
        VAR_2 += VAR_7;
    }

    if (VAR_2 > VAR_3) FUNC_0("buffer overflow (%p > %p)\n", VAR_2, VAR_3);
    return VAR_0;
}
