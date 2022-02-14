
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct TYPE_3__ {struct in6_addr sin6_addr; int sin6_family; } ;
struct TYPE_4__ {TYPE_1__ in6; } ;
struct openvpn_sockaddr {TYPE_2__ addr; } ;
struct env_set {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct openvpn_sockaddr) ;
 int FUNC_1 (struct in6_addr const*) ;
 unsigned int const VAR_1 ;
 int FUNC_2 (struct env_set*,char const*,struct openvpn_sockaddr*,unsigned int const) ;

void
FUNC_3(struct env_set *VAR_2,
                const char *VAR_3,
                const struct in6_addr *VAR_4,
                const unsigned int VAR_5)
{
    if (!FUNC_1(VAR_4) || !(VAR_5 & VAR_1))
    {
        struct openvpn_sockaddr VAR_6;
        FUNC_0(VAR_6);
        VAR_6.addr.in6.sin6_family = VAR_0;
        VAR_6.addr.in6.sin6_addr = *VAR_4;
        FUNC_2(VAR_2, VAR_3, &VAR_6, VAR_5);
    }
}
