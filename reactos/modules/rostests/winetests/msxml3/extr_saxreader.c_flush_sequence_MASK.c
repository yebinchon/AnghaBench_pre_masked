
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct call_sequence {int count; int size; TYPE_1__* sequence; } ;
struct TYPE_2__ {int attr_count; int arg3W; int arg2W; int arg1W; struct TYPE_2__* attributes; int valueW; int qnameW; int localW; int uriW; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_2(struct call_sequence **VAR_0, int VAR_1)
{
    int VAR_2;

    struct call_sequence *VAR_3 = VAR_0[VAR_1];

    for (VAR_2 = 0; VAR_2 < VAR_3->count; VAR_2++)
    {
        int VAR_4;

        for (VAR_4 = 0; VAR_4 < VAR_3->sequence[VAR_2].attr_count; VAR_4++)
        {
            FUNC_0(VAR_3->sequence[VAR_2].attributes[VAR_4].uriW);
            FUNC_0(VAR_3->sequence[VAR_2].attributes[VAR_4].localW);
            FUNC_0(VAR_3->sequence[VAR_2].attributes[VAR_4].qnameW);
            FUNC_0(VAR_3->sequence[VAR_2].attributes[VAR_4].valueW);
        }
        FUNC_1(VAR_3->sequence[VAR_2].attributes);
        VAR_3->sequence[VAR_2].attr_count = 0;

        FUNC_0(VAR_3->sequence[VAR_2].arg1W);
        FUNC_0(VAR_3->sequence[VAR_2].arg2W);
        FUNC_0(VAR_3->sequence[VAR_2].arg3W);
    }

    FUNC_1(VAR_3->sequence);
    VAR_3->sequence = ((void*)0);
    VAR_3->count = VAR_3->size = 0;
}
