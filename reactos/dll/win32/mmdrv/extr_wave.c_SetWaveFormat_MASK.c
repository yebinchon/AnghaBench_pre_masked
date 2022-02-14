
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PWAVEFORMATEX ;
typedef int PVOID ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ,int ,int *,int ,int *,int *) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;

BOOL
FUNC_3(
    HANDLE VAR_1,
    PWAVEFORMATEX VAR_2)
{
    DWORD VAR_3;
    DWORD VAR_4;

    VAR_4 = FUNC_2(VAR_2);

    FUNC_0("SetWaveFormat\n");

    return FUNC_1(VAR_1,
                           VAR_0,
                           (PVOID) VAR_2,
                           VAR_4,
                           ((void*)0),
                           0,
                           &VAR_3,
                           ((void*)0));
}
