
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {short* prefix; unsigned char* suffix; } ;
struct lzw_state {size_t next_code; int code_bits; TYPE_1__ dict; } ;


 size_t VAR_0 ;

__attribute__((used)) static int FUNC_0(struct lzw_state *VAR_1, short VAR_2, unsigned char VAR_3)
{
    if (VAR_1->next_code < VAR_0)
    {
        VAR_1->dict.prefix[VAR_1->next_code] = VAR_2;
        VAR_1->dict.suffix[VAR_1->next_code] = VAR_3;

        if ((VAR_1->next_code & (VAR_1->next_code - 1)) == 0)
            VAR_1->code_bits++;

        VAR_1->next_code++;
        return VAR_1->next_code;
    }

    return -1;
}
