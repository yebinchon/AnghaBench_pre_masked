
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,char*) ;
 long FUNC_4 (char*,char*,char*) ;
 long FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*,char*) ;
 scalar_t__ FUNC_7 (char*,int ,void*) ;
 scalar_t__ FUNC_8 (char*,char*,char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(const char *VAR_4)
{
 int VAR_5 = VAR_0;
 char *VAR_6;
 long VAR_7, VAR_8;

 VAR_6 = FUNC_3(VAR_4, "memcg_test");
 if (!VAR_6)
  goto cleanup;

 if (FUNC_1(VAR_6))
  goto cleanup;

 if (FUNC_6(VAR_6, "memory.max", "max\n"))
  goto cleanup;

 if (FUNC_8(VAR_6, "memory.swap.max", "0"))
  goto cleanup;

 if (FUNC_8(VAR_6, "memory.max", "30M"))
  goto cleanup;


 if (!FUNC_7(VAR_6, VAR_2, (void *)FUNC_0(100)))
  goto cleanup;

 if (FUNC_7(VAR_6, VAR_3, ((void*)0)))
  goto cleanup;

 VAR_7 = FUNC_5(VAR_6, "memory.current");
 if (VAR_7 > FUNC_0(30) || !VAR_7)
  goto cleanup;

 VAR_8 = FUNC_4(VAR_6, "memory.events", "max ");
 if (VAR_8 <= 0)
  goto cleanup;

 VAR_5 = VAR_1;

cleanup:
 FUNC_2(VAR_6);
 FUNC_9(VAR_6);

 return VAR_5;
}
