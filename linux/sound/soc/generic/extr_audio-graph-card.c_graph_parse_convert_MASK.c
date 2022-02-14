
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct asoc_simple_data {int dummy; } ;


 int * VAR_0 ;
 int FUNC_0 (struct device*,struct device_node*,int *,struct asoc_simple_data*) ;
 struct device_node* FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1,
    struct device_node *VAR_2,
    struct asoc_simple_data *VAR_3)
{
 struct device_node *VAR_4 = VAR_1->of_node;
 struct device_node *VAR_5 = FUNC_1(VAR_2);
 struct device_node *VAR_6 = FUNC_1(VAR_5);
 struct device_node *VAR_7 = FUNC_2(VAR_2);

 FUNC_0(VAR_1, VAR_4, ((void*)0), VAR_3);
 FUNC_0(VAR_1, VAR_7, VAR_0, VAR_3);
 FUNC_0(VAR_1, VAR_6, ((void*)0), VAR_3);
 FUNC_0(VAR_1, VAR_5, ((void*)0), VAR_3);
 FUNC_0(VAR_1, VAR_2, ((void*)0), VAR_3);

 FUNC_3(VAR_5);
 FUNC_3(VAR_6);
 FUNC_3(VAR_7);
}
