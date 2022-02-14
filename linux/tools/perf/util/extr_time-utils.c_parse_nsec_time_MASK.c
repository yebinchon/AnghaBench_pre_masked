
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char const*,char**,int) ;

int FUNC_3(const char *VAR_1, u64 *VAR_2)
{
 u64 VAR_3, VAR_4;
 char *VAR_5;

 VAR_3 = FUNC_2(VAR_1, &VAR_5, 10);
 if (*VAR_5 != '.' && *VAR_5 != '\0')
  return -1;

 if (*VAR_5 == '.') {
  int VAR_6;
  char VAR_7[10];

  if (FUNC_0(++VAR_5) > 9)
   return -1;

  FUNC_1(VAR_7, VAR_5, 9);
  VAR_7[9] = '\0';


  for (VAR_6 = FUNC_0(VAR_7); VAR_6 < 9; VAR_6++)
   VAR_7[VAR_6] = '0';

  VAR_4 = FUNC_2(VAR_7, &VAR_5, 10);
  if (*VAR_5 != '\0')
   return -1;
 } else
  VAR_4 = 0;

 *VAR_2 = VAR_3 * VAR_0 + VAR_4;
 return 0;
}
