
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef char CHAR ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,int *,int ) ;
 int FUNC_4 (scalar_t__,char const*,int ,scalar_t__*,int *) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (int,char*,char const*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(const CHAR *VAR_4, DWORD VAR_5)
{
    HANDLE VAR_6;
    DWORD VAR_7, VAR_8;

    VAR_6 = FUNC_1(VAR_4, VAR_2, 0, ((void*)0), VAR_0, 0, ((void*)0));
    FUNC_6(VAR_6 != VAR_3, "Failure to open file %s\n", VAR_4);
    FUNC_4(VAR_6, VAR_4, FUNC_7(VAR_4), &VAR_7, ((void*)0));
    FUNC_4(VAR_6, "\n", FUNC_7("\n"), &VAR_7, ((void*)0));

    VAR_8 = VAR_5 - FUNC_5(VAR_4) - 1;

    FUNC_3(VAR_6, VAR_8, ((void*)0), VAR_1);
    FUNC_2(VAR_6);

    FUNC_0(VAR_6);
}
