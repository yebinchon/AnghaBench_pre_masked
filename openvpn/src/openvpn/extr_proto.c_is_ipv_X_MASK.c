
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct openvpn_iphdr {int version_len; } ;
struct openvpn_ethhdr {int proto; } ;
struct openvpn_8021qhdr {int proto; } ;
struct buffer {int dummy; } ;


 int FUNC_0 (struct buffer*) ;
 scalar_t__ FUNC_1 (struct buffer*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct buffer*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct buffer*) ;

__attribute__((used)) static bool
FUNC_7(int VAR_5, struct buffer *VAR_6, int VAR_7)
{
    int VAR_8;
    uint16_t VAR_9;
    const struct openvpn_iphdr *VAR_10;

    FUNC_6(VAR_6);
    if (VAR_5 == VAR_1)
    {
        if (FUNC_0(VAR_6) < sizeof(struct openvpn_iphdr))
        {
            return 0;
        }
        VAR_8 = 0;
    }
    else if (VAR_5 == VAR_0)
    {
        const struct openvpn_ethhdr *VAR_11;
        if (FUNC_0(VAR_6) < (sizeof(struct openvpn_ethhdr)
                         + sizeof(struct openvpn_iphdr)))
        {
            return 0;
        }
        VAR_11 = (const struct openvpn_ethhdr *)FUNC_1(VAR_6);


        VAR_9 = VAR_11->proto;
        VAR_8 = sizeof(struct openvpn_ethhdr);




        if (VAR_9 == FUNC_4(VAR_2))
        {
            const struct openvpn_8021qhdr *VAR_12;
            if (FUNC_0(VAR_6) < (sizeof(struct openvpn_ethhdr)
                             + sizeof(struct openvpn_iphdr)))
            {
                return 0;
            }

            VAR_12 = (const struct openvpn_8021qhdr *)FUNC_1(VAR_6);

            VAR_9 = VAR_12->proto;
            VAR_8 = sizeof(struct openvpn_8021qhdr);
        }

        if (FUNC_5(VAR_9) != (VAR_7 == 6 ? VAR_4 : VAR_3))
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }

    VAR_10 = (const struct openvpn_iphdr *)(FUNC_1(VAR_6) + VAR_8);


    if (FUNC_2(VAR_10->version_len) == VAR_7)
    {
        return FUNC_3(VAR_6, VAR_8);
    }
    else
    {
        return 0;
    }
}
