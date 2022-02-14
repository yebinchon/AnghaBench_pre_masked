
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8_t ;
struct sockaddr_in {int sin_len; int sin_addr; int sin_port; int sin_family; } ;
typedef int sockaddr ;
typedef int socklen_t ;
typedef int sin ;
struct TYPE_3__ {int conn; } ;
typedef TYPE_1__ lwIP_sock ;
typedef int ip_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int*,struct sockaddr_in*,int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int ,int *,int *,int ) ;
 int FUNC_6 (struct sockaddr_in*,int ,int) ;

__attribute__((used)) static int
FUNC_7(int VAR_1, struct sockaddr *VAR_2, socklen_t *VAR_3, u8_t VAR_4)
{
    lwIP_sock *VAR_5 = ((void*)0);
    struct sockaddr_in VAR_6;
    ip_addr_t VAR_7;
    FUNC_4(VAR_2);
    FUNC_4(VAR_3);

    VAR_5 = FUNC_1(VAR_1);
    if (!VAR_5)
    {
        return -1;
    }

    FUNC_6(&VAR_6, 0, sizeof(VAR_6));
    VAR_6.sin_len = sizeof(VAR_6);
    VAR_6.sin_family = VAR_0;


    FUNC_5(VAR_5->conn, &VAR_7, &VAR_6.sin_port, VAR_4);
    VAR_6.sin_port = FUNC_2(VAR_6.sin_port);
    FUNC_3(&VAR_6.sin_addr, &VAR_7);

    if (*VAR_3 > sizeof(VAR_6))
    {
        *VAR_3 = sizeof(VAR_6);
    }

    FUNC_0(VAR_2, &VAR_6, *VAR_3);

    return 0;
}
