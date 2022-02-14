
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int,int *) ;
 scalar_t__ FUNC_3 (int const*,int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(const WCHAR *VAR_4)
{
    MSIHANDLE VAR_5, VAR_6;
    UINT VAR_7;

    VAR_7 = FUNC_3(VAR_4, VAR_1, &VAR_5);
    FUNC_6(VAR_7 == VAR_0, "Expected ERROR_SUCCESS, got %u\n", VAR_7);

    VAR_7 = FUNC_2(VAR_5, ((void*)0), 1, &VAR_6);
    FUNC_6(VAR_7 == VAR_0, "Expected ERROR_SUCCESS, got %u\n", VAR_7);

    VAR_7 = FUNC_5(VAR_6, VAR_2, VAR_3, 5, ((void*)0), ((void*)0));
    FUNC_6(VAR_7 == VAR_0, "Expected ERROR_SUCCESS, got %u\n", VAR_7);


    VAR_7 = FUNC_4(VAR_6);
    FUNC_6(VAR_7 == VAR_0, "Expected ERROR_SUCCESS, got %u\n", VAR_7);

    FUNC_0(VAR_6);

    VAR_7 = FUNC_1(VAR_5);
    FUNC_6(VAR_7 == VAR_0, "Expected ERROR_SUCCESS, got %u\n", VAR_7);

    FUNC_0(VAR_5);
}
