
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct hostent {scalar_t__* h_addr_list; } ;
typedef int sa ;
typedef int SOCKET ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct sockaddr*,int) ;
 struct hostent* FUNC_2 (char*) ;
 int FUNC_3 (int) ;

int FUNC_4(SOCKET VAR_1)
{
    int VAR_2;
    struct hostent* VAR_3;
    struct sockaddr_in VAR_4;


    VAR_3 = FUNC_2("test.winehq.org");

    VAR_4.sin_family = VAR_0;
    VAR_4.sin_addr.s_addr = *(u_long*)VAR_3->h_addr_list[0];
    VAR_4.sin_port = FUNC_3(80);

    FUNC_0(FUNC_1(VAR_1, (struct sockaddr *)&VAR_4, sizeof(VAR_4)));

    return 1;
}
