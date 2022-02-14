
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count_lhs; scalar_t__ protid; size_t count_rhs; } ;
typedef TYPE_1__ twr_empty_floor_t ;
typedef int RPC_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,unsigned char const*,int,char**,char**) ;
 int FUNC_3 (char*,unsigned char const*,int) ;

__attribute__((used)) static RPC_STATUS FUNC_4(const unsigned char *VAR_5,
                                                     size_t VAR_6,
                                                     char **VAR_7,
                                                     char **VAR_8)
{
    const twr_empty_floor_t *VAR_9 = (const twr_empty_floor_t *)VAR_5;
    const twr_empty_floor_t *VAR_10;

    FUNC_2("(%p, %d, %p, %p)\n", VAR_5, (int)VAR_6, VAR_7, VAR_8);

    if (VAR_6 < sizeof(*VAR_9))
        return VAR_2;

    VAR_5 += sizeof(*VAR_9);
    VAR_6 -= sizeof(*VAR_9);

    if ((VAR_9->count_lhs != sizeof(VAR_9->protid)) ||
        (VAR_9->protid != VAR_1) ||
        (VAR_9->count_rhs > VAR_6) ||
        (VAR_5[VAR_9->count_rhs - 1] != '\0'))
        return VAR_2;

    if (VAR_8)
    {
        *VAR_8 = FUNC_0(VAR_9->count_rhs);
        if (!*VAR_8)
            return VAR_4;
        FUNC_3(*VAR_8, VAR_5, VAR_9->count_rhs);
    }
    VAR_5 += VAR_9->count_rhs;
    VAR_6 -= VAR_9->count_rhs;

    if (VAR_6 < sizeof(*VAR_10))
        return VAR_2;

    VAR_10 = (const twr_empty_floor_t *)VAR_5;

    VAR_5 += sizeof(*VAR_10);
    VAR_6 -= sizeof(*VAR_10);

    if ((VAR_10->count_lhs != sizeof(VAR_10->protid)) ||
        (VAR_10->protid != VAR_0) ||
        (VAR_10->count_rhs > VAR_6) ||
        (VAR_5[VAR_10->count_rhs - 1] != '\0'))
        return VAR_2;

    if (VAR_7)
    {
        *VAR_7 = FUNC_0(VAR_10->count_rhs);
        if (!*VAR_7)
        {
            if (VAR_8)
            {
                FUNC_1(*VAR_8);
                *VAR_8 = ((void*)0);
            }
            return VAR_4;
        }
        FUNC_3(*VAR_7, VAR_5, VAR_10->count_rhs);
    }

    return VAR_3;
}
