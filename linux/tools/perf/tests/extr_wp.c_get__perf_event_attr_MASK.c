
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int size; int bp_type; unsigned long bp_addr; unsigned long bp_len; int sample_period; int exclude_kernel; int exclude_hv; int sample_type; scalar_t__ config; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct perf_event_attr*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct perf_event_attr *VAR_2, int VAR_3,
     void *VAR_4, unsigned long VAR_5)
{
 FUNC_0(VAR_2, 0, sizeof(struct perf_event_attr));
 VAR_2->type = VAR_1;
 VAR_2->size = sizeof(struct perf_event_attr);
 VAR_2->config = 0;
 VAR_2->bp_type = VAR_3;
 VAR_2->bp_addr = (unsigned long)VAR_4;
 VAR_2->bp_len = VAR_5;
 VAR_2->sample_period = 1;
 VAR_2->sample_type = VAR_0;
 VAR_2->exclude_kernel = 1;
 VAR_2->exclude_hv = 1;
}
