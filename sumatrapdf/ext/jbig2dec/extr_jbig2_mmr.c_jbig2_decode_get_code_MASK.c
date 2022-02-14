
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int val; int n_bits; } ;
typedef TYPE_1__ mmr_table_node ;
struct TYPE_7__ {int word; } ;
typedef TYPE_2__ Jbig2MmrCtx ;


 int FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_1(Jbig2MmrCtx *VAR_0, const mmr_table_node *VAR_1, int VAR_2)
{
    uint32_t VAR_3 = VAR_0->word;
    int VAR_4 = VAR_3 >> (32 - VAR_2);
    int VAR_5 = VAR_1[VAR_4].val;
    int VAR_6 = VAR_1[VAR_4].n_bits;

    if (VAR_6 > VAR_2) {
        int VAR_7 = (1 << (32 - VAR_2)) - 1;

        VAR_4 = VAR_5 + ((VAR_3 & VAR_7) >> (32 - VAR_6));
        VAR_5 = VAR_1[VAR_4].val;
        VAR_6 = VAR_2 + VAR_1[VAR_4].n_bits;
    }

    FUNC_0(VAR_0, VAR_6);

    return VAR_5;
}
