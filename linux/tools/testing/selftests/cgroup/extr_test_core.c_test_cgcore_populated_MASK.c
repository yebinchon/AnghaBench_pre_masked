
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_2)
{
 int VAR_3 = VAR_0;
 char *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);

 VAR_4 = FUNC_3(VAR_2, "cg_test_a");
 VAR_5 = FUNC_3(VAR_2, "cg_test_a/cg_test_b");
 VAR_6 = FUNC_3(VAR_2, "cg_test_a/cg_test_b/cg_test_c");
 VAR_7 = FUNC_3(VAR_2, "cg_test_a/cg_test_b/cg_test_d");

 if (!VAR_4 || !VAR_5 || !VAR_6 || !VAR_7)
  goto cleanup;

 if (FUNC_0(VAR_4))
  goto cleanup;

 if (FUNC_0(VAR_5))
  goto cleanup;

 if (FUNC_0(VAR_6))
  goto cleanup;

 if (FUNC_0(VAR_7))
  goto cleanup;

 if (FUNC_2(VAR_6))
  goto cleanup;

 if (FUNC_4(VAR_4, "cgroup.events", "populated 1\n"))
  goto cleanup;

 if (FUNC_4(VAR_5, "cgroup.events", "populated 1\n"))
  goto cleanup;

 if (FUNC_4(VAR_6, "cgroup.events", "populated 1\n"))
  goto cleanup;

 if (FUNC_4(VAR_7, "cgroup.events", "populated 0\n"))
  goto cleanup;

 if (FUNC_2(VAR_2))
  goto cleanup;

 if (FUNC_4(VAR_4, "cgroup.events", "populated 0\n"))
  goto cleanup;

 if (FUNC_4(VAR_5, "cgroup.events", "populated 0\n"))
  goto cleanup;

 if (FUNC_4(VAR_6, "cgroup.events", "populated 0\n"))
  goto cleanup;

 if (FUNC_4(VAR_7, "cgroup.events", "populated 0\n"))
  goto cleanup;

 VAR_3 = VAR_1;

cleanup:
 if (VAR_7)
  FUNC_1(VAR_7);
 if (VAR_6)
  FUNC_1(VAR_6);
 if (VAR_5)
  FUNC_1(VAR_5);
 if (VAR_4)
  FUNC_1(VAR_4);
 FUNC_5(VAR_7);
 FUNC_5(VAR_6);
 FUNC_5(VAR_5);
 FUNC_5(VAR_4);
 return VAR_3;
}
