
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int s_addr; } ;
struct TYPE_5__ {TYPE_1__ sin_addr; int sin_family; } ;
struct TYPE_6__ {TYPE_2__ in4; } ;
struct openvpn_sockaddr {TYPE_3__ addr; } ;
struct env_set {int dummy; } ;
typedef scalar_t__ in_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct openvpn_sockaddr) ;
 unsigned int const VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct env_set*,char const*,struct openvpn_sockaddr*,unsigned int const) ;

void
FUNC_3(struct env_set *VAR_2, const char *VAR_3, in_addr_t VAR_4, const unsigned int VAR_5)
{
    if (VAR_4 || !(VAR_5 & VAR_1))
    {
        struct openvpn_sockaddr VAR_6;
        FUNC_0(VAR_6);
        VAR_6.addr.in4.sin_family = VAR_0;
        VAR_6.addr.in4.sin_addr.s_addr = FUNC_1(VAR_4);
        FUNC_2(VAR_2, VAR_3, &VAR_6, VAR_5);
    }
}
