
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HWND ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3 (HWND VAR_0)
{
    if (FUNC_1(VAR_0))
        FUNC_0(FUNC_1(VAR_0));
    else {
        FUNC_2("Edit control has no parent!\n");
        FUNC_0(VAR_0);
    }
}
