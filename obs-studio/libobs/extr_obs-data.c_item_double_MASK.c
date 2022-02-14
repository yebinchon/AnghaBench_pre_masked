
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_data_number {scalar_t__ type; double double_val; scalar_t__ int_val; } ;
struct obs_data_item {int dummy; } ;
typedef struct obs_data_number* (* get_data_t ) (struct obs_data_item*) ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline double FUNC_0(struct obs_data_item *VAR_1,
     get_data_t VAR_2)
{
 if (VAR_1 && VAR_2(VAR_1)) {
  struct obs_data_number *VAR_3 = VAR_2(VAR_1);
  return (VAR_3->type == VAR_0) ? (double)VAR_3->int_val
             : VAR_3->double_val;
 }

 return 0.0;
}
