
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_pass_perf {scalar_t__ peak; scalar_t__ avg; scalar_t__ last; } ;
struct mp_frame_perf {int count; int * desc; struct mp_pass_perf* perf; } ;


 char* FUNC_0 (char*,char*,int ,int,int,int) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0, struct mp_frame_perf *VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_1->count; VAR_2++) {
        struct mp_pass_perf *VAR_3 = &VAR_1->perf[VAR_2];
        VAR_0 = FUNC_0(VAR_0,
                  "- %s: last %dus avg %dus peak %dus\n", VAR_1->desc[VAR_2],
                  (int)VAR_3->last/1000, (int)VAR_3->avg/1000, (int)VAR_3->peak/1000);
    }

    return VAR_0;
}
