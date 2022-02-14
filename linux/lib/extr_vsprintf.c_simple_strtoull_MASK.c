
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int FUNC_0 (char const*,unsigned int,unsigned long long*) ;
 char* FUNC_1 (char const*,unsigned int*) ;

unsigned long long FUNC_2(const char *VAR_1, char **VAR_2, unsigned int VAR_3)
{
 unsigned long long VAR_4;
 unsigned int VAR_5;

 VAR_1 = FUNC_1(VAR_1, &VAR_3);
 VAR_5 = FUNC_0(VAR_1, VAR_3, &VAR_4);

 VAR_1 += (VAR_5 & ~VAR_0);

 if (VAR_2)
  *VAR_2 = (char *)VAR_1;

 return VAR_4;
}
