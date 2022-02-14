
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_config {int test_case; } ;
struct kmod_test_device {int dev; scalar_t__ done; struct test_config config; } ;


 int VAR_0 ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct kmod_test_device*) ;
 int FUNC_2 (struct kmod_test_device*) ;

__attribute__((used)) static int FUNC_3(struct kmod_test_device *VAR_1)
{
 struct test_config *VAR_2 = &VAR_1->config;

 VAR_1->done = 0;

 switch (VAR_2->test_case) {
 case 129:
  return FUNC_1(VAR_1);
 case 128:
  return FUNC_2(VAR_1);
 default:
  FUNC_0(VAR_1->dev,
    "Invalid test case requested: %u\n",
    VAR_2->test_case);
  return -VAR_0;
 }
}
