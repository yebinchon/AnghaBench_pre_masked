
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (scalar_t__,char const*,int ,int *,int *) ;
 int FUNC_4 (int,char*,char const*,...) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_5, const char *VAR_6)
{
    DWORD VAR_7;
    HANDLE VAR_8;
    BOOL VAR_9;

    VAR_8 = FUNC_1(VAR_5, VAR_3|VAR_2, 0, ((void*)0), VAR_0, VAR_1, ((void*)0) );
    FUNC_4(VAR_8 != VAR_4, "failed to create test file: %s\n", VAR_5);

    VAR_9 = FUNC_3(VAR_8, VAR_6, FUNC_5(VAR_6), &VAR_7, ((void*)0));
    FUNC_4(VAR_9, "WriteFile failed: %s, %d\n", VAR_5, FUNC_2());

    FUNC_0(VAR_8);
}
