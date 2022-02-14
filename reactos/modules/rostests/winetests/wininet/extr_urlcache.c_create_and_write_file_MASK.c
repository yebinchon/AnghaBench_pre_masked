
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (scalar_t__,void*,int ,int *,int *) ;
 int FUNC_4 (int,char*,int ) ;

__attribute__((used)) static void FUNC_5(LPCSTR VAR_6, void *VAR_7, DWORD VAR_8)
{
    HANDLE VAR_9;
    DWORD VAR_10;
    BOOL VAR_11;

    VAR_9 = FUNC_1(VAR_6, VAR_4,
                       VAR_2|VAR_3, ((void*)0), VAR_0,
                       VAR_1, ((void*)0));
    FUNC_4(VAR_9 != VAR_5, "CreateFileA failed with error %d\n", FUNC_2());

    VAR_11 = FUNC_3(VAR_9, VAR_7, VAR_8, &VAR_10, ((void*)0));
    FUNC_4(VAR_11, "WriteFile failed with error %d\n", FUNC_2());

    FUNC_0(VAR_9);
}
