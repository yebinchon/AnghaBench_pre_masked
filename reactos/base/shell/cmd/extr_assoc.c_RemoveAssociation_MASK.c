
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPTSTR ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(LPTSTR VAR_3)
{
    DWORD VAR_4;
    HKEY VAR_5;

    VAR_4 = FUNC_2(VAR_1, FUNC_3("SOFTWARE\\Classes"), 0, VAR_2, &VAR_5);

    if (VAR_4 != VAR_0)
        return -1;

    VAR_4 = FUNC_1(VAR_5, VAR_3);
    FUNC_0(VAR_5);

    if (VAR_4 != VAR_0)
        return -2;

    return 0;
}
