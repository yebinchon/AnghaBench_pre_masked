
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_config {int test_result; } ;
struct kmod_test_device {struct test_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct kmod_test_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct kmod_test_device*,char const*,size_t,int *) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
     struct device_attribute *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 struct kmod_test_device *VAR_4 = FUNC_0(VAR_0);
 struct test_config *VAR_5 = &VAR_4->config;

 return FUNC_1(VAR_4, VAR_2, VAR_3,
       &VAR_5->test_result);
}
