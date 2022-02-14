
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_config {int num_threads; } ;
struct kmod_test_device {struct test_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct kmod_test_device* FUNC_0 (struct device*) ;
 int VAR_0 ;
 int FUNC_1 (struct kmod_test_device*,char const*,size_t,int *,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct kmod_test_device *VAR_5 = FUNC_0(VAR_1);
 struct test_config *VAR_6 = &VAR_5->config;

 return FUNC_1(VAR_5, VAR_3, VAR_4,
      &VAR_6->num_threads,
      VAR_0);
}
