
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct openvpn_tcphdr {int check; int doff_res; } ;
struct buffer {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct buffer*) ;
 scalar_t__ FUNC_2 (struct buffer*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,char*,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct buffer*) ;

void
FUNC_7(struct buffer *VAR_5, uint16_t VAR_6)
{
    int VAR_7, VAR_8, VAR_9;
    uint8_t *VAR_10;
    uint16_t VAR_11;
    int VAR_12;
    struct openvpn_tcphdr *VAR_13;

    if (FUNC_1(VAR_5) < (int) sizeof(struct openvpn_tcphdr))
    {
        return;
    }

    FUNC_6(VAR_5);
    VAR_13 = (struct openvpn_tcphdr *) FUNC_2(VAR_5);
    VAR_7 = FUNC_3(VAR_13->doff_res);


    if (VAR_7 <= (int) sizeof(struct openvpn_tcphdr)
        || VAR_7 > FUNC_1(VAR_5))
    {
        return;
    }

    for (VAR_8 = VAR_7 - sizeof(struct openvpn_tcphdr),
         VAR_10 = (uint8_t *)(VAR_13 + 1);
         VAR_8 > 1;
         VAR_8 -= VAR_9, VAR_10 += VAR_9)
    {
        if (*VAR_10 == VAR_2)
        {
            break;
        }
        else if (*VAR_10 == VAR_4)
        {
            VAR_9 = 1;
        }
        else
        {
            VAR_9 = *(VAR_10 + 1);
            if (VAR_9 <= 0 || VAR_9 > VAR_8)
            {
                break;
            }
            if (*VAR_10 == VAR_3)
            {
                if (VAR_9 != VAR_1)
                {
                    continue;
                }
                VAR_11 = (VAR_10[2]<<8)+VAR_10[3];
                if (VAR_11 > VAR_6)
                {
                    FUNC_4(VAR_0, "MSS: %d -> %d", (int) VAR_11, (int) VAR_6);
                    VAR_12 = FUNC_5(VAR_11);
                    VAR_10[2] = (VAR_6>>8)&0xff;
                    VAR_10[3] = VAR_6&0xff;
                    VAR_12 -= FUNC_5(VAR_6);
                    FUNC_0(VAR_12, VAR_13->check);
                }
            }
        }
    }
}
