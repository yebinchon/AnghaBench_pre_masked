
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_trigger_data {unsigned int n_fields; unsigned int n_vals; struct hist_field** fields; } ;
struct hist_field {scalar_t__ size; scalar_t__ is_signed; int type; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct hist_trigger_data *VAR_0,
       struct hist_trigger_data *VAR_1,
       unsigned int VAR_2)
{
 struct hist_field *VAR_3, *VAR_4;
 unsigned int VAR_5, VAR_6, VAR_7;

 if (VAR_1->n_fields - VAR_1->n_vals != VAR_2)
  return 0;

 VAR_6 = VAR_1->n_vals;
 VAR_7 = VAR_0->n_vals;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = VAR_1->fields[VAR_6 + VAR_5];
  VAR_3 = VAR_0->fields[VAR_7 + VAR_5];

  if (FUNC_0(VAR_4->type, VAR_3->type) != 0)
   return 0;
  if (VAR_4->size != VAR_3->size)
   return 0;
  if (VAR_4->is_signed != VAR_3->is_signed)
   return 0;
 }

 return 1;
}
