
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmod_test_device {int trigger_mutex; int config_mutex; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct kmod_test_device*) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*) ;
 struct kmod_test_device* FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct kmod_test_device *VAR_5 = FUNC_3(VAR_1);
 int VAR_6;

 FUNC_4(&VAR_5->trigger_mutex);
 FUNC_4(&VAR_5->config_mutex);

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 < 0) {
  VAR_6 = -VAR_0;
  FUNC_1(VAR_1, "could not alloc settings for config trigger: %d\n",
         VAR_6);
  goto out;
 }

 FUNC_2(VAR_1, "reset\n");
 VAR_6 = VAR_4;

out:
 FUNC_5(&VAR_5->config_mutex);
 FUNC_5(&VAR_5->trigger_mutex);

 return VAR_6;
}
