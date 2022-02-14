
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*,char*) ;
 scalar_t__ FUNC_7 (char*,int ,void*) ;
 scalar_t__ FUNC_8 (char*,char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(const char *VAR_5)
{
 int VAR_6 = VAR_0;
 char *VAR_7;
 long VAR_8;

 if (!FUNC_10())
  return VAR_2;

 VAR_7 = FUNC_3(VAR_5, "memcg_test");
 if (!VAR_7)
  goto cleanup;

 if (FUNC_1(VAR_7))
  goto cleanup;

 if (FUNC_5(VAR_7, "memory.swap.current")) {
  VAR_6 = VAR_2;
  goto cleanup;
 }

 if (FUNC_6(VAR_7, "memory.max", "max\n"))
  goto cleanup;

 if (FUNC_6(VAR_7, "memory.swap.max", "max\n"))
  goto cleanup;

 if (FUNC_8(VAR_7, "memory.swap.max", "30M"))
  goto cleanup;

 if (FUNC_8(VAR_7, "memory.max", "30M"))
  goto cleanup;


 if (!FUNC_7(VAR_7, VAR_3, (void *)FUNC_0(100)))
  goto cleanup;

 if (FUNC_4(VAR_7, "memory.events", "oom ") != 1)
  goto cleanup;

 if (FUNC_4(VAR_7, "memory.events", "oom_kill ") != 1)
  goto cleanup;

 if (FUNC_7(VAR_7, VAR_4, (void *)FUNC_0(30)))
  goto cleanup;

 VAR_8 = FUNC_4(VAR_7, "memory.events", "max ");
 if (VAR_8 <= 0)
  goto cleanup;

 VAR_6 = VAR_1;

cleanup:
 FUNC_2(VAR_7);
 FUNC_9(VAR_7);

 return VAR_6;
}
