
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HANDLE ;


 int FUNC_0 (int *,int ,int ,char*) ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (char*,char*,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 char* FUNC_6 (char const*,char) ;

__attribute__((used)) static void FUNC_7(const char* VAR_0, HANDLE *VAR_1, HANDLE *VAR_2)
{
    const char* VAR_3;
    char* VAR_4;

    VAR_3=FUNC_6(VAR_0, '\\');
    VAR_3=(VAR_3 ? VAR_3+1 : VAR_0);
    VAR_4=FUNC_2(FUNC_1(), 0, 6+FUNC_5(VAR_3)+1);

    FUNC_4(VAR_4, "start_%s", VAR_3);
    *VAR_1=FUNC_0(((void*)0), 0,0, VAR_4);
    FUNC_4(VAR_4, "done_%s", VAR_3);
    *VAR_2=FUNC_0(((void*)0), 0,0, VAR_4);
    FUNC_3(FUNC_1(), 0, VAR_4);
}
