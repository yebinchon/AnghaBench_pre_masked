
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,size_t) ;
 long FUNC_2 (char const*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(const char *VAR_0, void *VAR_1)
{
 size_t VAR_2 = FUNC_0(50);
 int VAR_3 = -1;
 long VAR_4;
 int VAR_5;

 VAR_5 = FUNC_4();
 if (VAR_5 < 0)
  return -1;

 if (FUNC_1(VAR_5, VAR_2))
  goto cleanup;

 VAR_4 = FUNC_2(VAR_0, "memory.current");
 if (VAR_4 <= FUNC_0(29) || VAR_4 > FUNC_0(30))
  goto cleanup;

 VAR_3 = 0;

cleanup:
 FUNC_3(VAR_5);
 return VAR_3;

}
