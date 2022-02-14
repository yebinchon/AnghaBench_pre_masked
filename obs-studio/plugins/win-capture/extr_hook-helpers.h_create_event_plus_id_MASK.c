
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int *,int,char*,int const*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline HANDLE FUNC_2(const wchar_t *VAR_0, DWORD VAR_1)
{
 wchar_t VAR_2[64];
 FUNC_0(VAR_2, 64, L"%s%lu", VAR_0, VAR_1);
 return FUNC_1(VAR_2);
}
