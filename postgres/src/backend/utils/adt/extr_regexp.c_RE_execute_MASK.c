
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regmatch_t ;
typedef int regex_t ;
typedef int pg_wchar ;


 int FUNC_0 (int *,int *,int,int ,int,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int *,int) ;

__attribute__((used)) static bool
FUNC_4(regex_t *VAR_0, char *VAR_1, int VAR_2,
     int VAR_3, regmatch_t *VAR_4)
{
 pg_wchar *VAR_5;
 int VAR_6;
 bool VAR_7;


 VAR_5 = (pg_wchar *) FUNC_1((VAR_2 + 1) * sizeof(pg_wchar));
 VAR_6 = FUNC_3(VAR_1, VAR_5, VAR_2);


 VAR_7 = FUNC_0(VAR_0, VAR_5, VAR_6, 0, VAR_3, VAR_4);

 FUNC_2(VAR_5);
 return VAR_7;
}
