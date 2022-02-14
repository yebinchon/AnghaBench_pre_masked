
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* prefix; scalar_t__* suffix; } ;
struct lzw_state {int code_bits; int init_code_bits; int next_code; TYPE_1__ dict; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct lzw_state *VAR_1)
{
    int VAR_2;

    VAR_1->code_bits = VAR_1->init_code_bits + 1;
    VAR_1->next_code = (1 << VAR_1->init_code_bits) + 2;

    for(VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    {
        VAR_1->dict.prefix[VAR_2] = 1 << 12;
        VAR_1->dict.suffix[VAR_2] = 0;
    }
}
