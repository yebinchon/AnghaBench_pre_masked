
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(void *VAR_0, const char *VAR_1)
{
 char *VAR_2 = (char *)VAR_0 + FUNC_4(VAR_0);
 int VAR_3 = FUNC_2(VAR_0);
 int VAR_4 = FUNC_6(VAR_1) + 1;
 int VAR_5, VAR_6;

 VAR_6 = -VAR_3 - VAR_4;
 VAR_5 = FUNC_0(VAR_0) + FUNC_3(VAR_0);
 if (FUNC_4(VAR_0) + VAR_6 < VAR_5)
  return 0;

 FUNC_5(VAR_2 + VAR_6, VAR_1, VAR_4);
 FUNC_1(VAR_0, VAR_3 + VAR_4);
 return VAR_6;
}
