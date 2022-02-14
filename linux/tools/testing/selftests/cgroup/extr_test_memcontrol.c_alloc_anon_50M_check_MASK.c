
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int) ;
 int VAR_0 ;
 long FUNC_1 (char const*,char*,char*) ;
 long FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (size_t) ;
 int FUNC_5 (long,long,int) ;

__attribute__((used)) static int FUNC_6(const char *VAR_1, void *VAR_2)
{
 size_t VAR_3 = FUNC_0(50);
 char *VAR_4, *VAR_5;
 long VAR_6, VAR_7;
 int VAR_8 = -1;

 VAR_4 = FUNC_4(VAR_3);
 for (VAR_5 = VAR_4; VAR_5 < VAR_4 + VAR_3; VAR_5 += VAR_0)
  *VAR_5 = 0;

 VAR_7 = FUNC_2(VAR_1, "memory.current");
 if (VAR_7 < VAR_3)
  goto cleanup;

 if (!FUNC_5(VAR_3, VAR_7, 3))
  goto cleanup;

 VAR_6 = FUNC_1(VAR_1, "memory.stat", "anon ");
 if (VAR_6 < 0)
  goto cleanup;

 if (!FUNC_5(VAR_6, VAR_7, 3))
  goto cleanup;

 VAR_8 = 0;
cleanup:
 FUNC_3(VAR_4);
 return VAR_8;
}
