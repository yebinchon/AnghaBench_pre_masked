
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*,char*) ;
 int FUNC_6 (char*,int ,void*) ;
 scalar_t__ FUNC_7 (char*,char*,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_3)
{
 int VAR_4 = VAR_0;
 char *VAR_5;

 VAR_5 = FUNC_3(VAR_3, "memcg_test");
 if (!VAR_5)
  goto cleanup;

 if (FUNC_1(VAR_5))
  goto cleanup;

 if (FUNC_7(VAR_5, "memory.max", "30M"))
  goto cleanup;

 if (FUNC_7(VAR_5, "memory.swap.max", "0"))
  goto cleanup;

 if (!FUNC_6(VAR_5, VAR_2, (void *)FUNC_0(100)))
  goto cleanup;

 if (FUNC_5(VAR_5, "cgroup.procs", ""))
  goto cleanup;

 if (FUNC_4(VAR_5, "memory.events", "oom ") != 1)
  goto cleanup;

 if (FUNC_4(VAR_5, "memory.events", "oom_kill ") != 1)
  goto cleanup;

 VAR_4 = VAR_1;

cleanup:
 FUNC_2(VAR_5);
 FUNC_8(VAR_5);

 return VAR_4;
}
