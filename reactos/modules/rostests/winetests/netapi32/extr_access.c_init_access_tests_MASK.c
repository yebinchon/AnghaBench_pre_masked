
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__*,int *) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__*,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_4 (scalar_t__,char*) ;
 scalar_t__* VAR_4 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static BOOL FUNC_6(void)
{
    DWORD VAR_5;
    BOOL VAR_6;

    VAR_4[0] = 0;
    VAR_5 = FUNC_0(VAR_4);
    VAR_6=FUNC_3(VAR_4, &VAR_5);
    if (VAR_6==VAR_1 && FUNC_2()==VAR_0)
    {
        FUNC_5("GetUserNameW is not available.\n");
        return VAR_1;
    }
    FUNC_4(VAR_6, "User Name Retrieved\n");

    VAR_3[0] = 0;
    VAR_5 = FUNC_0(VAR_3);
    FUNC_4(FUNC_1(VAR_3, &VAR_5), "Computer Name Retrieved\n");
    return VAR_2;
}
