
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char*,char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_4)
{
 int VAR_5 = VAR_1;
 char *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);

 VAR_6 = FUNC_3(VAR_4, "cg_test_grandparent");
 VAR_7 = FUNC_3(VAR_4, "cg_test_grandparent/cg_test_parent");
 VAR_8 = FUNC_3(VAR_4, "cg_test_grandparent/cg_test_parent/cg_test_child");
 if (!VAR_7 || !VAR_8 || !VAR_6)
  goto cleanup;

 if (FUNC_0(VAR_6))
  goto cleanup;

 if (FUNC_0(VAR_7))
  goto cleanup;

 if (FUNC_0(VAR_8))
  goto cleanup;

 if (FUNC_5(VAR_7, "cgroup.type", "threaded"))
  goto cleanup;

 if (FUNC_4(VAR_8, "cgroup.type", "domain invalid\n"))
  goto cleanup;

 if (!FUNC_2(VAR_8))
  goto cleanup;

 if (VAR_3 != VAR_0)
  goto cleanup;

 VAR_5 = VAR_2;

cleanup:
 FUNC_2(VAR_4);
 if (VAR_8)
  FUNC_1(VAR_8);
 if (VAR_7)
  FUNC_1(VAR_7);
 if (VAR_6)
  FUNC_1(VAR_6);
 FUNC_6(VAR_8);
 FUNC_6(VAR_7);
 FUNC_6(VAR_6);
 return VAR_5;
}
