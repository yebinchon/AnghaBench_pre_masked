
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree {scalar_t__ next_node; TYPE_1__* nodes; } ;
struct TYPE_2__ {int length; int value; int is_value; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct tree *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6 = 0, VAR_7;
    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
        VAR_6 = (VAR_6 << 1) | ((VAR_3 >> VAR_7) & 1);

    if (VAR_4 <= VAR_1) {
        if (VAR_2->nodes[VAR_6].length)
            return 0;
        VAR_2->nodes[VAR_6].length = VAR_4;
        VAR_2->nodes[VAR_6].value = VAR_5;
        VAR_2->nodes[VAR_6].is_value = 1;
        for (VAR_7 = 1; VAR_7 < (1 << (VAR_1 - VAR_4)); VAR_7++) {
            if (VAR_2->nodes[VAR_6 | (VAR_7 << VAR_4)].length)
                return 0;
            VAR_2->nodes[VAR_6 | (VAR_7 << VAR_4)] = VAR_2->nodes[VAR_6];
        }
        return 1;
    }

    VAR_6 &= (1 << VAR_1) - 1;
    if (VAR_2->nodes[VAR_6].is_value)
        return 0;
    VAR_2->nodes[VAR_6].length = VAR_1 + 1;
    if (!VAR_2->nodes[VAR_6].value)
        VAR_2->nodes[VAR_6].value = (1 << VAR_1) + VAR_2->next_node++ * 2;
    VAR_7 = VAR_2->nodes[VAR_6].value;
    VAR_4 -= VAR_1;

    while (VAR_4 > 1) {
        VAR_7 |= (VAR_3 >> (VAR_4 - 1)) & 1;
        if (VAR_2->nodes[VAR_7].is_value)
            return 0;
        if (!VAR_2->nodes[VAR_7].value) {
            if (VAR_2->next_node == VAR_0)
                return 0;
            VAR_2->nodes[VAR_7].value = (1 << VAR_1) + VAR_2->next_node++ * 2;
        }
        VAR_7 = VAR_2->nodes[VAR_7].value;
        VAR_4--;
    }
    VAR_7 |= VAR_3 & 1;
    if (VAR_2->nodes[VAR_7].value || VAR_2->nodes[VAR_7].is_value)
        return 0;
    VAR_2->nodes[VAR_7].value = VAR_5;
    VAR_2->nodes[VAR_7].is_value = 1;

    return 1;
}
