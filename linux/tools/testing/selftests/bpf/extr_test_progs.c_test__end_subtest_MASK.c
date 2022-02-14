
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prog_test_def {int error_cnt; int old_error_cnt; int test_num; int subtest_num; char* subtest_name; } ;
struct TYPE_2__ {int stdout; int sub_succ_cnt; int fail_cnt; struct prog_test_def* test; } ;


 int FUNC_0 (struct prog_test_def*,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ,char*,int,int,char*,char*) ;
 int FUNC_2 () ;

void FUNC_3()
{
 struct prog_test_def *VAR_1 = VAR_0.test;
 int VAR_2 = VAR_1->error_cnt - VAR_1->old_error_cnt;

 if (VAR_2)
  VAR_0.fail_cnt++;
 else
  VAR_0.sub_succ_cnt++;
 FUNC_2();

 FUNC_0(VAR_1, VAR_2);

 FUNC_1(VAR_0.stdout, "#%d/%d %s:%s\n",
        VAR_1->test_num, VAR_1->subtest_num,
        VAR_1->subtest_name, VAR_2 ? "FAIL" : "OK");
}
