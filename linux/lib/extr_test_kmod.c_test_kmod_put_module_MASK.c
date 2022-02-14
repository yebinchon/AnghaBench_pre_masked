
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct test_config {int test_case; } ;
struct kmod_test_device_info {int need_mod_put; TYPE_1__* fs_sync; struct kmod_test_device* test_dev; } ;
struct kmod_test_device {struct test_config config; } ;
struct TYPE_2__ {int owner; } ;


 int FUNC_0 () ;


 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct kmod_test_device_info *VAR_0)
{
 struct kmod_test_device *VAR_1 = VAR_0->test_dev;
 struct test_config *VAR_2 = &VAR_1->config;

 if (!VAR_0->need_mod_put)
  return;

 switch (VAR_2->test_case) {
 case 129:
  break;
 case 128:
  if (VAR_0 && VAR_0->fs_sync && VAR_0->fs_sync->owner)
   FUNC_1(VAR_0->fs_sync->owner);
  break;
 default:
  FUNC_0();
 }

 VAR_0->need_mod_put = 1;
}
