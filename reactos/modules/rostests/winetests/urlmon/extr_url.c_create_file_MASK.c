
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int CHAR ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int ,int ,int *,int ,int ,int *) ;
 int FUNC_2 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__,char const*,int ,int *,int *) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char const*) ;
 char const* VAR_5 ;

__attribute__((used)) static void FUNC_9(const char *VAR_6, const char *VAR_7)
{
    HANDLE VAR_8;
    DWORD VAR_9;
    CHAR VAR_10[VAR_4];

    VAR_8 = FUNC_1(VAR_6, VAR_2, 0, ((void*)0), VAR_0,
            VAR_1, ((void*)0));
    FUNC_6(VAR_8 != VAR_3, "CreateFile failed\n");
    if(VAR_8 == VAR_3)
        return;

    if(VAR_5)
        FUNC_2(VAR_5);
    VAR_5 = VAR_6;
    FUNC_4(VAR_8, VAR_7, FUNC_8(VAR_7), &VAR_9, ((void*)0));
    FUNC_0(VAR_8);

    FUNC_3(VAR_4, VAR_10);
    FUNC_5(VAR_10, "\\");
    FUNC_5(VAR_10, VAR_6);
    FUNC_7(VAR_10);
}
