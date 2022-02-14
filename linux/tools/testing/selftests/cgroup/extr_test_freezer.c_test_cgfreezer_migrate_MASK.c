
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int,int) ;
 scalar_t__ FUNC_4 (char*,int) ;
 char* FUNC_5 (char const*,char*) ;
 int FUNC_6 (char*,int ,int *) ;
 scalar_t__ FUNC_7 (char*,int) ;
 int VAR_2 ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_3)
{
 int VAR_4 = VAR_0;
 char *VAR_5[2] = {0};
 int VAR_6;

 VAR_5[0] = FUNC_5(VAR_3, "cg_test_migrate_A");
 if (!VAR_5[0])
  goto cleanup;

 VAR_5[1] = FUNC_5(VAR_3, "cg_test_migrate_B");
 if (!VAR_5[1])
  goto cleanup;

 if (FUNC_1(VAR_5[0]))
  goto cleanup;

 if (FUNC_1(VAR_5[1]))
  goto cleanup;

 VAR_6 = FUNC_6(VAR_5[0], VAR_2, ((void*)0));
 if (VAR_6 < 0)
  goto cleanup;

 if (FUNC_7(VAR_5[0], 1))
  goto cleanup;




 if (FUNC_4(VAR_5[1], 1))
  goto cleanup;

 if (FUNC_3(VAR_5[1], VAR_6, 1))
  goto cleanup;

 if (FUNC_0(VAR_5[0], 0))
  goto cleanup;




 if (FUNC_3(VAR_5[0], VAR_6, 0))
  goto cleanup;

 if (FUNC_0(VAR_5[1], 1))
  goto cleanup;




 if (FUNC_4(VAR_5[0], 1))
  goto cleanup;

 if (FUNC_3(VAR_5[1], VAR_6, 1))
  goto cleanup;

 if (FUNC_0(VAR_5[0], 1))
  goto cleanup;

 VAR_4 = VAR_1;

cleanup:
 if (VAR_5[0])
  FUNC_2(VAR_5[0]);
 FUNC_8(VAR_5[0]);
 if (VAR_5[1])
  FUNC_2(VAR_5[1]);
 FUNC_8(VAR_5[1]);
 return VAR_4;
}
