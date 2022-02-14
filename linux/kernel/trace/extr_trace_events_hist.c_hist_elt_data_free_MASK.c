
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_elt_data {struct hist_elt_data* comm; struct hist_elt_data** field_var_str; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct hist_elt_data*) ;

__attribute__((used)) static void FUNC_1(struct hist_elt_data *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(VAR_1->field_var_str[VAR_2]);

 FUNC_0(VAR_1->comm);
 FUNC_0(VAR_1);
}
