
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_config {unsigned int num_threads; int test_result; } ;
struct kmod_test_device_info {int dummy; } ;
struct kmod_test_device {int thread_mutex; struct kmod_test_device_info* info; int dev; struct test_config config; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct kmod_test_device_info*) ;

__attribute__((used)) static void FUNC_4(struct kmod_test_device *VAR_0)
{
 struct test_config *VAR_1 = &VAR_0->config;
 struct kmod_test_device_info *VAR_2;
 unsigned int VAR_3;
 int VAR_4 = 0;
 int VAR_5 = 0;

 FUNC_1(&VAR_0->thread_mutex);

 FUNC_0(VAR_0->dev, "Results:\n");

 for (VAR_3=0; VAR_3 < VAR_1->num_threads; VAR_3++) {
  VAR_2 = &VAR_0->info[VAR_3];
  VAR_5 = FUNC_3(VAR_2);
  if (VAR_5)
   VAR_4 = VAR_5;
 }





 VAR_1->test_result = VAR_4;

 FUNC_2(&VAR_0->thread_mutex);
}
