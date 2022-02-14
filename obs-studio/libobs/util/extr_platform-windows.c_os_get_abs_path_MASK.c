
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int * FUNC_0 (int *,int *,int) ;
 size_t FUNC_1 (char const*,int ,int *,int) ;
 size_t FUNC_2 (int *,int ,char*,size_t) ;

size_t FUNC_3(const char *VAR_0, char *VAR_1, size_t VAR_2)
{
 wchar_t VAR_3[512];
 wchar_t VAR_4[512];
 size_t VAR_5 = 0;
 size_t VAR_6;

 if (!VAR_1)
  return 0;

 VAR_6 = FUNC_1(VAR_0, 0, VAR_3, 512);
 if (!VAR_6)
  return 0;

 if (FUNC_0(VAR_4, VAR_3, 512) != ((void*)0))
  VAR_5 = FUNC_2(VAR_4, 0, VAR_1, VAR_2);
 return VAR_5;
}
