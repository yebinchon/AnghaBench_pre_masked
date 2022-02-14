
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct openvpn_iphdr {int dummy; } ;
struct openvpn_ethhdr {int proto; } ;
struct buffer {int dummy; } ;


 int FUNC_0 (struct buffer*) ;
 int * FUNC_1 (struct buffer*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) inline static int
FUNC_5(int VAR_4, struct buffer *VAR_5, int *VAR_6)
{
    int VAR_7 = -1;


    if (VAR_4 == VAR_1)
    {
        *VAR_6 = 0;
        if (FUNC_3(FUNC_0(VAR_5) >= (int) sizeof(struct openvpn_iphdr)))
        {
            VAR_7 = FUNC_2(*FUNC_1(VAR_5));
        }
    }
    else if (VAR_4 == VAR_0)
    {
        *VAR_6 = (int)(sizeof(struct openvpn_ethhdr));

        if (FUNC_3(FUNC_0(VAR_5) >= *VAR_6))
        {
            const struct openvpn_ethhdr *VAR_8 = (const struct openvpn_ethhdr *) FUNC_1(VAR_5);
            uint16_t VAR_9 = FUNC_4(VAR_8->proto);
            if (VAR_9 == VAR_3)
            {
                VAR_7 = 6;
            }
            else if (VAR_9 == VAR_2)
            {
                VAR_7 = 4;
            }
        }
    }

    return VAR_7;
}
