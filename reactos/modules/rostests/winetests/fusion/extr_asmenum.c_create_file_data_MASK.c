
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCSTR ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,int *,int ) ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__,int ,int ,scalar_t__*,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static BOOL FUNC_6(LPCSTR VAR_6, LPCSTR VAR_7, DWORD VAR_8)
{
    HANDLE VAR_9;
    DWORD VAR_10;

    VAR_9 = FUNC_1(VAR_6, VAR_3, 0, ((void*)0), VAR_0, 0, ((void*)0));
    if (VAR_9 == VAR_4)
        return VAR_1;

    FUNC_4(VAR_9, VAR_7, FUNC_5(VAR_7), &VAR_10, ((void*)0));

    if (VAR_8)
    {
        FUNC_3(VAR_9, VAR_8, ((void*)0), VAR_2);
        FUNC_2(VAR_9);
    }

    FUNC_0(VAR_9);
    return VAR_5;
}
