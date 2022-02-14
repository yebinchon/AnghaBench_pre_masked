
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count_lhs; scalar_t__ protid; size_t count_rhs; } ;
typedef TYPE_1__ twr_empty_floor_t ;
typedef int RPC_STATUS ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,unsigned char const*,int,char**,char**) ;
 int FUNC_2 (char*,unsigned char const*,int) ;

__attribute__((used)) static RPC_STATUS FUNC_3(const unsigned char *VAR_4,
                                                    size_t VAR_5,
                                                    char **VAR_6,
                                                    char **VAR_7)
{
    const twr_empty_floor_t *VAR_8 = (const twr_empty_floor_t *)VAR_4;

    FUNC_1("(%p, %d, %p, %p)\n", VAR_4, (int)VAR_5, VAR_6, VAR_7);

    if (VAR_5 < sizeof(*VAR_8))
        return VAR_1;

    VAR_4 += sizeof(*VAR_8);
    VAR_5 -= sizeof(*VAR_8);

    if ((VAR_8->count_lhs != sizeof(VAR_8->protid)) ||
        (VAR_8->protid != VAR_0) ||
        (VAR_8->count_rhs > VAR_5) ||
        (VAR_4[VAR_8->count_rhs - 1] != '\0'))
        return VAR_1;

    if (VAR_6)
        *VAR_6 = ((void*)0);

    if (VAR_7)
    {
        *VAR_7 = FUNC_0(VAR_8->count_rhs);
        if (!*VAR_7)
            return VAR_3;
        FUNC_2(*VAR_7, VAR_4, VAR_8->count_rhs);
    }

    return VAR_2;
}
