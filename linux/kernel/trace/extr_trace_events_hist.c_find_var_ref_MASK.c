
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_trigger_data {unsigned int n_var_refs; struct hist_field** var_refs; } ;
struct hist_field {int dummy; } ;


 scalar_t__ FUNC_0 (struct hist_field*,struct hist_trigger_data*,unsigned int) ;

__attribute__((used)) static struct hist_field *FUNC_1(struct hist_trigger_data *VAR_0,
           struct hist_trigger_data *VAR_1,
           unsigned int VAR_2)
{
 struct hist_field *VAR_3;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->n_var_refs; VAR_4++) {
  VAR_3 = VAR_0->var_refs[VAR_4];
  if (FUNC_0(VAR_3, VAR_1, VAR_2))
   return VAR_3;
 }

 return ((void*)0);
}
