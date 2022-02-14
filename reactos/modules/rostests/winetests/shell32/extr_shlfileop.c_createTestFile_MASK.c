
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef char CHAR ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__,char const*,int ,int *,int *) ;
 int FUNC_3 (int,char*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(const CHAR *VAR_3)
{
    HANDLE VAR_4;
    DWORD VAR_5;

    VAR_4 = FUNC_1(VAR_3, VAR_1, 0, ((void*)0), VAR_0, 0, ((void*)0));
    FUNC_3(VAR_4 != VAR_2, "Failure to open file %s\n", VAR_3);
    FUNC_2(VAR_4, VAR_3, FUNC_4(VAR_3), &VAR_5, ((void*)0));
    FUNC_2(VAR_4, "\n", FUNC_4("\n"), &VAR_5, ((void*)0));
    FUNC_0(VAR_4);
}
