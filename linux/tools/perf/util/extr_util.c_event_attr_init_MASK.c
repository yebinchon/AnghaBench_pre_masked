
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int exclude_host; int exclude_guest; int size; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct perf_event_attr *VAR_2)
{
 if (!VAR_1)
  VAR_2->exclude_host = 1;
 if (!VAR_0)
  VAR_2->exclude_guest = 1;

 VAR_2->size = sizeof(*VAR_2);
}
