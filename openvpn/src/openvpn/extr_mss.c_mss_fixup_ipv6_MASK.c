
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct openvpn_tcphdr {int flags; } ;
struct openvpn_ipv6hdr {scalar_t__ nexthdr; int payload_len; } ;
struct buffer {int dummy; } ;


 int FUNC_0 (struct buffer*) ;
 scalar_t__ FUNC_1 (struct buffer*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct buffer*,int) ;
 int FUNC_3 (struct buffer*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct buffer*) ;

void
FUNC_6(struct buffer *VAR_2, int VAR_3)
{
    const struct openvpn_ipv6hdr *VAR_4;
    struct buffer VAR_5;

    if (FUNC_0(VAR_2) < (int) sizeof(struct openvpn_ipv6hdr))
    {
        return;
    }

    FUNC_5(VAR_2);
    VAR_4 = (struct openvpn_ipv6hdr *) FUNC_1(VAR_2);




    if (FUNC_0(VAR_2) != (int) FUNC_4(VAR_4->payload_len)+40)
    {
        return;
    }
    if (VAR_4->nexthdr != VAR_0)
    {
        return;
    }




    VAR_5 = *VAR_2;
    if (FUNC_2( &VAR_5, 40 )
        && FUNC_0(&VAR_5) >= (int) sizeof(struct openvpn_tcphdr))
    {
        struct openvpn_tcphdr *VAR_6 = (struct openvpn_tcphdr *) FUNC_1(&VAR_5);
        if (VAR_6->flags & VAR_1)
        {
            FUNC_3(&VAR_5, (uint16_t) VAR_3-20);
        }
    }
}
