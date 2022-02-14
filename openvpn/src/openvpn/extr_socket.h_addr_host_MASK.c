
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int s_addr; } ;
struct TYPE_7__ {TYPE_2__ sin_addr; } ;
struct TYPE_5__ {scalar_t__ sa_family; } ;
struct TYPE_8__ {TYPE_3__ in4; TYPE_1__ sa; } ;
struct openvpn_sockaddr {TYPE_4__ addr; } ;
typedef int in_addr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline in_addr_t
FUNC_1(const struct openvpn_sockaddr *VAR_1)
{





    if (VAR_1->addr.sa.sa_family != VAR_0)
    {
        return 0;
    }
    return FUNC_0(VAR_1->addr.in4.sin_addr.s_addr);
}
