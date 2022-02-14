
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *,int,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int *,int *) ;
 int VAR_1 ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(MSIHANDLE VAR_2, DWORD VAR_3, DWORD VAR_4)
{
    MSIHANDLE VAR_5;
    UINT VAR_6;

    VAR_6 = FUNC_1(VAR_2, ((void*)0), 1, &VAR_5);
    FUNC_4(VAR_6 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_6);

    VAR_6 = FUNC_3(VAR_5, VAR_3, VAR_1, VAR_4, ((void*)0), ((void*)0));
    FUNC_4(VAR_6 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_6);

    VAR_6 = FUNC_2(VAR_5);
    FUNC_4(VAR_6 == VAR_0, "Expected ERROR_SUCCESS, got %u\n", VAR_6);

    FUNC_0(VAR_5);
}
