
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




 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static inline bool
FUNC_2(const struct openvpn_sockaddr *VAR_0, const struct openvpn_sockaddr *VAR_1)
{
    switch (VAR_0->addr.sa.sa_family)
    {
        case 129:
            return VAR_0->addr.in4.sin_addr.s_addr == VAR_1->addr.in4.sin_addr.s_addr;

        case 128:
            return FUNC_1(&VAR_0->addr.in6.sin6_addr, &VAR_1->addr.in6.sin6_addr);
    }
    FUNC_0(0);
    return 0;
}
