
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,int,char const*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,int) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(void *VAR_0, const char *VAR_1, int *VAR_2)
{
 char *VAR_3 = (char *)VAR_0 + FUNC_1(VAR_0);
 const char *VAR_4;
 char *VAR_5;
 int VAR_6 = FUNC_5(VAR_1) + 1;
 int VAR_7;

 *VAR_2 = 0;

 VAR_4 = FUNC_0(VAR_3, FUNC_2(VAR_0), VAR_1);
 if (VAR_4)

  return (VAR_4 - VAR_3);

 VAR_5 = VAR_3 + FUNC_2(VAR_0);
 VAR_7 = FUNC_3(VAR_0, VAR_6);
 if (VAR_7)
  return VAR_7;

 *VAR_2 = 1;

 FUNC_4(VAR_5, VAR_1, VAR_6);
 return (VAR_5 - VAR_3);
}
