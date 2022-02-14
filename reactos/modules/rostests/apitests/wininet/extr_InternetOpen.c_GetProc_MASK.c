
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PVOID ;
typedef int PCSTR ;
typedef int HMODULE ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int ) ;

__attribute__((used)) static
PVOID
FUNC_2(
    PCSTR VAR_0)
{
    HMODULE VAR_1;

    VAR_1 = FUNC_0(L"ws2_32");
    if (!VAR_1)
        return ((void*)0);
    return FUNC_1(VAR_1, VAR_0);
}
