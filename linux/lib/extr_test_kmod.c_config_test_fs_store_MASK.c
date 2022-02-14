
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_config {int * test_fs; } ;
struct kmod_test_device {int config_mutex; struct test_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct test_config*,char const*,size_t) ;
 struct kmod_test_device* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
        struct device_attribute *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 struct kmod_test_device *VAR_4 = FUNC_1(VAR_0);
 struct test_config *VAR_5 = &VAR_4->config;
 int VAR_6;

 FUNC_3(&VAR_4->config_mutex);

 FUNC_2(VAR_5->test_fs);
 VAR_5->test_fs = ((void*)0);

 VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_3);
 FUNC_4(&VAR_4->config_mutex);

 return VAR_6;
}
