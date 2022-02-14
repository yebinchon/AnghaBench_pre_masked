
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmod_test_device {int trigger_mutex; int config_mutex; int misc_dev; int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct kmod_test_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct kmod_test_device*) ;

__attribute__((used)) static
void FUNC_6(struct kmod_test_device *VAR_0)
{
 FUNC_3(&VAR_0->trigger_mutex);
 FUNC_3(&VAR_0->config_mutex);

 FUNC_5(VAR_0);

 FUNC_0(VAR_0->dev, "removing interface\n");
 FUNC_2(&VAR_0->misc_dev);

 FUNC_4(&VAR_0->config_mutex);
 FUNC_4(&VAR_0->trigger_mutex);

 FUNC_1(VAR_0);
}
