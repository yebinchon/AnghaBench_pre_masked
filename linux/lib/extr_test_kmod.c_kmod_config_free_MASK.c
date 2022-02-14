
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_config {int dummy; } ;
struct kmod_test_device {int config_mutex; struct test_config config; } ;


 int FUNC_0 (struct test_config*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct kmod_test_device *VAR_0)
{
 struct test_config *VAR_1;

 if (!VAR_0)
  return;

 VAR_1 = &VAR_0->config;

 FUNC_1(&VAR_0->config_mutex);
 FUNC_0(VAR_1);
 FUNC_2(&VAR_0->config_mutex);
}
