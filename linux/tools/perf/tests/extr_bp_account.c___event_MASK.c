
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int size; unsigned long bp_addr; int bp_len; int sample_period; int exclude_kernel; int exclude_hv; scalar_t__ config; int sample_type; int bp_type; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct perf_event_attr*,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (struct perf_event_attr*,int,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(bool VAR_5, void *VAR_6, struct perf_event_attr *VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_7, 0, sizeof(struct perf_event_attr));
 VAR_7->type = VAR_3;
 VAR_7->size = sizeof(struct perf_event_attr);

 VAR_7->config = 0;
 VAR_7->bp_type = VAR_5 ? VAR_1 : VAR_0;
 VAR_7->bp_addr = (unsigned long) VAR_6;
 VAR_7->bp_len = sizeof(long);

 VAR_7->sample_period = 1;
 VAR_7->sample_type = VAR_2;

 VAR_7->exclude_kernel = 1;
 VAR_7->exclude_hv = 1;

 VAR_8 = FUNC_3(VAR_7, -1, 0, -1,
     FUNC_1());
 if (VAR_8 < 0) {
  FUNC_2("failed opening event %llx\n", VAR_7->config);
  return VAR_4;
 }

 return VAR_8;
}
