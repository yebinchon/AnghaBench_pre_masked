
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct TYPE_4__ {struct sockaddr_in6 in6; struct sockaddr_in in4; } ;
struct TYPE_3__ {TYPE_2__ addr; } ;
struct link_socket_actual {TYPE_1__ dest; } ;
struct addrinfo {scalar_t__ ai_family; scalar_t__ ai_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (struct link_socket_actual) ;

void
FUNC_2(struct link_socket_actual *VAR_2, struct addrinfo *VAR_3)
{
    FUNC_1(*VAR_2);
    FUNC_0(VAR_3);

    if (VAR_3->ai_family == VAR_0)
    {
        VAR_2->dest.addr.in4 =
            *((struct sockaddr_in *) VAR_3->ai_addr);
    }
    else if (VAR_3->ai_family == VAR_1)
    {
        VAR_2->dest.addr.in6 =
            *((struct sockaddr_in6 *) VAR_3->ai_addr);
    }
    else
    {
        FUNC_0(0);
    }

}
