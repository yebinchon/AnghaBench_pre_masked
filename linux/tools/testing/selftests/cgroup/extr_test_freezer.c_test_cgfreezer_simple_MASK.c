
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int) ;
 char* FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,int ,int *) ;
 scalar_t__ FUNC_6 (char*,int) ;
 int VAR_2 ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_3)
{
 int VAR_4 = VAR_0;
 char *VAR_5 = ((void*)0);
 int VAR_6;

 VAR_5 = FUNC_4(VAR_3, "cg_test_simple");
 if (!VAR_5)
  goto cleanup;

 if (FUNC_1(VAR_5))
  goto cleanup;

 for (VAR_6 = 0; VAR_6 < 100; VAR_6++)
  FUNC_5(VAR_5, VAR_2, ((void*)0));

 if (FUNC_6(VAR_5, 100))
  goto cleanup;

 if (FUNC_0(VAR_5, 0))
  goto cleanup;

 if (FUNC_3(VAR_5, 1))
  goto cleanup;

 if (FUNC_3(VAR_5, 0))
  goto cleanup;

 VAR_4 = VAR_1;

cleanup:
 if (VAR_5)
  FUNC_2(VAR_5);
 FUNC_7(VAR_5);
 return VAR_4;
}
