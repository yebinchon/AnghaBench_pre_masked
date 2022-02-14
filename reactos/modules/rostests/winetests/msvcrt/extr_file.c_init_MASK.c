
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMODULE ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    HMODULE VAR_6 = FUNC_0("msvcrt.dll");

    FUNC_2(VAR_0, "C");

    VAR_5 = (void*)FUNC_1(VAR_6, "fopen_s");
    VAR_4 = (void*)FUNC_1(VAR_6, "_wfopen_s");
    VAR_1 = (void*)FUNC_1(VAR_6, "__pioinfo");
    VAR_2 = (void*)FUNC_1(VAR_6, "_get_fmode");
    VAR_3 = (void*)FUNC_1(VAR_6, "_set_fmode");
}
