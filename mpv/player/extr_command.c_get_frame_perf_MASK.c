
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int int64; } ;
struct mpv_node {TYPE_1__ u; } ;
struct mp_pass_perf {int last; int avg; int peak; int count; int* samples; } ;
struct mp_frame_perf {int count; int * desc; struct mp_pass_perf* perf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mpv_node* FUNC_0 (struct mpv_node*,int ) ;
 struct mpv_node* FUNC_1 (struct mpv_node*,char*,int ) ;
 int FUNC_2 (struct mpv_node*,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct mpv_node *VAR_3, struct mp_frame_perf *VAR_4)
{
    for (int VAR_5 = 0; VAR_5 < VAR_4->count; VAR_5++) {
        struct mp_pass_perf *VAR_6 = &VAR_4->perf[VAR_5];
        struct mpv_node *VAR_7 = FUNC_0(VAR_3, VAR_2);

        FUNC_2(VAR_7, "desc", VAR_4->desc[VAR_5]);
        FUNC_1(VAR_7, "last", VAR_0)->u.int64 = VAR_6->last;
        FUNC_1(VAR_7, "avg", VAR_0)->u.int64 = VAR_6->avg;
        FUNC_1(VAR_7, "peak", VAR_0)->u.int64 = VAR_6->peak;
        FUNC_1(VAR_7, "count", VAR_0)->u.int64 = VAR_6->count;
        struct mpv_node *VAR_8 = FUNC_1(VAR_7, "samples", VAR_1);
        for (int VAR_9 = 0; VAR_9 < VAR_6->count; VAR_9++)
            FUNC_0(VAR_8, VAR_0)->u.int64 = VAR_6->samples[VAR_9];
    }
}
