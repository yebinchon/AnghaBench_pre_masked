
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prog_test_def {char const* subtest_name; int subtest_num; int error_cnt; int old_error_cnt; } ;
struct TYPE_2__ {struct prog_test_def* test; int subtest_selector; int stderr; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,int,char const*) ;
 int FUNC_2 () ;

bool FUNC_3(const char *VAR_1)
{
 struct prog_test_def *VAR_2 = VAR_0.test;

 if (VAR_2->subtest_name) {
  FUNC_2();
  VAR_2->subtest_name = ((void*)0);
 }

 VAR_2->subtest_num++;

 if (!VAR_1 || !VAR_1[0]) {
  FUNC_0(VAR_0.stderr,
   "Subtest #%d didn't provide sub-test name!\n",
   VAR_2->subtest_num);
  return 0;
 }

 if (!FUNC_1(&VAR_0.subtest_selector, VAR_2->subtest_num, VAR_1))
  return 0;

 VAR_2->subtest_name = VAR_1;
 VAR_0.test->old_error_cnt = VAR_0.test->error_cnt;

 return 1;
}
