
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int ,int **) ;

int FUNC_3(const char *VAR_0)
{
 wchar_t *VAR_1;
 bool VAR_2;

 FUNC_2(VAR_0, 0, &VAR_1);
 if (!VAR_1)
  return -1;

 VAR_2 = !!FUNC_0(VAR_1);
 FUNC_1(VAR_1);

 return VAR_2 ? 0 : -1;
}
