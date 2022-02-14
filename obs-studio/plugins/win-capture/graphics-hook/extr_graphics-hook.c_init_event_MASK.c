
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (int const*,int ) ;
 int FUNC_2 (char*,int const*,int ) ;

__attribute__((used)) static HANDLE FUNC_3(const wchar_t *VAR_0, DWORD VAR_1)
{
 HANDLE VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_2)
  FUNC_2("Failed to get event '%s': %lu", VAR_0, FUNC_0());
 return VAR_2;
}
