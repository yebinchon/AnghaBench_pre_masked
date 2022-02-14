
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_config {int test_result; } ;
struct kmod_test_device {int trigger_mutex; int config_mutex; int dev; struct test_config config; } ;


 int FUNC_0 (struct kmod_test_device*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct kmod_test_device *VAR_0)
{
 struct test_config *VAR_1 = &VAR_0->config;
 int VAR_2;

 FUNC_2(&VAR_0->trigger_mutex);
 FUNC_2(&VAR_0->config_mutex);

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 < 0)
  goto out;
 FUNC_1(VAR_0->dev, "General test result: %d\n",
   VAR_1->test_result);
 VAR_2 = 0;

out:
 FUNC_3(&VAR_0->config_mutex);
 FUNC_3(&VAR_0->trigger_mutex);

 return VAR_2;
}
