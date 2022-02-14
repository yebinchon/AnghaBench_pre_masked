
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct in_addr {int dummy; } ;
typedef int WSADATA ;
struct TYPE_8__ {struct in_addr sin_addr; int sin_port; int sin_family; } ;
struct TYPE_7__ {scalar_t__ h_addr; } ;
struct TYPE_6__ {scalar_t__ Sock; TYPE_4__ ntpAddr; } ;
typedef int SOCKADDR_IN ;
typedef TYPE_1__* PINFO ;
typedef int LPSTR ;
typedef scalar_t__ INT ;
typedef TYPE_2__ HOSTENT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_4__*,int) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static BOOL
FUNC_6(PINFO VAR_6,
               LPSTR VAR_7)
{
    WSADATA VAR_8;
    HOSTENT *VAR_9;
    INT VAR_10;

    VAR_10 = FUNC_1(FUNC_0(2, 2),
                     &VAR_8);
    if (VAR_10 != 0)
        return VAR_1;

    VAR_6->Sock = FUNC_5(VAR_0,
                         VAR_4,
                         0);
    if (VAR_6->Sock == VAR_2)
        return VAR_1;


    VAR_9 = FUNC_3(VAR_7);
    if (VAR_9 != ((void*)0))
    {

        FUNC_2(&VAR_6->ntpAddr, sizeof(SOCKADDR_IN));
        VAR_6->ntpAddr.sin_family = VAR_0;
        VAR_6->ntpAddr.sin_port = FUNC_4(VAR_3);
        VAR_6->ntpAddr.sin_addr = *((struct in_addr *)VAR_9->h_addr);
    }
    else
        return VAR_1;

    return VAR_5;
}
