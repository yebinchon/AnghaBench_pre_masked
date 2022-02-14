
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union perf_mem_data_src {void* mem_snoop; } ;
struct hist_entry {TYPE_1__* mem_info; } ;
typedef int int64_t ;
struct TYPE_2__ {union perf_mem_data_src data_src; } ;


 void* VAR_0 ;

__attribute__((used)) static int64_t
FUNC_0(struct hist_entry *VAR_1, struct hist_entry *VAR_2)
{
 union perf_mem_data_src VAR_3;
 union perf_mem_data_src VAR_4;

 if (VAR_1->mem_info)
  VAR_3 = VAR_1->mem_info->data_src;
 else
  VAR_3.mem_snoop = VAR_0;

 if (VAR_2->mem_info)
  VAR_4 = VAR_2->mem_info->data_src;
 else
  VAR_4.mem_snoop = VAR_0;

 return (int64_t)(VAR_4.mem_snoop - VAR_3.mem_snoop);
}
