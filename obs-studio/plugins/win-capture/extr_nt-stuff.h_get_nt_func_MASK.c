
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HANDLE ;
typedef int FARPROC ;


 int * FUNC_0 (char*) ;
 int FUNC_1 (int *,char const*) ;

__attribute__((used)) static FARPROC FUNC_2(const char *VAR_0)
{
 static bool VAR_1 = 0;
 static HANDLE VAR_2 = ((void*)0);
 if (!VAR_1) {
  VAR_2 = FUNC_0(L"ntdll");
  VAR_1 = 1;
 }

 return FUNC_1(VAR_2, VAR_0);
}
