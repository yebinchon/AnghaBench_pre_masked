
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int) ;
 char* FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_2)
{
 int VAR_3 = VAR_0;
 char *VAR_4, *VAR_5 = ((void*)0);

 VAR_4 = FUNC_4(VAR_2, "cg_test_rmdir_A");
 if (!VAR_4)
  goto cleanup;

 VAR_5 = FUNC_4(VAR_4, "cg_test_rmdir_B");
 if (!VAR_5)
  goto cleanup;

 if (FUNC_1(VAR_4))
  goto cleanup;

 if (FUNC_1(VAR_5))
  goto cleanup;

 if (FUNC_3(VAR_4, 1))
  goto cleanup;

 if (FUNC_2(VAR_5))
  goto cleanup;

 if (FUNC_0(VAR_4, 1))
  goto cleanup;

 if (FUNC_1(VAR_5))
  goto cleanup;

 if (FUNC_0(VAR_5, 1))
  goto cleanup;

 VAR_3 = VAR_1;

cleanup:
 if (VAR_5)
  FUNC_2(VAR_5);
 FUNC_5(VAR_5);
 if (VAR_4)
  FUNC_2(VAR_4);
 FUNC_5(VAR_4);
 return VAR_3;
}
