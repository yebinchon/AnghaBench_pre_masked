
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,char*,int,scalar_t__*,int *) ;
 scalar_t__ FUNC_3 (char*,char*,scalar_t__) ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static void FUNC_5(WCHAR *VAR_5, WCHAR *VAR_6)
{
    char VAR_7[256];
    char VAR_8[256];
    DWORD VAR_9, VAR_10;
    HANDLE VAR_11, VAR_12;

    VAR_11 = FUNC_1(VAR_5, VAR_2, VAR_1, ((void*)0), VAR_4,
                     VAR_0, ((void*)0));
    FUNC_4(VAR_11 != VAR_3, "CreateFile\n");

    VAR_12 = FUNC_1(VAR_6, VAR_2, VAR_1, ((void*)0), VAR_4,
                     VAR_0, ((void*)0));
    FUNC_4(VAR_12 != VAR_3, "CreateFile\n");


    FUNC_4(FUNC_2(VAR_11, VAR_7, sizeof VAR_7, &VAR_9, ((void*)0)), "ReadFile\n");
    FUNC_4(FUNC_2(VAR_12, VAR_8, sizeof VAR_8, &VAR_10, ((void*)0)), "ReadFile\n");

    FUNC_0(VAR_11);
    FUNC_0(VAR_12);

    FUNC_4(VAR_9 == VAR_10, "Files differ in length\n");
    FUNC_4(FUNC_3(VAR_7, VAR_8, VAR_9) == 0, "Files differ in contents\n");
}
