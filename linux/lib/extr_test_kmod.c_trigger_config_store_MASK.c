
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmod_test_device {scalar_t__ test_is_oom; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct kmod_test_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct kmod_test_device*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_2,
       struct device_attribute *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 struct kmod_test_device *VAR_6 = FUNC_1(VAR_2);
 int VAR_7;

 if (VAR_6->test_is_oom)
  return -VAR_1;







 VAR_7 = FUNC_2(VAR_6);
 if (FUNC_3(VAR_7 < 0))
  goto out;







 if (FUNC_0(VAR_7 > 0))
  return -VAR_0;

 VAR_7 = VAR_5;
out:
 return VAR_7;
}
