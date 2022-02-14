
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
typedef int byte ;
struct TYPE_8__ {int RANGELOW; TYPE_2__* ext_table; } ;
struct TYPE_11__ {int flags; int PREFLEN; int RANGELEN; TYPE_1__ u; } ;
struct TYPE_10__ {int offset_bits; int this_word; scalar_t__ offset_limit; scalar_t__ offset; int next_word; int ctx; } ;
struct TYPE_9__ {int log_table_size; TYPE_4__* entries; } ;
typedef TYPE_2__ Jbig2HuffmanTable ;
typedef TYPE_3__ Jbig2HuffmanState ;
typedef TYPE_4__ Jbig2HuffmanEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,scalar_t__,int*) ;
 int FUNC_1 (int ,int ,int,char*,...) ;

int32_t
FUNC_2(Jbig2HuffmanState *VAR_5, const Jbig2HuffmanTable *VAR_6, bool *VAR_7)
{
    Jbig2HuffmanEntry *VAR_8;
    byte VAR_9;
    int VAR_10 = VAR_5->offset_bits;
    uint32_t VAR_11 = VAR_5->this_word;
    uint32_t VAR_12;
    int VAR_13;
    int32_t VAR_14;

    if (VAR_5->offset_limit && VAR_5->offset >= VAR_5->offset_limit) {
        if (VAR_7)
            *VAR_7 = -1;
        return FUNC_1(VAR_5->ctx, VAR_3, -1, "end of Jbig2WordStream reached at offset %d", VAR_5->offset);
    }

    for (;;) {
        int VAR_15 = VAR_6->log_table_size;
        int VAR_16;
        int VAR_17;


        VAR_8 = &VAR_6->entries[VAR_15 > 0 ? VAR_11 >> (32 - VAR_15) : 0];
        VAR_9 = VAR_8->flags;
        VAR_16 = VAR_8->PREFLEN;
        if (VAR_9 == (byte) -1 && VAR_16 == (byte) -1 && VAR_8->u.RANGELOW == -1) {
            if (VAR_7)
                *VAR_7 = -1;
            return FUNC_1(VAR_5->ctx, VAR_3, -1, "encountered unpopulated huffman table entry");
        }

        VAR_12 = VAR_5->next_word;
        VAR_10 += VAR_16;
        if (VAR_10 >= 32) {
            VAR_11 = VAR_12;
            VAR_5->offset += 4;
            VAR_17 = FUNC_0(VAR_5, VAR_5->offset + 4, &VAR_12);
            if (VAR_17 < 0) {
                return FUNC_1(VAR_5->ctx, VAR_4, -1, "failed to get next huffman word");
            }
            VAR_10 -= 32;
            VAR_5->next_word = VAR_12;
            VAR_16 = VAR_10;
        }
        if (VAR_16)
            VAR_11 = (VAR_11 << VAR_16) | (VAR_12 >> (32 - VAR_10));
        if (VAR_9 & VAR_0) {
            VAR_6 = VAR_8->u.ext_table;
        } else
            break;
    }
    VAR_14 = VAR_8->u.RANGELOW;
    VAR_13 = VAR_8->RANGELEN;
    if (VAR_13 > 0) {
        int32_t VAR_18;
        int VAR_19;

        VAR_18 = VAR_11 >> (32 - VAR_13);
        if (VAR_9 & VAR_1)
            VAR_14 -= VAR_18;
        else
            VAR_14 += VAR_18;

        VAR_10 += VAR_13;
        if (VAR_10 >= 32) {
            VAR_11 = VAR_12;
            VAR_5->offset += 4;
            VAR_19 = FUNC_0(VAR_5, VAR_5->offset + 4, &VAR_12);
            if (VAR_19 < 0) {
                return FUNC_1(VAR_5->ctx, VAR_4, -1, "failed to get next huffman word");
            }
            VAR_10 -= 32;
            VAR_5->next_word = VAR_12;
            VAR_13 = VAR_10;
        }
        if (VAR_13)
            VAR_11 = (VAR_11 << VAR_13) | (VAR_12 >> (32 - VAR_10));
    }

    VAR_5->this_word = VAR_11;
    VAR_5->offset_bits = VAR_10;

    if (VAR_7 != ((void*)0))
        *VAR_7 = (VAR_9 & VAR_2);

    return VAR_14;
}
