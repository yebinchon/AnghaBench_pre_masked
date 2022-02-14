
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_config {int test_case; } ;
struct kmod_test_device {struct test_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct kmod_test_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct kmod_test_device*,char const*,size_t,int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
          struct device_attribute *VAR_3,
          const char *VAR_4, size_t VAR_5)
{
 struct kmod_test_device *VAR_6 = FUNC_0(VAR_2);
 struct test_config *VAR_7 = &VAR_6->config;

 return FUNC_1(VAR_6, VAR_4, VAR_5,
       &VAR_7->test_case,
       VAR_0 + 1,
       VAR_1 - 1);
}
