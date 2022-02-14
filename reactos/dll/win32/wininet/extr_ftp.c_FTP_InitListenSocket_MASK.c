
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef int socklen_t ;
struct TYPE_4__ {int sin_port; } ;
struct TYPE_5__ {int lstnSocket; TYPE_1__ lstnSocketAddress; TYPE_1__ socketAddress; } ;
typedef TYPE_2__ ftp_session_t ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,struct sockaddr*,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static BOOL FUNC_8(ftp_session_t *VAR_5)
{
    BOOL VAR_6 = VAR_1;
    socklen_t VAR_7 = sizeof(VAR_5->lstnSocketAddress);

    FUNC_0("\n");

    FUNC_5();
    VAR_5->lstnSocket = FUNC_7(VAR_0, VAR_3, 0);
    if (VAR_5->lstnSocket == -1)
    {
        FUNC_0("Unable to create listening socket\n");
            goto lend;
    }


    VAR_5->lstnSocketAddress = VAR_5->socketAddress;


    VAR_5->lstnSocketAddress.sin_port = FUNC_4(0);

    if (FUNC_1(VAR_5->lstnSocket,(struct sockaddr *) &VAR_5->lstnSocketAddress, sizeof(VAR_5->lstnSocketAddress)) == -1)
    {
        FUNC_0("Unable to bind socket\n");
        goto lend;
    }

    if (FUNC_6(VAR_5->lstnSocket, VAR_2) == -1)
    {
        FUNC_0("listen failed\n");
        goto lend;
    }

    if (FUNC_3(VAR_5->lstnSocket, (struct sockaddr *) &VAR_5->lstnSocketAddress, &VAR_7) != -1)
        VAR_6 = VAR_4;

lend:
    if (!VAR_6 && VAR_5->lstnSocket != -1)
    {
        FUNC_2(VAR_5->lstnSocket);
        VAR_5->lstnSocket = -1;
    }

    return VAR_6;
}
