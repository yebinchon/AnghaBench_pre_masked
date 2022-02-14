
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int SOCKET ;
typedef scalar_t__ INT ;
typedef int CHAR ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *,int,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,char*,scalar_t__) ;

BOOL
FUNC_6(SOCKET VAR_7,
                   BOOL VAR_8)
{
    WCHAR VAR_9[256];




    if (FUNC_4(VAR_7, VAR_4) == VAR_5)
    {
        FUNC_0(L"Error in shutdown()", FUNC_1(), 0, VAR_2);
        return VAR_1;
    }



    if (VAR_8)
    {
        CHAR VAR_10[VAR_0];
        INT VAR_11;

        do
        {
            VAR_11 = FUNC_3(VAR_7, VAR_10, VAR_0, 0);
            if (VAR_11 >= 0)
            {
                FUNC_5(VAR_9, L"FYI, received %d unexpected bytes during shutdown", VAR_11);
                FUNC_0(VAR_9, 0, 0, VAR_3);
            }
        } while (VAR_11 > 0);
    }

    FUNC_2(VAR_7);

    return VAR_6;
}
