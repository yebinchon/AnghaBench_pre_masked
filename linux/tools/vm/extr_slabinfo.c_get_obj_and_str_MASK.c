
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char*) ;
 unsigned long FUNC_2 (int ,char**,int) ;

__attribute__((used)) static unsigned long FUNC_3(const char *VAR_1, char **VAR_2)
{
 unsigned long VAR_3 = 0;
 char *VAR_4;

 *VAR_2 = ((void*)0);

 if (!FUNC_0(VAR_1)) {
  VAR_2 = ((void*)0);
  return 0;
 }
 VAR_3 = FUNC_2(VAR_0, &VAR_4, 10);
 while (*VAR_4 == ' ')
  VAR_4++;
 if (*VAR_4)
  *VAR_2 = FUNC_1(VAR_4);
 return VAR_3;
}
