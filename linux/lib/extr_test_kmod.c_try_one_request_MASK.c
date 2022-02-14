
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmod_test_device_info {unsigned int thread_idx; int ret_sync; int * task_sync; struct kmod_test_device* test_dev; } ;
struct kmod_test_device {int test_is_oom; int thread_mutex; int dev; struct kmod_test_device_info* info; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int * FUNC_3 (int ,struct kmod_test_device_info*,char*,int ,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct kmod_test_device *VAR_3, unsigned int VAR_4)
{
 struct kmod_test_device_info *VAR_5 = &VAR_3->info[VAR_4];
 int VAR_6 = -VAR_0;

 FUNC_4(&VAR_3->thread_mutex);

 VAR_5->thread_idx = VAR_4;
 VAR_5->test_dev = VAR_3;
 VAR_5->task_sync = FUNC_3(VAR_2, VAR_5, "%s-%u",
          VAR_1, VAR_4);

 if (!VAR_5->task_sync || FUNC_0(VAR_5->task_sync)) {
  VAR_3->test_is_oom = 1;
  FUNC_2(VAR_3->dev, "Setting up thread %u failed\n", VAR_4);
  VAR_5->task_sync = ((void*)0);
  goto err_out;
 } else
  FUNC_1(VAR_3->dev, "Kicked off thread %u\n", VAR_4);

 FUNC_5(&VAR_3->thread_mutex);

 return 0;

err_out:
 VAR_5->ret_sync = VAR_6;
 FUNC_5(&VAR_3->thread_mutex);

 return VAR_6;
}
