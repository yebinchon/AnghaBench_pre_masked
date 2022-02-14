
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample {int intr_regs; } ;
struct perf_event_attr {int sample_regs_intr; } ;
typedef int FILE ;


 int FUNC_0 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct perf_sample *VAR_0,
          struct perf_event_attr *VAR_1, FILE *VAR_2)
{
 return FUNC_0(&VAR_0->intr_regs,
      VAR_1->sample_regs_intr, VAR_2);
}
