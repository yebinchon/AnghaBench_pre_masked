
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int word; int bit_index; int data_index; int size; int* data; } ;
typedef TYPE_1__ Jbig2MmrCtx ;



__attribute__((used)) static void
FUNC_0(Jbig2MmrCtx *VAR_0, int VAR_1)
{
    VAR_0->word <<= VAR_1;
    VAR_0->bit_index += VAR_1;
    while (VAR_0->bit_index >= 8) {
        VAR_0->bit_index -= 8;
        if (VAR_0->data_index + 4 < VAR_0->size)
            VAR_0->word |= (VAR_0->data[VAR_0->data_index + 4] << VAR_0->bit_index);
        VAR_0->data_index++;
    }
}
