
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct miscdevice {int groups; int name; int minor; } ;
struct kmod_test_device {int dev_idx; struct miscdevice misc_dev; int kthreads_done; int thread_mutex; int trigger_mutex; int config_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kmod_test_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct kmod_test_device*) ;
 int FUNC_4 (struct kmod_test_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int VAR_2 ;
 int FUNC_7 (struct kmod_test_device*) ;
 struct kmod_test_device* FUNC_8 (int) ;

__attribute__((used)) static struct kmod_test_device *FUNC_9(int VAR_3)
{
 int VAR_4;
 struct kmod_test_device *VAR_5;
 struct miscdevice *VAR_6;

 VAR_5 = FUNC_8(sizeof(struct kmod_test_device));
 if (!VAR_5)
  goto err_out;

 FUNC_5(&VAR_5->config_mutex);
 FUNC_5(&VAR_5->trigger_mutex);
 FUNC_5(&VAR_5->thread_mutex);

 FUNC_1(&VAR_5->kthreads_done);

 VAR_4 = FUNC_4(VAR_5);
 if (VAR_4 < 0) {
  FUNC_6("Cannot alloc kmod_config_init()\n");
  goto err_out_free;
 }

 VAR_5->dev_idx = VAR_3;
 VAR_6 = &VAR_5->misc_dev;

 VAR_6->minor = VAR_1;
 VAR_6->name = FUNC_2(VAR_0, "test_kmod%d", VAR_3);
 if (!VAR_6->name) {
  FUNC_6("Cannot alloc misc_dev->name\n");
  goto err_out_free_config;
 }
 VAR_6->groups = VAR_2;

 return VAR_5;

err_out_free_config:
 FUNC_0(VAR_5);
 FUNC_3(VAR_5);
err_out_free:
 FUNC_7(VAR_5);
 VAR_5 = ((void*)0);
err_out:
 return ((void*)0);
}
