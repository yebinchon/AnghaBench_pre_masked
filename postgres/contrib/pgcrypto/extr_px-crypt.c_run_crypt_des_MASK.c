
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char*,char*) ;
 unsigned int FUNC_2 (char*) ;

__attribute__((used)) static char *
FUNC_3(const char *VAR_0, const char *VAR_1,
     char *VAR_2, unsigned VAR_3)
{
 char *VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (VAR_4 == ((void*)0) || FUNC_2(VAR_4) > VAR_3 - 1)
  return ((void*)0);
 FUNC_1(VAR_2, VAR_4);
 return VAR_2;
}
