
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct openvpn_udphdr {int dummy; } ;
struct openvpn_iphdr {int dummy; } ;
struct gc_arena {int dummy; } ;
struct TYPE_6__ {scalar_t__ protocol; int daddr; int saddr; } ;
struct TYPE_5__ {scalar_t__ source; scalar_t__ dest; scalar_t__ check; } ;
struct TYPE_7__ {scalar_t__ op; } ;
struct dhcp_full {TYPE_2__ ip; TYPE_1__ udp; TYPE_3__ dhcp; } ;
struct dhcp {int dummy; } ;
struct buffer {int dummy; } ;
typedef scalar_t__ const in_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct buffer*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct buffer*) ;
 int const VAR_4 ;
 int const VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ const FUNC_2 (TYPE_3__*,int const) ;
 int FUNC_3 (struct gc_arena*) ;
 struct gc_arena FUNC_4 () ;
 int FUNC_5 (TYPE_3__*,int const) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int,int *,int *,scalar_t__) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (scalar_t__ const,int ,struct gc_arena*) ;

in_addr_t
FUNC_10(struct buffer *VAR_8)
{
    struct dhcp_full *VAR_9 = (struct dhcp_full *) FUNC_1(VAR_8);
    const int VAR_10 = FUNC_0(VAR_8) - (sizeof(struct openvpn_iphdr) + sizeof(struct openvpn_udphdr) + sizeof(struct dhcp));

    if (VAR_10 >= 0
        && VAR_9->ip.protocol == VAR_7
        && VAR_9->udp.source == FUNC_6(VAR_2)
        && VAR_9->udp.dest == FUNC_6(VAR_1)
        && VAR_9->dhcp.op == VAR_3)
    {
        const int VAR_11 = FUNC_5(&VAR_9->dhcp, VAR_10);
        if (VAR_11 == VAR_4 || VAR_11 == VAR_5)
        {

            const in_addr_t VAR_12 = FUNC_2(&VAR_9->dhcp, VAR_10);


            VAR_9->udp.check = 0;
            VAR_9->udp.check = FUNC_6(FUNC_7(VAR_0, (uint8_t *)&VAR_9->udp,
                                              sizeof(struct openvpn_udphdr) + sizeof(struct dhcp) + VAR_10,
                                              (uint8_t *)&VAR_9->ip.saddr, (uint8_t *)&VAR_9->ip.daddr,
                                              VAR_7));


            if (VAR_11 == VAR_4)
            {
                if (VAR_12)
                {
                    struct gc_arena VAR_13 = FUNC_4();
                    FUNC_8(VAR_6, "Extracted DHCP router address: %s", FUNC_9(VAR_12, 0, &VAR_13));
                    FUNC_3(&VAR_13);
                }

                return VAR_12;
            }
        }
    }
    return 0;
}
