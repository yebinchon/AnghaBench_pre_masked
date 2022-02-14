
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_data_item {scalar_t__ type; } ;
typedef int obs_data_t ;
typedef int obs_data_array_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (struct obs_data_item*) ;
 int * FUNC_1 (struct obs_data_item*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct obs_data_item *VAR_2)
{
 if (VAR_2->type == VAR_1) {
  obs_data_t *VAR_3 = FUNC_1(VAR_2);
  FUNC_2(VAR_3);

 } else if (VAR_2->type == VAR_0) {
  obs_data_array_t *VAR_4 = FUNC_0(VAR_2);
  FUNC_3(VAR_4);
 }
}
