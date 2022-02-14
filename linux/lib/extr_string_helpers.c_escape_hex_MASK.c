
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (unsigned char) ;
 char FUNC_1 (unsigned char) ;

__attribute__((used)) static bool FUNC_2(unsigned char VAR_0, char **VAR_1, char *VAR_2)
{
 char *VAR_3 = *VAR_1;

 if (VAR_3 < VAR_2)
  *VAR_3 = '\\';
 ++VAR_3;
 if (VAR_3 < VAR_2)
  *VAR_3 = 'x';
 ++VAR_3;
 if (VAR_3 < VAR_2)
  *VAR_3 = FUNC_0(VAR_0);
 ++VAR_3;
 if (VAR_3 < VAR_2)
  *VAR_3 = FUNC_1(VAR_0);
 ++VAR_3;

 *VAR_1 = VAR_3;
 return 1;
}
