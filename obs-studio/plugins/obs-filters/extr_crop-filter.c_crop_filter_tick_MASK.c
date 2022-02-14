
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crop_filter_data {int add_val; int mul_val; } ;


 int FUNC_0 (float) ;
 int FUNC_1 (struct crop_filter_data*,int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, float VAR_1)
{
 struct crop_filter_data *VAR_2 = VAR_0;

 FUNC_2(&VAR_2->mul_val);
 FUNC_2(&VAR_2->add_val);
 FUNC_1(VAR_2, &VAR_2->mul_val, &VAR_2->add_val);

 FUNC_0(VAR_1);
}
