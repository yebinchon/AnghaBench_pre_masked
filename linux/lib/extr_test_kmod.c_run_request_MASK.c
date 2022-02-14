
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_config {int test_case; int test_fs; int test_driver; } ;
struct kmod_test_device_info {int need_mod_put; int thread_idx; int * task_sync; int fs_sync; int ret_sync; struct kmod_test_device* test_dev; } ;
struct kmod_test_device {int thread_mutex; int dev; struct test_config config; } ;


 int FUNC_0 () ;
 int VAR_0 ;


 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kmod_test_device*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (struct kmod_test_device_info*) ;

__attribute__((used)) static int FUNC_8(void *VAR_1)
{
 struct kmod_test_device_info *VAR_2 = VAR_1;
 struct kmod_test_device *VAR_3 = VAR_2->test_dev;
 struct test_config *VAR_4 = &VAR_3->config;

 switch (VAR_4->test_case) {
 case 129:
  VAR_2->ret_sync = FUNC_6("%s", VAR_4->test_driver);
  break;
 case 128:
  VAR_2->fs_sync = FUNC_2(VAR_4->test_fs);
  VAR_2->need_mod_put = 1;
  break;
 default:

  FUNC_0();
  return -VAR_0;
 }

 FUNC_1(VAR_3->dev, "Ran thread %u\n", VAR_2->thread_idx);

 FUNC_7(VAR_2);

 FUNC_4(&VAR_3->thread_mutex);
 VAR_2->task_sync = ((void*)0);
 FUNC_3(VAR_3, VAR_2->thread_idx);
 FUNC_5(&VAR_3->thread_mutex);

 return 0;
}
