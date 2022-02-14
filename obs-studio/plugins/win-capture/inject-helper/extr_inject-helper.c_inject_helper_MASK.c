
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int const*) ;
 int FUNC_1 (scalar_t__,int const*) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;

__attribute__((used)) static int FUNC_3(wchar_t *VAR_1[], const wchar_t *VAR_2)
{
 DWORD VAR_3;
 DWORD VAR_4;

 VAR_4 = FUNC_2(VAR_1[2], ((void*)0), 10);

 VAR_3 = FUNC_2(VAR_1[3], ((void*)0), 10);
 if (VAR_3 == 0) {
  return VAR_0;
 }

 return VAR_4 ? FUNC_1(VAR_3, VAR_2)
          : FUNC_0(VAR_3, VAR_2);
}
