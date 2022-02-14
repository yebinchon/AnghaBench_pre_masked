
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfit_test_resource {int dummy; } ;
struct device {int dummy; } ;


 void FUNC_0 (struct device*,void*) ;
 struct nfit_test_resource* FUNC_1 (long) ;

void FUNC_2(struct device *VAR_0, void *VAR_1)
{
 struct nfit_test_resource *VAR_2 = FUNC_1((long) VAR_1);

 if (VAR_2)
  return;
 return FUNC_0(VAR_0, VAR_1);
}
