
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {short* prefix; unsigned char* suffix; } ;
struct lzw_state {short next_code; TYPE_1__ dict; } ;



__attribute__((used)) static short FUNC_0(const struct lzw_state *VAR_0, short VAR_1, unsigned char VAR_2)
{
    short VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0->next_code; VAR_3++)
    {
        if (VAR_0->dict.prefix[VAR_3] == VAR_1 && VAR_0->dict.suffix[VAR_3] == VAR_2)
            return VAR_3;
    }

    return -1;
}
