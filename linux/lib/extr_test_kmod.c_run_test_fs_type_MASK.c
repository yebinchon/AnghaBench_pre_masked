
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_config {scalar_t__ num_threads; scalar_t__ test_fs; int test_case; } ;
struct kmod_test_device {int dev; struct test_config config; } ;


 int FUNC_0 (int ,char*,scalar_t__,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kmod_test_device*) ;

__attribute__((used)) static int FUNC_3(struct kmod_test_device *VAR_0)
{
 struct test_config *VAR_1 = &VAR_0->config;

 FUNC_0(VAR_0->dev, "Test case: %s (%u)\n",
   FUNC_1(VAR_1->test_case),
   VAR_1->test_case);
 FUNC_0(VAR_0->dev, "Test filesystem to load: %s\n",
   VAR_1->test_fs);
 FUNC_0(VAR_0->dev, "Number of threads to run: %u\n",
   VAR_1->num_threads);
 FUNC_0(VAR_0->dev, "Thread IDs will range from 0 - %u\n",
   VAR_1->num_threads - 1);

 return FUNC_2(VAR_0);
}
