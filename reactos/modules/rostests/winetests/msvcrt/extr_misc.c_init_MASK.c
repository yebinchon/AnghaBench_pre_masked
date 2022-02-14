
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMODULE ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;

__attribute__((used)) static void FUNC_2(void)
{
    HMODULE VAR_13 = FUNC_0("msvcrt.dll");

    VAR_11 = (void *)FUNC_1(VAR_13, "rand_s");
    VAR_0 = (void*)FUNC_1(VAR_13, "$I10_OUTPUT");
    VAR_12 = (void *)FUNC_1(VAR_13, "strerror_s");
    VAR_4 = (void *)FUNC_1(VAR_13, "_get_doserrno");
    VAR_5 = (void *)FUNC_1(VAR_13, "_get_errno");
    VAR_8 = (void *)FUNC_1(VAR_13, "_set_doserrno");
    VAR_9 = (void *)FUNC_1(VAR_13, "_set_errno");
    VAR_1 = (void *)FUNC_1(VAR_13, "_invalid_parameter");
    VAR_7 = (void *)FUNC_1(VAR_13, "qsort_s");
    VAR_2 = (void *)FUNC_1(VAR_13, "atan");
    VAR_3 = (void *)FUNC_1(VAR_13, "exp");
    VAR_10 = (void *)FUNC_1(VAR_13, "tanh");
    VAR_6 = (void *)FUNC_1(VAR_13, "_lfind_s");
}
