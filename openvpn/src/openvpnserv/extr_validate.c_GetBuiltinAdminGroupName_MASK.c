
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int SID_NAME_USE ;
typedef int * PSID ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,int *,int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *,int *,int *,int *,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;

__attribute__((used)) static BOOL
FUNC_5(WCHAR *VAR_4, DWORD VAR_5)
{
    BOOL VAR_6 = VAR_0;
    PSID VAR_7 = ((void*)0);
    DWORD VAR_8 = VAR_2;
    SID_NAME_USE VAR_9;

    WCHAR VAR_10[VAR_1];
    DWORD VAR_11 = FUNC_2(VAR_10);

    VAR_7 = FUNC_4(VAR_8);
    if (!VAR_7)
    {
        return VAR_0;
    }

    VAR_6 = FUNC_0(VAR_3, ((void*)0), VAR_7, &VAR_8);
    if (VAR_6)
    {
        VAR_6 = FUNC_1(((void*)0), VAR_7, VAR_4, &VAR_5, VAR_10, &VAR_11, &VAR_9);
    }

    FUNC_3(VAR_7);

    return VAR_6;
}
