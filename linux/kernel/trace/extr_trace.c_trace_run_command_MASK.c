
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**) ;
 char** FUNC_1 (int ,char const*,int*) ;

int FUNC_2(const char *VAR_2, int (*VAR_3)(int, char **))
{
 char **VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = 0;
 VAR_6 = 0;
 VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_5);
 if (!VAR_4)
  return -VAR_0;

 if (VAR_5)
  VAR_6 = VAR_3(VAR_5, VAR_4);

 FUNC_0(VAR_4);

 return VAR_6;
}
