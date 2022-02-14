
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_config {int num_threads; } ;
struct kmod_test_device_info {int dummy; } ;
struct kmod_test_device {int info; struct test_config config; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct kmod_test_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct kmod_test_device *VAR_1)
{
 struct test_config *VAR_2 = &VAR_1->config;

 FUNC_1(VAR_1);
 VAR_1->info =
  FUNC_2(FUNC_0(sizeof(struct kmod_test_device_info),
       VAR_2->num_threads));
 if (!VAR_1->info)
  return -VAR_0;

 return 0;
}
