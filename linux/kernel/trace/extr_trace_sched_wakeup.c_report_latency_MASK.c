
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct trace_array {scalar_t__ max_latency; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct trace_array *VAR_1, u64 VAR_2)
{
 if (VAR_0) {
  if (VAR_2 < VAR_0)
   return 0;
 } else {
  if (VAR_2 <= VAR_1->max_latency)
   return 0;
 }
 return 1;
}
