
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int referred_to_segment_count; int flags; int number; scalar_t__ result; int * referred_to_segments; } ;
typedef TYPE_1__ Jbig2Segment ;
typedef int Jbig2HuffmanParams ;
typedef int Jbig2Ctx ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,char*,int) ;
 TYPE_1__* FUNC_1 (int *,int ) ;

const Jbig2HuffmanParams *
FUNC_2(Jbig2Ctx *VAR_1, Jbig2Segment *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5 = 0;

    for (VAR_4 = 0; VAR_4 < VAR_2->referred_to_segment_count; VAR_4++) {
        const Jbig2Segment *const VAR_6 = FUNC_1(VAR_1, VAR_2->referred_to_segments[VAR_4]);

        if (VAR_6 && (VAR_6->flags & 63) == 53) {
            if (VAR_5 == VAR_3)
                return (const Jbig2HuffmanParams *)VAR_6->result;
            ++VAR_5;
        }
    }

    FUNC_0(VAR_1, VAR_0, VAR_2->number, "huffman table not found (%d)", VAR_3);
    return ((void*)0);
}
