
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HMODULE ;


 int * FUNC_0 (char*) ;

__attribute__((used)) static inline HMODULE FUNC_1(void)
{
 static HMODULE VAR_0 = ((void*)0);
 if (!VAR_0)
  VAR_0 = FUNC_0(L"kernel32");
 return VAR_0;
}
