
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* test; } ;
struct TYPE_3__ {int need_cgroup_cleanup; int test_num; char* test_name; } ;


 int FUNC_0 (char const*) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int,char*,...) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 () ;
 int VAR_2 ;

int FUNC_4(const char *VAR_3)
{
 int VAR_4;

 if (!VAR_0.test->need_cgroup_cleanup) {
  if (FUNC_3()) {
   FUNC_1(VAR_2,
    "#%d %s: Failed to setup cgroup environment\n",
    VAR_0.test->test_num, VAR_0.test->test_name);
   return -1;
  }

  VAR_0.test->need_cgroup_cleanup = 1;
 }

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 < 0) {
  FUNC_1(VAR_2,
   "#%d %s: Failed to create cgroup '%s' (errno=%d)\n",
   VAR_0.test->test_num, VAR_0.test->test_name, VAR_3, VAR_1);
  return VAR_4;
 }

 if (FUNC_2(VAR_3)) {
  FUNC_1(VAR_2,
   "#%d %s: Failed to join cgroup '%s' (errno=%d)\n",
   VAR_0.test->test_num, VAR_0.test->test_name, VAR_3, VAR_1);
  return -1;
 }

 return VAR_4;
}
