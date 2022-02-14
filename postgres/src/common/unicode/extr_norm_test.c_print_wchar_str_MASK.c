
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pg_wchar ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,int const) ;

__attribute__((used)) static char *
FUNC_1(const pg_wchar *VAR_1)
{

 static char VAR_2[50 * 2 + 1];
 int VAR_3;

 VAR_3 = 0;
 while (*VAR_1 && VAR_3 < 50)
 {
  FUNC_0(&VAR_2[VAR_3 * 2], 3, "%04X", *VAR_1);
  VAR_3++;
  VAR_1++;
 }
 VAR_2[VAR_3 * 2] = '\0';
 return VAR_2;
}
