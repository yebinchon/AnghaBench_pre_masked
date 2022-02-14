
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int) ;
 char* FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,int ,int *) ;
 scalar_t__ FUNC_5 (char*,int) ;
 int FUNC_6 (char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(const char *VAR_3)
{
 int VAR_4 = VAR_0;
 char *VAR_5 = ((void*)0);

 VAR_5 = FUNC_3(VAR_3, "cg_test_vfork");
 if (!VAR_5)
  goto cleanup;

 if (FUNC_0(VAR_5))
  goto cleanup;

 FUNC_4(VAR_5, VAR_2, ((void*)0));

 if (FUNC_5(VAR_5, 2))
  goto cleanup;

 if (FUNC_2(VAR_5, 1))
  goto cleanup;

 VAR_4 = VAR_1;

cleanup:
 if (VAR_5)
  FUNC_1(VAR_5);
 FUNC_6(VAR_5);
 return VAR_4;
}
