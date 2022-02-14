
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PVOID ;
typedef int * PBYTE ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int ,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,int *) ;
 scalar_t__ VAR_1 ;
 int * FUNC_3 (scalar_t__,int ,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static PBYTE FUNC_4(HANDLE VAR_3, DWORD* VAR_4)
{
    HANDLE VAR_5;
    PVOID VAR_6;

    *VAR_4 = FUNC_2(VAR_3, ((void*)0));
    VAR_5 = FUNC_1(VAR_3, ((void*)0), VAR_2, 0, 0, ((void*)0));
    if (VAR_5 != VAR_1)
    {
        VAR_6 = FUNC_3(VAR_5, VAR_0, 0, 0, 0);
        FUNC_0(VAR_5);
        return VAR_6;
    }

    return ((void*)0);
}
