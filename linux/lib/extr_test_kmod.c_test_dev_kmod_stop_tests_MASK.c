
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_config {unsigned int num_threads; } ;
struct kmod_test_device_info {scalar_t__ need_mod_put; scalar_t__ task_sync; } ;
struct kmod_test_device {int thread_mutex; int dev; struct kmod_test_device_info* info; struct test_config config; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct kmod_test_device_info*) ;

__attribute__((used)) static void FUNC_6(struct kmod_test_device *VAR_0)
{
 struct test_config *VAR_1 = &VAR_0->config;
 struct kmod_test_device_info *VAR_2;
 unsigned int VAR_3;

 FUNC_1(VAR_0->dev, "Ending request_module() tests\n");

 FUNC_3(&VAR_0->thread_mutex);

 for (VAR_3=0; VAR_3 < VAR_1->num_threads; VAR_3++) {
  VAR_2 = &VAR_0->info[VAR_3];
  if (VAR_2->task_sync && !FUNC_0(VAR_2->task_sync)) {
   FUNC_1(VAR_0->dev,
     "Stopping still-running thread %i\n", VAR_3);
   FUNC_2(VAR_2->task_sync);
  }
  if (VAR_2->task_sync && VAR_2->need_mod_put)
   FUNC_5(VAR_2);
 }

 FUNC_4(&VAR_0->thread_mutex);
}
