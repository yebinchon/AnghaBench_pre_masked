
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {unsigned int type; int size; unsigned long config; int disabled; int exclude_kernel; int exclude_hv; int exclude_guest; int read_format; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_event_attr*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct perf_event_attr *VAR_1,
     unsigned int VAR_2,
     unsigned long VAR_3)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->type = VAR_2;
 VAR_1->size = sizeof(struct perf_event_attr);
 VAR_1->config = VAR_3;
 VAR_1->read_format = VAR_0;
 VAR_1->disabled = 1;
 VAR_1->exclude_kernel = 1;
 VAR_1->exclude_hv = 1;
 VAR_1->exclude_guest = 1;
}
