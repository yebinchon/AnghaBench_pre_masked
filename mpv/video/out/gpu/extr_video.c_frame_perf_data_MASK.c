
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int start; int len; } ;
struct pass_info {TYPE_1__ desc; int perf; } ;
struct mp_frame_perf {size_t count; int * desc; int * perf; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct pass_info VAR_1[], struct mp_frame_perf *VAR_2)
{
    for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        if (!VAR_1[VAR_3].desc.len)
            break;
        VAR_2->perf[VAR_2->count] = VAR_1[VAR_3].perf;
        VAR_2->desc[VAR_2->count] = VAR_1[VAR_3].desc.start;
        VAR_2->count++;
    }
}
