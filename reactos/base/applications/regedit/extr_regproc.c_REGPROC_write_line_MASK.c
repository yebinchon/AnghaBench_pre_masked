
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int FILE ;
typedef scalar_t__ BOOL ;


 char* FUNC_0 (int const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int const*,int,int ,int *) ;
 int FUNC_5 (int const*) ;

__attribute__((used)) static void FUNC_6(FILE *VAR_0, const WCHAR* VAR_1, BOOL VAR_2)
{
    if(VAR_2)
    {
        FUNC_4(VAR_1, sizeof(WCHAR), FUNC_5(VAR_1), VAR_0);
    } else
    {
        char* VAR_3 = FUNC_0(VAR_1);
        FUNC_3(VAR_3, VAR_0);
        FUNC_2(FUNC_1(), 0, VAR_3);
    }
}
