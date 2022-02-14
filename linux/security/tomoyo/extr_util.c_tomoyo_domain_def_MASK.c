
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* FUNC_0 (unsigned char const*,char) ;
 int FUNC_1 (unsigned char const*) ;
 int FUNC_2 (unsigned char const*,int) ;

bool FUNC_3(const unsigned char *VAR_0)
{
 const unsigned char *VAR_1;
 int VAR_2;

 if (*VAR_0 != '<')
  return 0;
 VAR_1 = FUNC_0(VAR_0, ' ');
 if (!VAR_1)
  VAR_2 = FUNC_1(VAR_0);
 else
  VAR_2 = VAR_1 - VAR_0;
 if (VAR_0[VAR_2 - 1] != '>' ||
     !FUNC_2(VAR_0 + 1, VAR_2 - 2))
  return 0;
 return 1;
}
