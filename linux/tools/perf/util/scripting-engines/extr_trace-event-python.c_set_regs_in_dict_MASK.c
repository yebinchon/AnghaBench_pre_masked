
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_sample {int user_regs; int intr_regs; } ;
struct perf_event_attr {int sample_regs_user; int sample_regs_intr; } ;
struct TYPE_2__ {struct perf_event_attr attr; } ;
struct evsel {TYPE_1__ core; } ;
typedef int bf ;
typedef int PyObject ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,int ,char*,int) ;

__attribute__((used)) static void FUNC_3(PyObject *VAR_0,
        struct perf_sample *VAR_1,
        struct evsel *VAR_2)
{
 struct perf_event_attr *VAR_3 = &VAR_2->core.attr;
 char VAR_4[512];

 FUNC_2(&VAR_1->intr_regs, VAR_3->sample_regs_intr, VAR_4, sizeof(VAR_4));

 FUNC_1(VAR_0, "iregs",
   FUNC_0(VAR_4));

 FUNC_2(&VAR_1->user_regs, VAR_3->sample_regs_user, VAR_4, sizeof(VAR_4));

 FUNC_1(VAR_0, "uregs",
   FUNC_0(VAR_4));
}
