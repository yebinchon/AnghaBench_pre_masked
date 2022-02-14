
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sa_inet ;
struct TYPE_10__ {int ipv6; int ipv4; } ;
typedef TYPE_3__ inet_address_t ;
struct TYPE_9__ {int sin6_addr; } ;
struct TYPE_8__ {int sin_addr; } ;
struct TYPE_11__ {short si_family; TYPE_2__ Ipv6; TYPE_1__ Ipv4; } ;
typedef TYPE_4__ SOCKADDR_INET ;


 short VAR_0 ;
 short VAR_1 ;
 int FUNC_0 (TYPE_4__*,int) ;

__attribute__((used)) static SOCKADDR_INET
FUNC_1(short VAR_2, inet_address_t *VAR_3)
{
    SOCKADDR_INET VAR_4;
    FUNC_0(&VAR_4, sizeof(VAR_4));
    VAR_4.si_family = VAR_2;
    if (VAR_2 == VAR_0)
    {
        VAR_4.Ipv4.sin_addr = VAR_3->ipv4;
    }
    else if (VAR_2 == VAR_1)
    {
        VAR_4.Ipv6.sin6_addr = VAR_3->ipv6;
    }
    return VAR_4;
}
