
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int BOOL ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,int ,int **) ;

int FUNC_4(const char *VAR_4)
{
 wchar_t *VAR_5;
 BOOL VAR_6;

 if (!FUNC_3(VAR_4, 0, &VAR_5))
  return VAR_1;

 VAR_6 = FUNC_0(VAR_5, ((void*)0));
 FUNC_2(VAR_5);

 if (!VAR_6)
  return (FUNC_1() == VAR_0) ? VAR_2
        : VAR_1;

 return VAR_3;
}
