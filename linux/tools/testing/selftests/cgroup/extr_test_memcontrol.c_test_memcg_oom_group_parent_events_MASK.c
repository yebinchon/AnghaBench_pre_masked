
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,int ,void*) ;
 int FUNC_5 (char*,int ,void*) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_4)
{
 int VAR_5 = VAR_0;
 char *VAR_6, *VAR_7;

 VAR_6 = FUNC_3(VAR_4, "memcg_test_0");
 VAR_7 = FUNC_3(VAR_4, "memcg_test_0/memcg_test_1");

 if (!VAR_6 || !VAR_7)
  goto cleanup;

 if (FUNC_1(VAR_6))
  goto cleanup;

 if (FUNC_1(VAR_7))
  goto cleanup;

 if (FUNC_7(VAR_6, "memory.max", "80M"))
  goto cleanup;

 if (FUNC_7(VAR_6, "memory.swap.max", "0"))
  goto cleanup;

 if (FUNC_7(VAR_6, "memory.oom.group", "1"))
  goto cleanup;

 FUNC_5(VAR_6, VAR_3, (void *) FUNC_0(60));
 FUNC_5(VAR_7, VAR_3, (void *) FUNC_0(1));
 FUNC_5(VAR_7, VAR_3, (void *) FUNC_0(1));

 if (!FUNC_4(VAR_7, VAR_2, (void *)FUNC_0(100)))
  goto cleanup;

 if (FUNC_6(VAR_7))
  goto cleanup;
 if (FUNC_6(VAR_6))
  goto cleanup;

 VAR_5 = VAR_1;

cleanup:
 if (VAR_7)
  FUNC_2(VAR_7);
 if (VAR_6)
  FUNC_2(VAR_6);
 FUNC_8(VAR_7);
 FUNC_8(VAR_6);

 return VAR_5;
}
