
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,char const*) ;
 char* FUNC_1 (char*,int,char const*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(void *VAR_0, const char *VAR_1, int *VAR_2)
{
 char *VAR_3 = (char *)VAR_0 + FUNC_3(VAR_0);
 int VAR_4 = FUNC_2(VAR_0);
 const char *VAR_5;

 *VAR_2 = 0;

 VAR_5 = FUNC_1(VAR_3 - VAR_4, VAR_4, VAR_1);
 if (VAR_5)
  return VAR_5 - VAR_3;

 *VAR_2 = 1;

 return FUNC_0(VAR_0, VAR_1);
}
