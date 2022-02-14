
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; } ;
struct mp_pass_perf {int dummy; } ;
struct pass_info {TYPE_1__ desc; struct mp_pass_perf perf; } ;
struct gl_video {size_t pass_idx; struct pass_info* pass; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct gl_video*,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_2(struct gl_video *VAR_1, struct mp_pass_perf VAR_2)
{
    if (!VAR_1->pass || VAR_1->pass_idx == VAR_0)
        return;

    struct pass_info *VAR_3 = &VAR_1->pass[VAR_1->pass_idx];
    VAR_3->perf = VAR_2;

    if (VAR_3->desc.len == 0)
        FUNC_1(VAR_1, &VAR_3->desc, FUNC_0("(unknown)"));

    VAR_1->pass_idx++;
}
