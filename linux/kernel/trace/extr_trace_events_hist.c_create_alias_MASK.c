
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_trigger_data {int dummy; } ;
struct hist_field {int var_ref_idx; int event_name; int system; struct hist_field** operands; int fn; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct hist_field* FUNC_0 (struct hist_trigger_data*,int *,unsigned long,char*) ;
 int FUNC_1 (struct hist_field*,int ) ;
 scalar_t__ FUNC_2 (struct hist_field*,struct hist_field*,int ,int ) ;

__attribute__((used)) static struct hist_field *FUNC_3(struct hist_trigger_data *VAR_2,
           struct hist_field *VAR_3,
           char *VAR_4)
{
 struct hist_field *VAR_5 = ((void*)0);
 unsigned long VAR_6 = VAR_0 | VAR_1;

 VAR_5 = FUNC_0(VAR_2, ((void*)0), VAR_6, VAR_4);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->fn = VAR_3->fn;
 VAR_5->operands[0] = VAR_3;

 if (FUNC_2(VAR_5, VAR_3, VAR_3->system, VAR_3->event_name)) {
  FUNC_1(VAR_5, 0);
  return ((void*)0);
 }

 VAR_5->var_ref_idx = VAR_3->var_ref_idx;

 return VAR_5;
}
