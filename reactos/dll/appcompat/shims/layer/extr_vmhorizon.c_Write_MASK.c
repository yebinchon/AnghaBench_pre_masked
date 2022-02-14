
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef scalar_t__ SIZE_T ;
typedef int PVOID ;
typedef int PBYTE ;
typedef int NTSTATUS ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *,scalar_t__*,int ,int *) ;
 int FUNC_3 (int ,int ,int ,scalar_t__,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_4(PBYTE VAR_2, PBYTE VAR_3, SIZE_T VAR_4)
{
    PVOID VAR_5 = VAR_2;
    SIZE_T VAR_6 = VAR_4;
    ULONG VAR_7;
    NTSTATUS VAR_8 = FUNC_2(FUNC_1(), &VAR_5, &VAR_6, VAR_0, &VAR_7);
    if (FUNC_0(VAR_8))
    {
        SIZE_T VAR_9;
        VAR_8 = FUNC_3(FUNC_1(), VAR_2, VAR_3, VAR_4, &VAR_9);
        if (FUNC_0(VAR_8) && VAR_9 != VAR_4)
            VAR_8 = VAR_1;
        FUNC_2(FUNC_1(), &VAR_5, &VAR_6, VAR_7, &VAR_7);
    }
    return FUNC_0(VAR_8);
}
