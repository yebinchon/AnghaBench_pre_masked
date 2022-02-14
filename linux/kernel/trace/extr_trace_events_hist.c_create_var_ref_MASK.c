
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_trigger_data {size_t n_var_refs; struct hist_field** var_refs; } ;
struct hist_field {scalar_t__ var_ref_idx; int hist_data; } ;


 unsigned long VAR_0 ;
 struct hist_field* FUNC_0 (int ,int *,unsigned long,int *) ;
 int FUNC_1 (struct hist_field*,int ) ;
 scalar_t__ FUNC_2 (struct hist_field*,struct hist_field*,char*,char*) ;

__attribute__((used)) static struct hist_field *FUNC_3(struct hist_trigger_data *VAR_1,
      struct hist_field *VAR_2,
      char *VAR_3, char *VAR_4)
{
 unsigned long VAR_5 = VAR_0;
 struct hist_field *VAR_6;

 VAR_6 = FUNC_0(VAR_2->hist_data, ((void*)0), VAR_5, ((void*)0));
 if (VAR_6) {
  if (FUNC_2(VAR_6, VAR_2, VAR_3, VAR_4)) {
   FUNC_1(VAR_6, 0);
   return ((void*)0);
  }

  VAR_1->var_refs[VAR_1->n_var_refs] = VAR_6;
  VAR_6->var_ref_idx = VAR_1->n_var_refs++;
 }

 return VAR_6;
}
