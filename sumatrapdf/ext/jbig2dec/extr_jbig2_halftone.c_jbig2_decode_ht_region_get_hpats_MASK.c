
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int referred_to_segment_count; int flags; scalar_t__ result; int * referred_to_segments; } ;
typedef TYPE_1__ Jbig2Segment ;
typedef int Jbig2PatternDict ;
typedef int Jbig2Ctx ;


 TYPE_1__* FUNC_0 (int *,int ) ;

__attribute__((used)) static Jbig2PatternDict *
FUNC_1(Jbig2Ctx *VAR_0, Jbig2Segment *VAR_1)
{
    int VAR_2 = 0;
    Jbig2PatternDict *VAR_3 = ((void*)0);
    Jbig2Segment *VAR_4 = ((void*)0);


    while (!VAR_3 && VAR_1->referred_to_segment_count > VAR_2) {
        VAR_4 = FUNC_0(VAR_0, VAR_1->referred_to_segments[VAR_2]);
        if (VAR_4) {

            if ((VAR_4->flags & 0x3f) == 16 && VAR_4->result) {
                VAR_3 = (Jbig2PatternDict *) VAR_4->result;
                return VAR_3;
            }
        }
        VAR_2++;
    }
    return VAR_3;
}
