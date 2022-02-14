
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (char*,int ,void*) ;
 int FUNC_6 (char*,int ,void*) ;
 scalar_t__ FUNC_7 (char*,char*,char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int,int ) ;
 scalar_t__ FUNC_10 (int,int ) ;

__attribute__((used)) static int FUNC_11(const char *VAR_6)
{
 int VAR_7 = VAR_0;
 char *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(VAR_6, "memcg_test_0");

 if (!VAR_8)
  goto cleanup;

 if (FUNC_1(VAR_8))
  goto cleanup;

 if (FUNC_7(VAR_8, "memory.max", "50M"))
  goto cleanup;

 if (FUNC_7(VAR_8, "memory.swap.max", "0"))
  goto cleanup;

 if (FUNC_7(VAR_8, "memory.oom.group", "1"))
  goto cleanup;

 VAR_9 = FUNC_6(VAR_8, VAR_5, (void *) FUNC_0(1));
 if (FUNC_10(VAR_9, VAR_2))
  goto cleanup;

 FUNC_6(VAR_8, VAR_5, (void *) FUNC_0(1));
 if (!FUNC_5(VAR_8, VAR_4, (void *)FUNC_0(100)))
  goto cleanup;

 if (FUNC_4(VAR_8, "memory.events", "oom_kill ") != 3)
  goto cleanup;

 if (FUNC_9(VAR_9, VAR_3))
  goto cleanup;

 VAR_7 = VAR_1;

cleanup:
 if (VAR_8)
  FUNC_2(VAR_8);
 FUNC_8(VAR_8);

 return VAR_7;
}
