
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_config {scalar_t__ num_threads; } ;
struct kmod_test_device {scalar_t__ done; int kthreads_done; int dev; struct test_config config; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ,char*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct kmod_test_device *VAR_0,
     unsigned int VAR_1)
{
 struct test_config *VAR_2 = &VAR_0->config;

 VAR_0->done++;
 FUNC_1(VAR_0->dev, "Done thread count: %u\n", VAR_0->done);

 if (VAR_0->done == VAR_2->num_threads) {
  FUNC_2(VAR_0->dev, "Done: %u threads have all run now\n",
    VAR_0->done);
  FUNC_2(VAR_0->dev, "Last thread to run: %u\n", VAR_1);
  FUNC_0(&VAR_0->kthreads_done);
 }
}
