
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct dhcp {int dummy; } ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;

__attribute__((used)) static int
FUNC_0(const struct dhcp *VAR_3, const int VAR_4)
{
    const uint8_t *VAR_5 = (uint8_t *) (VAR_3 + 1);
    int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6)
    {
        const uint8_t VAR_7 = VAR_5[VAR_6];
        const int VAR_8 = VAR_4 - VAR_6;
        if (VAR_7 == VAR_0)
        {
            return -1;
        }
        else if (VAR_7 == VAR_2)
        {
        }
        else if (VAR_7 == VAR_1)
        {
            if (VAR_8 >= 3)
            {
                if (VAR_5[VAR_6+1] == 1)
                {
                    return VAR_5[VAR_6+2];
                }
            }
            return -1;
        }
        else
        {
            if (VAR_8 >= 2)
            {
                const int VAR_9 = VAR_5[VAR_6+1];
                VAR_6 += (VAR_9 + 1);
            }
        }
    }
    return -1;
}
