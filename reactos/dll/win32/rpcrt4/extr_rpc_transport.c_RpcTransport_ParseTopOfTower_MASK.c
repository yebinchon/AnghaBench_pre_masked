
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count_lhs; size_t count_rhs; scalar_t__ protid; } ;
typedef TYPE_1__ twr_empty_floor_t ;
struct connection_ops {scalar_t__* epm_protocols; scalar_t__ (* parse_top_of_tower ) (unsigned char const*,size_t,char**,char**) ;int name; } ;
typedef scalar_t__ RPC_STATUS ;


 unsigned int FUNC_0 (struct connection_ops*) ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 struct connection_ops* VAR_2 ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (unsigned char const*,size_t,char**,char**) ;

RPC_STATUS FUNC_5(const unsigned char *VAR_3,
                                        size_t VAR_4,
                                        char **VAR_5,
                                        char **VAR_6,
                                        char **VAR_7)
{
    const twr_empty_floor_t *VAR_8;
    const twr_empty_floor_t *VAR_9;
    const struct connection_ops *VAR_10 = ((void*)0);
    RPC_STATUS VAR_11;
    unsigned int VAR_12;

    if (VAR_4 < sizeof(*VAR_8))
        return VAR_0;

    VAR_8 = (const twr_empty_floor_t *)VAR_3;
    VAR_3 += sizeof(*VAR_8);
    VAR_4 -= sizeof(*VAR_8);
    if ((VAR_8->count_lhs != sizeof(VAR_8->protid)) ||
        (VAR_8->count_rhs > VAR_4))
        return VAR_0;
    VAR_3 += VAR_8->count_rhs;
    VAR_4 -= VAR_8->count_rhs;

    VAR_9 = (const twr_empty_floor_t *)VAR_3;
    if ((VAR_4 < sizeof(*VAR_9)) ||
        (VAR_9->count_lhs != sizeof(VAR_9->protid)))
        return VAR_0;

    for(VAR_12 = 0; VAR_12 < FUNC_0(VAR_2); VAR_12++)
        if ((VAR_8->protid == VAR_2[VAR_12].epm_protocols[0]) &&
            (VAR_9->protid == VAR_2[VAR_12].epm_protocols[1]))
        {
            VAR_10 = &VAR_2[VAR_12];
            break;
        }

    if (!VAR_10)
        return VAR_0;

    VAR_11 = VAR_10->parse_top_of_tower(VAR_3, VAR_4, VAR_6, VAR_7);

    if ((VAR_11 == VAR_1) && VAR_5)
    {
        *VAR_5 = FUNC_1(FUNC_3(VAR_10->name) + 1);
        FUNC_2(*VAR_5, VAR_10->name);
    }

    return VAR_11;
}
