
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int sin6_addr; } ;
struct TYPE_7__ {int s_addr; } ;
struct TYPE_8__ {TYPE_2__ sin_addr; } ;
struct TYPE_6__ {int sa_family; } ;
struct TYPE_10__ {TYPE_4__ in6; TYPE_3__ in4; TYPE_1__ sa; } ;
struct openvpn_sockaddr {TYPE_5__ addr; } ;




 int FUNC_0 (int *) ;

__attribute__((used)) static inline bool
FUNC_1(const struct openvpn_sockaddr *VAR_0)
{
    if (!VAR_0)
    {
        return 0;
    }
    switch (VAR_0->addr.sa.sa_family)
    {
        case 129: return VAR_0->addr.in4.sin_addr.s_addr != 0;

        case 128: return !FUNC_0(&VAR_0->addr.in6.sin6_addr);

        default: return 0;
    }
}
