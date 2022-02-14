
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ peak; scalar_t__ avg; scalar_t__ last; } ;
struct TYPE_4__ {scalar_t__ len; } ;
struct pass_info {TYPE_1__ perf; TYPE_2__ desc; } ;
struct gl_video {struct pass_info* pass; } ;


 int FUNC_0 (TYPE_2__) ;
 int FUNC_1 (struct gl_video*,char*,int ,int,int,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct gl_video *VAR_1)
{
    if (!VAR_1->pass)
        return;

    for (int VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        struct pass_info *VAR_3 = &VAR_1->pass[VAR_2];
        if (VAR_3->desc.len) {
            FUNC_1(VAR_1, "pass '%.*s': last %dus avg %dus peak %dus\n",
                     FUNC_0(VAR_3->desc),
                     (int)VAR_3->perf.last/1000,
                     (int)VAR_3->perf.avg/1000,
                     (int)VAR_3->perf.peak/1000);
        }
    }
}
