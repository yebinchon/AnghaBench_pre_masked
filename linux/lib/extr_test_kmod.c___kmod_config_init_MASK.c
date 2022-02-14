
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_config {int test_case; scalar_t__ test_result; int num_threads; } ;
struct kmod_test_device {int test_is_oom; struct test_config config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct test_config*) ;
 int FUNC_2 (struct test_config*,int ,int) ;
 int FUNC_3 (struct test_config*,int ,int) ;
 int FUNC_4 (struct kmod_test_device*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct kmod_test_device *VAR_4)
{
 struct test_config *VAR_5 = &VAR_4->config;
 int VAR_6 = -VAR_0, VAR_7;

 FUNC_1(VAR_5);

 VAR_7 = FUNC_2(VAR_5, VAR_1,
           FUNC_6(VAR_1));
 if (VAR_7 != FUNC_6(VAR_1))
  goto err_out;

 VAR_7 = FUNC_3(VAR_5, VAR_3,
         FUNC_6(VAR_3));
 if (VAR_7 != FUNC_6(VAR_3))
  goto err_out;

 VAR_5->num_threads = FUNC_5();
 VAR_5->test_result = 0;
 VAR_5->test_case = VAR_2;

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6)
  goto err_out;

 VAR_4->test_is_oom = 0;

 return 0;

err_out:
 VAR_4->test_is_oom = 1;
 FUNC_0(VAR_4->test_is_oom);

 FUNC_1(VAR_5);

 return VAR_6;
}
