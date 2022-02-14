
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_list {int dummy; } ;
struct add_data {int member_1; struct device_list* member_0; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct add_data*) ;

void FUNC_1(struct device_list *VAR_1, bool VAR_2)
{
 struct add_data VAR_3 = {VAR_1, VAR_2};
 FUNC_0(VAR_0, &VAR_3);
}
