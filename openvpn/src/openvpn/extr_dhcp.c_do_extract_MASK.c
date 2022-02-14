
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct dhcp {int dummy; } ;
typedef scalar_t__ in_addr_t ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int const) ;
 int FUNC_2 (scalar_t__*,scalar_t__ const,int const) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static in_addr_t
FUNC_4(struct dhcp *VAR_3, int VAR_4)
{
    uint8_t *VAR_5 = (uint8_t *) (VAR_3 + 1);
    int VAR_6;
    in_addr_t VAR_7 = 0;

    for (VAR_6 = 0; VAR_6 < VAR_4; )
    {
        const uint8_t VAR_8 = VAR_5[VAR_6];
        const int VAR_9 = VAR_4 - VAR_6;
        if (VAR_8 == VAR_0)
        {
            break;
        }
        else if (VAR_8 == VAR_1)
        {
            ++VAR_6;
        }
        else if (VAR_8 == VAR_2)
        {
            if (VAR_9 >= 2)
            {
                const int VAR_10 = VAR_5[VAR_6+1];
                if (VAR_10 <= (VAR_9-2))
                {

                    if (!VAR_7 && VAR_10 >= 4 && (VAR_10 & 3) == 0)
                    {
                        FUNC_0(&VAR_7, VAR_5+VAR_6+2, 4);
                        VAR_7 = FUNC_3(VAR_7);
                    }
                    {

                        uint8_t *VAR_11 = VAR_5 + VAR_6;
                        const int VAR_12 = VAR_10 + 2;
                        uint8_t *VAR_13 = VAR_11 + VAR_12;
                        uint8_t *VAR_14 = VAR_5 + VAR_4;
                        const int VAR_15 = VAR_14 - VAR_13;
                        if (VAR_15 > 0)
                        {
                            FUNC_1(VAR_11, VAR_13, VAR_15);
                        }
                        FUNC_2(VAR_14 - VAR_12, VAR_1, VAR_12);
                    }
                }
                else
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
        else
        {
            if (VAR_9 >= 2)
            {
                const int VAR_16 = VAR_5[VAR_6+1];
                VAR_6 += (VAR_16 + 2);
            }
            else
            {
                break;
            }
        }
    }
    return VAR_7;
}
