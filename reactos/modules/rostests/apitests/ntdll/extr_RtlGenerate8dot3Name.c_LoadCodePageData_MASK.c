
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int filename ;
typedef int ULONG ;
typedef int * PVOID ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__,int *,int ,int *,int *) ;
 int FUNC_5 (char*,int,char*,char*,...) ;
 int * FUNC_6 (int ) ;

PVOID FUNC_7(ULONG VAR_5)
{
    char VAR_6[VAR_3], VAR_7[VAR_3];
    HANDLE VAR_8;
    PVOID VAR_9 = ((void*)0);
    FUNC_3(VAR_7, VAR_3);

    if (VAR_5 != -1)
        FUNC_5(VAR_6, sizeof(VAR_6), "%s\\c_%lu.nls", VAR_7, VAR_5);
    else
        FUNC_5(VAR_6, sizeof(VAR_6), "%s\\l_intl.nls", VAR_7);

    VAR_8 = FUNC_1(VAR_6, VAR_1, VAR_0, ((void*)0), VAR_4, 0, ((void*)0));
    if (VAR_8 != VAR_2)
    {
        DWORD VAR_10;
        DWORD VAR_11 = FUNC_2(VAR_8, ((void*)0));
        VAR_9 = FUNC_6(VAR_11);
        FUNC_4(VAR_8, VAR_9, VAR_11, &VAR_10, ((void*)0));
        FUNC_0(VAR_8);
    }
    return VAR_9;
}
