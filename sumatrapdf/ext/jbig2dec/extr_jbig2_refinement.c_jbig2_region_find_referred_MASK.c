
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int referred_to_segment_count; int flags; int result; int * referred_to_segments; int number; } ;
typedef TYPE_1__ Jbig2Segment ;
typedef int Jbig2Ctx ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,char*,int ) ;
 TYPE_1__* FUNC_1 (int *,int ) ;

__attribute__((used)) static Jbig2Segment *
FUNC_2(Jbig2Ctx *VAR_1, Jbig2Segment *VAR_2)
{
    const int VAR_3 = VAR_2->referred_to_segment_count;
    Jbig2Segment *VAR_4;
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        VAR_4 = FUNC_1(VAR_1, VAR_2->referred_to_segments[VAR_5]);
        if (VAR_4 == ((void*)0)) {
            FUNC_0(VAR_1, VAR_0, VAR_2->number, "failed to find referred to segment %d", VAR_2->referred_to_segments[VAR_5]);
            continue;
        }
        switch (VAR_4->flags & 63) {
        case 4:
        case 20:
        case 36:
        case 40:
            if (VAR_4->result)
                return VAR_4;
            break;
        default:
            break;
        }
    }

    return ((void*)0);
}
