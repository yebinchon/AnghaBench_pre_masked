
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int SOCKET ;
typedef scalar_t__ INT ;
typedef int CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,int *,int,int ) ;
 scalar_t__ FUNC_3 (int ,int *,scalar_t__,int ) ;
 int FUNC_4 (char*,char*,scalar_t__) ;

__attribute__((used)) static BOOL
FUNC_5(SOCKET VAR_7)
{
    CHAR VAR_8[VAR_3];
    WCHAR VAR_9[256];
    INT VAR_10;
    INT VAR_11;
    INT VAR_12;

    do
    {
        VAR_11 = FUNC_2(VAR_7, VAR_8, VAR_3, 0);
        if (VAR_11 > 0)
        {
            FUNC_4(VAR_9, L"Received %d bytes from client", VAR_11);
            FUNC_0(VAR_9, 0, 0, VAR_2);

            VAR_10 = 0;
            while (!VAR_6 && VAR_10 < VAR_11)
            {
                VAR_12 = FUNC_3(VAR_7, VAR_8 + VAR_10, VAR_11 - VAR_10, 0);
                if (VAR_12 > 0)
                {
                    FUNC_4(VAR_9, L"Sent %d bytes back to client", VAR_12);
                    FUNC_0(VAR_9, 0, 0, VAR_2);
                    VAR_10 += VAR_12;
                }
                else if (VAR_12 == VAR_4)
                {
                    FUNC_0(L"Echo: socket error", FUNC_1(), 0, VAR_1);
                    return VAR_0;
                }
                else
                {


                    FUNC_0(L"Peer unexpectedly dropped connection!", 0, 0, VAR_2);
                    return VAR_0;
                }
            }
        }
        else if (VAR_11 == VAR_4)
        {
            FUNC_0(L"Echo: socket error", FUNC_1(), 0, VAR_1);
            return VAR_0;
        }
    } while ((VAR_11 != 0) && (!VAR_6));

    if (!VAR_6)
        FUNC_0(L"Echo: Connection closed by peer", 0, 0, VAR_2);

    return VAR_5;
}
