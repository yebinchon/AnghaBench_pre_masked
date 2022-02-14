
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct perf_record_stat_config {unsigned int nr; TYPE_1__* data; } ;
struct TYPE_2__ {scalar_t__ tag; scalar_t__ val; } ;



__attribute__((used)) static bool FUNC_0(struct perf_record_stat_config *VAR_0,
       u64 VAR_1, u64 VAR_2)
{
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->nr; VAR_3++) {
  if ((VAR_0->data[VAR_3].tag == VAR_1) &&
      (VAR_0->data[VAR_3].val == VAR_2))
   return 1;
 }

 return 0;
}
