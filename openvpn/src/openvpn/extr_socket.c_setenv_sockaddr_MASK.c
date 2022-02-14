
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_in6 {int dummy; } ;
struct TYPE_10__ {int * s6_addr; } ;
struct TYPE_7__ {int sin6_port; TYPE_5__ sin6_addr; } ;
struct TYPE_9__ {int sa_family; } ;
struct in_addr {int s_addr; } ;
struct TYPE_6__ {int sin_port; struct in_addr sin_addr; } ;
struct TYPE_8__ {TYPE_2__ in6; TYPE_4__ sa; TYPE_1__ in4; } ;
struct openvpn_sockaddr {TYPE_3__ addr; } ;
struct env_set {int dummy; } ;
typedef int name_buf ;
typedef int buf ;




 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 unsigned int const VAR_1 ;
 int FUNC_1 (TYPE_4__*,int,char*,int,int *,int ,int ) ;
 char const* FUNC_2 (struct in_addr) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int,char*,char const*) ;
 int FUNC_6 (struct env_set*,char*,int ) ;
 int FUNC_7 (struct env_set*,char*,char*) ;

void
FUNC_8(struct env_set *VAR_2, const char *VAR_3, const struct openvpn_sockaddr *VAR_4, const unsigned int VAR_5)
{
    char VAR_6[256];

    char VAR_7[128];
    switch (VAR_4->addr.sa.sa_family)
    {
        case 129:
            if (VAR_5 & VAR_1)
            {
                FUNC_5(VAR_6, sizeof(VAR_6), "%s_ip", VAR_3);
            }
            else
            {
                FUNC_5(VAR_6, sizeof(VAR_6), "%s", VAR_3);
            }

            FUNC_7(VAR_2, VAR_6, FUNC_2(VAR_4->addr.in4.sin_addr));

            if ((VAR_5 & VAR_1) && VAR_4->addr.in4.sin_port)
            {
                FUNC_5(VAR_6, sizeof(VAR_6), "%s_port", VAR_3);
                FUNC_6(VAR_2, VAR_6, FUNC_4(VAR_4->addr.in4.sin_port));
            }
            break;

        case 128:
            if (FUNC_0( &VAR_4->addr.in6.sin6_addr ))
            {
                struct in_addr VAR_8;
                FUNC_3(&VAR_8.s_addr, &VAR_4->addr.in6.sin6_addr.s6_addr[12],
                       sizeof(VAR_8.s_addr));
                FUNC_5(VAR_6, sizeof(VAR_6), "%s_ip", VAR_3);
                FUNC_5(VAR_7, sizeof(VAR_7), "%s", FUNC_2(VAR_8) );
            }
            else
            {
                FUNC_5(VAR_6, sizeof(VAR_6), "%s_ip6", VAR_3);
                FUNC_1(&VAR_4->addr.sa, sizeof(struct sockaddr_in6),
                            VAR_7, sizeof(VAR_7), ((void*)0), 0, VAR_0);
            }
            FUNC_7(VAR_2, VAR_6, VAR_7);

            if ((VAR_5 & VAR_1) && VAR_4->addr.in6.sin6_port)
            {
                FUNC_5(VAR_6, sizeof(VAR_6), "%s_port", VAR_3);
                FUNC_6(VAR_2, VAR_6, FUNC_4(VAR_4->addr.in6.sin6_port));
            }
            break;
    }
}
