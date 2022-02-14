
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef int * PTCHAR ;
typedef int * PBYTE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int ,int ,int ,int ,int ,int ) ;

PTCHAR FUNC_2(PBYTE VAR_0)
{
    static TCHAR VAR_1[20];

    FUNC_1(VAR_1, FUNC_0("%02x-%02x-%02x-%02x-%02x-%02x"),
        VAR_0[0], VAR_0[1], VAR_0[2], VAR_0[3], VAR_0[4], VAR_0[5]);

    return VAR_1;
}
