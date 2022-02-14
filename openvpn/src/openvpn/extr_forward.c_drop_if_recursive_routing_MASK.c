
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int sin6_addr; } ;
struct TYPE_13__ {scalar_t__ sa_family; } ;
struct TYPE_11__ {scalar_t__ s_addr; } ;
struct TYPE_12__ {TYPE_2__ sin_addr; } ;
struct TYPE_15__ {TYPE_5__ in6; TYPE_4__ sa; TYPE_3__ in4; } ;
struct openvpn_sockaddr {TYPE_6__ addr; } ;
struct openvpn_ipv6hdr {int daddr; } ;
struct openvpn_iphdr {scalar_t__ daddr; } ;
struct gc_arena {int dummy; } ;
struct TYPE_18__ {scalar_t__ len; } ;
struct TYPE_16__ {TYPE_8__* to_link_addr; TYPE_9__ buf; } ;
struct TYPE_10__ {int tuntap; } ;
struct context {TYPE_7__ c2; TYPE_1__ c1; } ;
struct buffer {int dummy; } ;
struct TYPE_17__ {struct openvpn_sockaddr dest; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct buffer*) ;
 scalar_t__ FUNC_1 (struct buffer*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct gc_arena*) ;
 struct gc_arena FUNC_5 () ;
 int FUNC_6 (int ,TYPE_9__*,int*) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (TYPE_8__*,struct gc_arena*) ;

__attribute__((used)) static void
FUNC_9(struct context *VAR_3, struct buffer *VAR_4)
{
    bool VAR_5 = 0;
    struct openvpn_sockaddr VAR_6;
    int VAR_7 = 0;

    if (VAR_3->c2.to_link_addr == ((void*)0))
    {
        return;
    }

    VAR_6 = VAR_3->c2.to_link_addr->dest;

    int VAR_8 = FUNC_6(FUNC_3(VAR_3->c1.tuntap), &VAR_3->c2.buf, &VAR_7);

    if (VAR_8 == 4)
    {
        const struct openvpn_iphdr *VAR_9;


        if (FUNC_0(VAR_4) < ((int) sizeof(struct openvpn_iphdr) + VAR_7))
        {
            return;
        }


        if (VAR_6.addr.sa.sa_family != VAR_0)
        {
            return;
        }

        VAR_9 = (struct openvpn_iphdr *) (FUNC_1(VAR_4) + VAR_7);


        if (VAR_6.addr.in4.sin_addr.s_addr == VAR_9->daddr)
        {
            VAR_5 = 1;
        }
    }
    else if (VAR_8 == 6)
    {
        const struct openvpn_ipv6hdr *VAR_10;


        if (FUNC_0(VAR_4) < ((int) sizeof(struct openvpn_ipv6hdr) + VAR_7))
        {
            return;
        }


        if (VAR_6.addr.sa.sa_family != VAR_1)
        {
            return;
        }


        VAR_10 = (struct openvpn_ipv6hdr *) (FUNC_1(VAR_4) + VAR_7);
        if (FUNC_2(&VAR_6.addr.in6.sin6_addr, &VAR_10->daddr))
        {
            VAR_5 = 1;
        }
    }

    if (VAR_5)
    {
        struct gc_arena VAR_11 = FUNC_5();

        VAR_3->c2.buf.len = 0;

        FUNC_7(VAR_2, "Recursive routing detected, drop tun packet to %s",
            FUNC_8(VAR_3->c2.to_link_addr, &VAR_11));
        FUNC_4(&VAR_11);
    }
}
