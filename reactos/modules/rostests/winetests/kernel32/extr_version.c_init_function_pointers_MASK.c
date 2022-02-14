
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMODULE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
    HMODULE VAR_2;

    VAR_2 = FUNC_1("kernel32.dll");

    FUNC_0(VAR_0);

    VAR_2 = FUNC_1("ntdll.dll");

    FUNC_0(VAR_1);
}
