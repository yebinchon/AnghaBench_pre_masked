
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_config {int num_threads; int test_case; char* test_driver; char* test_fs; } ;
struct kmod_test_device {int config_mutex; struct test_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (struct device*) ;
 struct kmod_test_device* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,scalar_t__,char*,...) ;
 char* FUNC_5 (int) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
      struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct kmod_test_device *VAR_4 = FUNC_1(VAR_1);
 struct test_config *VAR_5 = &VAR_4->config;
 int VAR_6 = 0;

 FUNC_2(&VAR_4->config_mutex);

 VAR_6 += FUNC_4(VAR_3, VAR_0,
   "Custom trigger configuration for: %s\n",
   FUNC_0(VAR_1));

 VAR_6 += FUNC_4(VAR_3+VAR_6, VAR_0 - VAR_6,
   "Number of threads:\t%u\n",
   VAR_5->num_threads);

 VAR_6 += FUNC_4(VAR_3+VAR_6, VAR_0 - VAR_6,
   "Test_case:\t%s (%u)\n",
   FUNC_5(VAR_5->test_case),
   VAR_5->test_case);

 if (VAR_5->test_driver)
  VAR_6 += FUNC_4(VAR_3+VAR_6, VAR_0 - VAR_6,
    "driver:\t%s\n",
    VAR_5->test_driver);
 else
  VAR_6 += FUNC_4(VAR_3+VAR_6, VAR_0 - VAR_6,
    "driver:\tEMPTY\n");

 if (VAR_5->test_fs)
  VAR_6 += FUNC_4(VAR_3+VAR_6, VAR_0 - VAR_6,
    "fs:\t%s\n",
    VAR_5->test_fs);
 else
  VAR_6 += FUNC_4(VAR_3+VAR_6, VAR_0 - VAR_6,
    "fs:\tEMPTY\n");

 FUNC_3(&VAR_4->config_mutex);

 return VAR_6;
}
