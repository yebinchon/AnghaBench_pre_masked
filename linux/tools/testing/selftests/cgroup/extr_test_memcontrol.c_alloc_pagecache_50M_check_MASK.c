
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,size_t) ;
 long FUNC_2 (char const*,char*,char*) ;
 long FUNC_3 (char const*,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (long,long,int) ;

__attribute__((used)) static int FUNC_7(const char *VAR_0, void *VAR_1)
{
 size_t VAR_2 = FUNC_0(50);
 int VAR_3 = -1;
 long VAR_4, VAR_5;
 int VAR_6;

 VAR_6 = FUNC_5();
 if (VAR_6 < 0)
  return -1;

 if (FUNC_1(VAR_6, VAR_2))
  goto cleanup;

 VAR_4 = FUNC_3(VAR_0, "memory.current");
 if (VAR_4 < VAR_2)
  goto cleanup;

 VAR_5 = FUNC_2(VAR_0, "memory.stat", "file ");
 if (VAR_5 < 0)
  goto cleanup;

 if (!FUNC_6(VAR_5, VAR_4, 10))
  goto cleanup;

 VAR_3 = 0;

cleanup:
 FUNC_4(VAR_6);
 return VAR_3;
}
