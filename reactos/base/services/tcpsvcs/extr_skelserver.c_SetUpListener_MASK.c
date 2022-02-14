
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int USHORT ;
struct TYPE_4__ {int s_addr; } ;
struct TYPE_5__ {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
typedef scalar_t__ SOCKET ;
typedef TYPE_2__ SOCKADDR_IN ;
typedef int SOCKADDR ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,int *,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static SOCKET
FUNC_7(USHORT VAR_9)
{
    SOCKET VAR_10;
    SOCKADDR_IN VAR_11;
    BOOL VAR_12 = VAR_1;

    VAR_10 = FUNC_6(VAR_0, VAR_6, 0);
    if (VAR_10 != VAR_3)
    {
        FUNC_2(&VAR_11, sizeof(SOCKADDR_IN));
        VAR_11.sin_family = VAR_0;
        VAR_11.sin_addr.s_addr = FUNC_4(VAR_2);
        VAR_11.sin_port = VAR_9;

        if (FUNC_3(VAR_10, (SOCKADDR*)&VAR_11, sizeof(SOCKADDR_IN)) != VAR_5)
        {
            if (FUNC_5(VAR_10, VAR_7) != VAR_5)
            {
                VAR_12 = VAR_8;
            }
            else
            {
                FUNC_0(L"listen() failed", FUNC_1(), 0, VAR_4);
            }
        }
        else
        {
            FUNC_0(L"bind() failed", FUNC_1(), 0, VAR_4);
        }
    }
    else
    {
        FUNC_0(L"socket() failed", FUNC_1(), 0, VAR_4);
    }

    return VAR_12 ? VAR_10 : VAR_3;
}
