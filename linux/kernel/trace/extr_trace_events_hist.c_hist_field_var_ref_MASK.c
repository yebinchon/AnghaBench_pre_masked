
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tracing_map_elt {struct hist_elt_data* private_data; } ;
struct ring_buffer_event {int dummy; } ;
struct hist_field {size_t var_ref_idx; } ;
struct hist_elt_data {int * var_ref_vals; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static u64 FUNC_1(struct hist_field *VAR_0,
         struct tracing_map_elt *VAR_1,
         struct ring_buffer_event *VAR_2,
         void *VAR_3)
{
 struct hist_elt_data *VAR_4;
 u64 VAR_5 = 0;

 if (FUNC_0(!VAR_1))
  return VAR_5;

 VAR_4 = VAR_1->private_data;
 VAR_5 = VAR_4->var_ref_vals[VAR_0->var_ref_idx];

 return VAR_5;
}
