
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct openvpn_tcphdr {int flags; } ;
struct openvpn_iphdr {scalar_t__ protocol; int frag_off; int tot_len; int version_len; } ;
struct buffer {int dummy; } ;


 int FUNC_0 (struct buffer*) ;
 scalar_t__ FUNC_1 (struct buffer*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct buffer*,int) ;
 int FUNC_4 (struct buffer*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct buffer*) ;

void
FUNC_7(struct buffer *VAR_3, int VAR_4)
{
    const struct openvpn_iphdr *VAR_5;
    int VAR_6;

    if (FUNC_0(VAR_3) < (int) sizeof(struct openvpn_iphdr))
    {
        return;
    }

    FUNC_6(VAR_3);
    VAR_5 = (struct openvpn_iphdr *) FUNC_1(VAR_3);

    VAR_6 = FUNC_2(VAR_5->version_len);

    if (VAR_5->protocol == VAR_0
        && FUNC_5(VAR_5->tot_len) == FUNC_0(VAR_3)
        && (FUNC_5(VAR_5->frag_off) & VAR_1) == 0
        && VAR_6 <= FUNC_0(VAR_3)
        && FUNC_0(VAR_3) - VAR_6
        >= (int) sizeof(struct openvpn_tcphdr))
    {
        struct buffer VAR_7 = *VAR_3;
        if (FUNC_3(&VAR_7, VAR_6))
        {
            struct openvpn_tcphdr *VAR_8 = (struct openvpn_tcphdr *) FUNC_1(&VAR_7);
            if (VAR_8->flags & VAR_2)
            {
                FUNC_4(&VAR_7, (uint16_t) VAR_4);
            }
        }
    }
}
