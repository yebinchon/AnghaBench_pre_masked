
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int curdir ;
typedef int buf ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,char*,int,int ,int) ;
 int FUNC_4 (scalar_t__,char*,int,int *,int *) ;
 int VAR_6 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char,int) ;
 int FUNC_7 (int,char*) ;
 char* VAR_7 ;

__attribute__((used)) static void FUNC_8(void)
{
    char VAR_8[6500], VAR_9[VAR_5];
    HANDLE VAR_10;
    DWORD VAR_11;

    VAR_10 = FUNC_1(VAR_7, VAR_3, 0, ((void*)0), VAR_1,
            VAR_2, ((void*)0));
    FUNC_7(VAR_10 != VAR_4, "CreateFile failed\n");
    if(VAR_10 == VAR_4)
        return;

    FUNC_6(VAR_8, 'X', sizeof(VAR_8));
    FUNC_4(VAR_10, VAR_8, sizeof(VAR_8), &VAR_11, ((void*)0));
    FUNC_0(VAR_10);

    FUNC_6(VAR_9, 0, sizeof(VAR_9));
    FUNC_2(VAR_5, VAR_9);
    FUNC_5(VAR_9, "\\");
    FUNC_5(VAR_9, VAR_7);

    FUNC_3(VAR_0, 0, VAR_9, -1, VAR_6, VAR_5);
}
