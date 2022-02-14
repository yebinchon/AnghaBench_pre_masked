
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int) ;
 int VAR_0 ;
 long FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (long,size_t,int) ;

__attribute__((used)) static int FUNC_5(const char *VAR_1, void *VAR_2)
{
 long VAR_3 = (long)VAR_2;
 size_t VAR_4 = FUNC_0(50);
 char *VAR_5, *VAR_6;
 long VAR_7, VAR_8;
 int VAR_9 = -1;

 VAR_5 = FUNC_3(VAR_4);
 for (VAR_6 = VAR_5; VAR_6 < VAR_5 + VAR_4; VAR_6 += VAR_0)
  *VAR_6 = 0;

 VAR_7 = FUNC_1(VAR_1, "memory.current");
 if (!VAR_7 || !FUNC_4(VAR_7, VAR_3, 3))
  goto cleanup;

 VAR_8 = FUNC_1(VAR_1, "memory.swap.current");
 if (!VAR_8 ||
     !FUNC_4(VAR_7 + VAR_8, VAR_4, 3))
  goto cleanup;

 VAR_9 = 0;
cleanup:
 FUNC_2(VAR_5);
 return VAR_9;
}
