
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; } ;
struct device {int dummy; } ;
typedef scalar_t__ resource_size_t ;



__attribute__((used)) static int FUNC_0(struct device *VAR_0, void *VAR_1, void *VAR_2)
{
 struct resource *VAR_3 = *((struct resource **) VAR_1);
 resource_size_t VAR_4 = *((resource_size_t *) VAR_2);

 return VAR_3->start == VAR_4;
}
