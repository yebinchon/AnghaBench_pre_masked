
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,char*) ;
 long FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,int ,int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_4)
{
 int VAR_5 = VAR_0;
 long VAR_6;
 char *VAR_7;

 VAR_7 = FUNC_2(VAR_4, "memcg_test");
 if (!VAR_7)
  goto cleanup;

 if (FUNC_0(VAR_7))
  goto cleanup;

 VAR_6 = FUNC_3(VAR_7, "memory.current");
 if (VAR_6 != 0)
  goto cleanup;

 if (FUNC_4(VAR_7, VAR_2, ((void*)0)))
  goto cleanup;

 if (FUNC_4(VAR_7, VAR_3, ((void*)0)))
  goto cleanup;

 VAR_5 = VAR_1;

cleanup:
 FUNC_1(VAR_7);
 FUNC_5(VAR_7);

 return VAR_5;
}
