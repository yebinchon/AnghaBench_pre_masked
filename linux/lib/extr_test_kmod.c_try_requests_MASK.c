
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_config {unsigned int num_threads; } ;
struct kmod_test_device {int test_is_oom; int dev; int kthreads_done; struct test_config config; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct kmod_test_device*) ;
 int FUNC_2 (struct kmod_test_device*) ;
 int FUNC_3 (struct kmod_test_device*,unsigned int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct kmod_test_device *VAR_1)
{
 struct test_config *VAR_2 = &VAR_1->config;
 unsigned int VAR_3;
 int VAR_4;
 bool VAR_5 = 0;

 for (VAR_3=0; VAR_3 < VAR_2->num_threads; VAR_3++) {
  if (VAR_1->test_is_oom) {
   VAR_5 = 1;
   break;
  }

  VAR_4 = FUNC_3(VAR_1, VAR_3);
  if (VAR_4) {
   VAR_5 = 1;
   break;
  }
 }

 if (!VAR_5) {
  VAR_1->test_is_oom = 0;
  FUNC_0(VAR_1->dev,
    "No errors were found while initializing threads\n");
  FUNC_4(&VAR_1->kthreads_done);
  FUNC_1(VAR_1);
 } else {
  VAR_1->test_is_oom = 1;
  FUNC_0(VAR_1->dev,
    "At least one thread failed to start, stop all work\n");
  FUNC_2(VAR_1);
  return -VAR_0;
 }

 return 0;
}
