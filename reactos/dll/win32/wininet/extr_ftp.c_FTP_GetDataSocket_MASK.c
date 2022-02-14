
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int saddr ;
struct TYPE_4__ {int dwFlags; } ;
struct TYPE_5__ {int pasvSocket; int lstnSocket; TYPE_1__ hdr; } ;
typedef TYPE_2__ ftp_session_t ;
typedef int* LPINT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,struct sockaddr*,int*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static BOOL FUNC_3(ftp_session_t *VAR_1, LPINT VAR_2)
{
    struct sockaddr_in VAR_3;
    socklen_t VAR_4 = sizeof(VAR_3);

    FUNC_0("\n");
    if (VAR_1->hdr.dwFlags & VAR_0)
    {
 *VAR_2 = VAR_1->pasvSocket;
 VAR_1->pasvSocket = -1;
    }
    else
    {
        *VAR_2 = FUNC_1(VAR_1->lstnSocket, (struct sockaddr *) &VAR_3, &VAR_4);
        FUNC_2(VAR_1->lstnSocket);
        VAR_1->lstnSocket = -1;
    }
    return *VAR_2 != -1;
}
