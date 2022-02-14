
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_7__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct TYPE_8__ {int sin6_addr; } ;
struct TYPE_11__ {int s_addr; } ;
struct TYPE_12__ {TYPE_5__ sin_addr; } ;
struct TYPE_9__ {int sa_family; } ;
struct TYPE_10__ {TYPE_2__ in6; TYPE_6__ in4; TYPE_3__ sa; } ;
struct openvpn_sockaddr {TYPE_4__ addr; } ;
struct addrinfo {scalar_t__ ai_addr; struct addrinfo* ai_next; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static inline bool
FUNC_2(const struct openvpn_sockaddr *VAR_0, const struct addrinfo *VAR_1)
{
    const struct addrinfo *VAR_2;
    for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->ai_next)
    {
        switch (VAR_0->addr.sa.sa_family)
        {
            case 129:
                if (VAR_0->addr.in4.sin_addr.s_addr == ((struct sockaddr_in *)VAR_2->ai_addr)->sin_addr.s_addr)
                {
                    return 1;
                }
                break;

            case 128:
                if (FUNC_1(&VAR_0->addr.in6.sin6_addr, &((struct sockaddr_in6 *) VAR_2->ai_addr)->sin6_addr))
                {
                    return 1;
                }
                break;

            default:
                FUNC_0(0);
        }
    }
    return 0;
}
