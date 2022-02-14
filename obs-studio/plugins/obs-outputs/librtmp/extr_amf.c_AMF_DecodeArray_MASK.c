
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
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_2(AMFObject *VAR_2, const char *VAR_3, int VAR_4,
                int VAR_5, int VAR_6)
{
    int VAR_7 = VAR_4;
    int VAR_8 = VAR_0;

    VAR_2->o_num = 0;
    VAR_2->o_props = ((void*)0);
    while (VAR_5 > 0)
    {
        AMFObjectProperty VAR_9;
        int VAR_10;
        VAR_5--;

        if (VAR_4 <= 0)
        {
            VAR_8 = VAR_1;
            break;
        }

        VAR_10 = FUNC_0(&VAR_9, VAR_3, VAR_4, VAR_6);
        if (VAR_10 == -1)
        {
            VAR_8 = VAR_1;
            break;
        }
        else
        {
            VAR_4 -= VAR_10;
            VAR_3 += VAR_10;
            FUNC_1(VAR_2, &VAR_9);
        }
    }
    if (VAR_8)
        return -1;

    return VAR_7 - VAR_4;
}
