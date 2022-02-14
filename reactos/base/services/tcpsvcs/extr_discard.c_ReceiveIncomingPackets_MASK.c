
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char TCHAR ;
typedef int SOCKET ;
typedef scalar_t__ INT ;
typedef int CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,int *,int,int ) ;
 int FUNC_3 (char*,char*,scalar_t__) ;

__attribute__((used)) static BOOL
FUNC_4(SOCKET VAR_7)
{
    CHAR VAR_8[VAR_0];
    INT VAR_9;

    do
    {
        VAR_9 = FUNC_2(VAR_7, VAR_8, VAR_0, 0);
        if (VAR_9 > 0)
        {
            TCHAR VAR_10[256];

            FUNC_3(VAR_10, L"Discard: Received %d bytes from client", VAR_9);
            FUNC_0(VAR_10, 0, 0, VAR_3);
        }
        else if (VAR_9 == VAR_4)
        {
            FUNC_0(L"Discard: Socket Error", FUNC_1(), 0, VAR_2);
            return VAR_1;
        }
    } while ((VAR_9 > 0) && (!VAR_6));

    if (!VAR_6)
        FUNC_0(L"Discard: Connection closed by peer", 0, 0, VAR_3);

    return VAR_5;
}
