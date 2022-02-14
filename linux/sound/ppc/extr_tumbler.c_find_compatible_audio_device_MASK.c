
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct device_node*,char const*) ;
 struct device_node* FUNC_1 (int *,char*) ;
 struct device_node* FUNC_2 (struct device_node*,struct device_node*) ;
 int FUNC_3 (struct device_node*) ;

__attribute__((used)) static struct device_node *FUNC_4(const char *VAR_0)
{
 struct device_node *VAR_1;
 struct device_node *VAR_2;

 VAR_1 = FUNC_1(((void*)0), "gpio");
 if (!VAR_1)
  return ((void*)0);

 for (VAR_2 = FUNC_2(VAR_1, ((void*)0)); VAR_2;
   VAR_2 = FUNC_2(VAR_1, VAR_2)) {
  if (FUNC_0(VAR_2, VAR_0))
   break;
 }
 FUNC_3(VAR_1);
 return VAR_2;
}
