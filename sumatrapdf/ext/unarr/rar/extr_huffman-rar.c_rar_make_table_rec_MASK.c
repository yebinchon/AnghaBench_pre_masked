
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct huffman_code {int numentries; TYPE_2__* tree; TYPE_1__* table; } ;
struct TYPE_4__ {int* branches; } ;
struct TYPE_3__ {int length; int value; } ;


 scalar_t__ FUNC_0 (struct huffman_code*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static bool FUNC_2(struct huffman_code *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5 = 1 << (VAR_4 - VAR_3);

    if (VAR_1 < 0 || VAR_0->numentries <= VAR_1) {
        FUNC_1("Invalid data in bitstream");
        return 0;
    }

    if (FUNC_0(VAR_0, VAR_1)) {
        int VAR_6;
        for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
            VAR_0->table[VAR_2 + VAR_6].length = VAR_3;
            VAR_0->table[VAR_2 + VAR_6].value = VAR_0->tree[VAR_1].branches[0];
        }
    }
    else if (VAR_3 == VAR_4) {
        VAR_0->table[VAR_2].length = VAR_4 + 1;
        VAR_0->table[VAR_2].value = VAR_1;
    }
    else {
        if (!FUNC_2(VAR_0, VAR_0->tree[VAR_1].branches[0], VAR_2, VAR_3 + 1, VAR_4))
            return 0;
        if (!FUNC_2(VAR_0, VAR_0->tree[VAR_1].branches[1], VAR_2 + VAR_5 / 2, VAR_3 + 1, VAR_4))
            return 0;
    }
    return 1;
}
