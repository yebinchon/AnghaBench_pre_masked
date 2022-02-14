
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMODULE ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 void* VAR_0 ;

__attribute__((used)) static void FUNC_2(void)
{
    HMODULE VAR_1;

    VAR_1 = FUNC_0("shell32.dll");
    VAR_0 = (void*)FUNC_1(VAR_1, "SHGetNameFromIDList");
}
