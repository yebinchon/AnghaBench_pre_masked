
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int) ;
 char* FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,int ,int *) ;
 scalar_t__ FUNC_6 (char*,int) ;
 int VAR_3 ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(const char *VAR_4)
{
 int VAR_5, VAR_6 = VAR_0;
 char *VAR_7 = ((void*)0);

 VAR_7 = FUNC_4(VAR_4, "cg_test_stopped");
 if (!VAR_7)
  goto cleanup;

 if (FUNC_1(VAR_7))
  goto cleanup;

 VAR_5 = FUNC_5(VAR_7, VAR_3, ((void*)0));

 if (FUNC_6(VAR_7, 1))
  goto cleanup;

 if (FUNC_8(VAR_5, VAR_2))
  goto cleanup;

 if (FUNC_0(VAR_7, 0))
  goto cleanup;

 if (FUNC_3(VAR_7, 1))
  goto cleanup;

 if (FUNC_3(VAR_7, 0))
  goto cleanup;

 if (FUNC_9(VAR_5))
  goto cleanup;

 VAR_6 = VAR_1;

cleanup:
 if (VAR_7)
  FUNC_2(VAR_7);
 FUNC_7(VAR_7);
 return VAR_6;
}
