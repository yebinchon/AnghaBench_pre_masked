
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int siginfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int) ;
 char* FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,int ,int *) ;
 scalar_t__ FUNC_6 (char*,int) ;
 int VAR_6 ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int ,int,int *,int *) ;
 int FUNC_9 (int,int *,int ) ;

__attribute__((used)) static int FUNC_10(const char *VAR_7)
{
 int VAR_8, VAR_9 = VAR_0;
 char *VAR_10 = ((void*)0);
 siginfo_t VAR_11;

 VAR_10 = FUNC_4(VAR_7, "cg_test_ptraced");
 if (!VAR_10)
  goto cleanup;

 if (FUNC_1(VAR_10))
  goto cleanup;

 VAR_8 = FUNC_5(VAR_10, VAR_6, ((void*)0));

 if (FUNC_6(VAR_10, 1))
  goto cleanup;

 if (FUNC_8(VAR_5, VAR_8, ((void*)0), ((void*)0)))
  goto cleanup;

 if (FUNC_8(VAR_4, VAR_8, ((void*)0), ((void*)0)))
  goto cleanup;

 FUNC_9(VAR_8, ((void*)0), 0);

 if (FUNC_0(VAR_10, 0))
  goto cleanup;

 if (FUNC_3(VAR_10, 1))
  goto cleanup;





 if (FUNC_3(VAR_10, 0))
  goto cleanup;

 if (FUNC_8(VAR_3, VAR_8, ((void*)0), &VAR_11))
  goto cleanup;

 if (FUNC_8(VAR_2, VAR_8, ((void*)0), ((void*)0)))
  goto cleanup;

 VAR_9 = VAR_1;

cleanup:
 if (VAR_10)
  FUNC_2(VAR_10);
 FUNC_7(VAR_10);
 return VAR_9;
}
