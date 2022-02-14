
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_config {int test_case; int * test_driver; int * test_fs; } ;
struct kmod_test_device {int test_is_oom; int config_mutex; struct test_config config; } ;
typedef enum kmod_test_case { ____Placeholder_kmod_test_case } kmod_test_case ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct test_config*,char const*,int) ;
 int FUNC_1 (struct test_config*,char const*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (struct kmod_test_device*) ;

__attribute__((used)) static int FUNC_7(struct kmod_test_device *VAR_2,
       enum kmod_test_case VAR_3,
       const char *VAR_4)
{
 int VAR_5 = 0;
 struct test_config *VAR_6 = &VAR_2->config;

 FUNC_3(&VAR_2->config_mutex);

 switch (VAR_3) {
 case 129:
  FUNC_2(VAR_6->test_driver);
  VAR_6->test_driver = ((void*)0);
  VAR_5 = FUNC_0(VAR_6, VAR_4,
            FUNC_5(VAR_4));
  break;
 case 128:
  FUNC_2(VAR_6->test_fs);
  VAR_6->test_driver = ((void*)0);
  VAR_5 = FUNC_1(VAR_6, VAR_4,
          FUNC_5(VAR_4));
  break;
 default:
  FUNC_4(&VAR_2->config_mutex);
  return -VAR_0;
 }

 VAR_6->test_case = VAR_3;

 FUNC_4(&VAR_2->config_mutex);

 if (VAR_5 <= 0 || VAR_5 != FUNC_5(VAR_4)) {
  VAR_2->test_is_oom = 1;
  return -VAR_1;
 }

 VAR_2->test_is_oom = 0;

 return FUNC_6(VAR_2);
}
