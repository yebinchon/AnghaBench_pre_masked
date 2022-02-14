
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SOCKET ;
typedef int LPSTR ;
typedef scalar_t__ INT ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static BOOL
FUNC_3(SOCKET VAR_6, LPSTR VAR_7)
{
    BOOL VAR_8 = VAR_0;


    INT VAR_9 = FUNC_2(VAR_6, VAR_7, VAR_1, 0);
    if (VAR_9 > 0)
    {
        if (VAR_9 == VAR_1)
        {
            VAR_8 = VAR_5;
        }
        else
        {
            FUNC_0(L"Chargen: Not sent enough bytes", 0, 0, VAR_3);
        }
    }
    else if (VAR_9 == VAR_4)
    {
        FUNC_0(L"Chargen: Socket error\n", FUNC_1(), 0, VAR_2);
    }
    else
    {
        FUNC_0(L"Chargen: unknown error\n", FUNC_1(), 0, VAR_2);
    }

    return VAR_8;
}
