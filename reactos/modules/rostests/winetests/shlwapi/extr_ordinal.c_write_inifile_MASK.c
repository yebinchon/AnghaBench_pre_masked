
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int data ;
typedef int LPCWSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,char const*,int,int *,int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static BOOL FUNC_5(LPCWSTR VAR_5)
{
    DWORD VAR_6;
    HANDLE VAR_7;

    static const char VAR_8[] =
        "[TestApp]\r\n"
        "AKey=1\r\n"
        "AnotherKey=asdf\r\n";

    VAR_7 = FUNC_1(VAR_5, VAR_2, 0, ((void*)0), VAR_0, 0, ((void*)0));
    if(VAR_7 == VAR_3) {
        FUNC_3("failed to create ini file at %s\n", FUNC_4(VAR_5));
        return VAR_1;
    }

    FUNC_2(VAR_7, VAR_8, sizeof(VAR_8), &VAR_6, ((void*)0));

    FUNC_0(VAR_7);

    return VAR_4;
}
