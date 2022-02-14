
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* PVOID ;
typedef scalar_t__ HMODULE ;
typedef scalar_t__ DWORD_PTR ;



__attribute__((used)) static PVOID FUNC_0(DWORD_PTR VAR_0, HMODULE VAR_1)
{
    if (VAR_0 == 0)
        return ((void*)0);
    return ((char*) VAR_1) + VAR_0;
}
