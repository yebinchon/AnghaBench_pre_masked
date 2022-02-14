
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int offset_bits; int this_word; int next_word; int ctx; scalar_t__ offset; } ;
typedef TYPE_1__ Jbig2HuffmanState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,int*) ;
 int FUNC_1 (int ,int ,int,char*) ;

int
FUNC_2(Jbig2HuffmanState *VAR_1)
{
    int VAR_2 = VAR_1->offset_bits & 7;
    int VAR_3;

    if (VAR_2) {
        VAR_2 = 8 - VAR_2;
        VAR_1->offset_bits += VAR_2;
        VAR_1->this_word = (VAR_1->this_word << VAR_2) | (VAR_1->next_word >> (32 - VAR_1->offset_bits));
    }

    if (VAR_1->offset_bits >= 32) {
        VAR_1->this_word = VAR_1->next_word;
        VAR_1->offset += 4;
        VAR_3 = FUNC_0(VAR_1, VAR_1->offset + 4, &VAR_1->next_word);
        if (VAR_3 < 0) {
            return FUNC_1(VAR_1->ctx, VAR_0, -1, "failed to read next huffman word when skipping");
        }
        VAR_1->offset_bits -= 32;
        if (VAR_1->offset_bits) {
            VAR_1->this_word = (VAR_1->this_word << VAR_1->offset_bits) | (VAR_1->next_word >> (32 - VAR_1->offset_bits));
        }
    }
    return 0;
}
