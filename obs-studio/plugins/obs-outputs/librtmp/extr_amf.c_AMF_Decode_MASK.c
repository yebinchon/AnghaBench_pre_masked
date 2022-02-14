
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * o_props; scalar_t__ o_num; } ;
typedef int AMFObjectProperty ;
typedef TYPE_1__ AMFObject ;


 int FUNC_0 (int *,char const*,int,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*) ;
 int VAR_3 ;

int
FUNC_4(AMFObject *VAR_4, const char *VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8 = VAR_6;
    int VAR_9 = VAR_1;

    VAR_4->o_num = 0;
    VAR_4->o_props = ((void*)0);
    while (VAR_6 > 0)
    {
        AMFObjectProperty VAR_10;
        int VAR_11;

        if (VAR_6 >=3 && FUNC_2(VAR_5) == VAR_0)
        {
            VAR_6 -= 3;
            VAR_9 = VAR_1;
            break;
        }

        if (VAR_9)
        {
            FUNC_3(VAR_2,
                     "DECODING ERROR, IGNORING BYTES UNTIL NEXT KNOWN PATTERN!");
            VAR_6--;
            VAR_5++;
            continue;
        }

        VAR_11 = FUNC_0(&VAR_10, VAR_5, VAR_6, VAR_7);
        if (VAR_11 == -1)
        {
            VAR_9 = VAR_3;
            break;
        }
        else
        {
            VAR_6 -= VAR_11;
            if (VAR_6 < 0)
            {
                VAR_9 = VAR_3;
                break;
            }
            VAR_5 += VAR_11;
            FUNC_1(VAR_4, &VAR_10);
        }
    }

    if (VAR_9)
        return -1;

    return VAR_8 - VAR_6;
}
