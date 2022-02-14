
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char const*,char*,char*) ;
 scalar_t__ FUNC_5 (char const*,char*,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_3)
{
 int VAR_4 = VAR_0;
 char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);

 if (FUNC_4(VAR_3, "cgroup.controllers", "cpu") ||
     FUNC_5(VAR_3, "cgroup.subtree_control", "+cpu")) {
  VAR_4 = VAR_2;
  goto cleanup;
 }

 VAR_5 = FUNC_3(VAR_3, "cg_test_parent");
 VAR_6 = FUNC_3(VAR_3, "cg_test_parent/cg_test_child");
 if (!VAR_5 || !VAR_6)
  goto cleanup;

 if (FUNC_0(VAR_5))
  goto cleanup;

 if (FUNC_0(VAR_6))
  goto cleanup;

 if (FUNC_5(VAR_5, "cgroup.type", "threaded"))
  goto cleanup;

 if (FUNC_5(VAR_6, "cgroup.type", "threaded"))
  goto cleanup;

 if (FUNC_5(VAR_5, "cgroup.subtree_control", "+cpu"))
  goto cleanup;

 if (FUNC_2(VAR_5))
  goto cleanup;

 VAR_4 = VAR_1;

cleanup:
 FUNC_2(VAR_3);
 FUNC_2(VAR_3);
 if (VAR_6)
  FUNC_1(VAR_6);
 if (VAR_5)
  FUNC_1(VAR_5);
 FUNC_6(VAR_6);
 FUNC_6(VAR_5);
 return VAR_4;
}
