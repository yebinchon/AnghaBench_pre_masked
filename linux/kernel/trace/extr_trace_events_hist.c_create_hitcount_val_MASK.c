
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_trigger_data {scalar_t__ n_vals; int n_fields; int * fields; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct hist_trigger_data*,int *,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct hist_trigger_data *VAR_5)
{
 VAR_5->fields[VAR_3] =
  FUNC_1(VAR_5, ((void*)0), VAR_2, ((void*)0));
 if (!VAR_5->fields[VAR_3])
  return -VAR_1;

 VAR_5->n_vals++;
 VAR_5->n_fields++;

 if (FUNC_0(VAR_5->n_vals > VAR_4))
  return -VAR_0;

 return 0;
}
