
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count_lhs; scalar_t__ count_rhs; int protid; } ;
typedef TYPE_1__ twr_empty_floor_t ;
struct connection_ops {size_t (* get_top_of_tower ) (unsigned char*,char const*,char const*) ;int * epm_protocols; } ;
typedef int RPC_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct connection_ops* FUNC_0 (char const*) ;
 size_t FUNC_1 (unsigned char*,char const*,char const*) ;
 size_t FUNC_2 (unsigned char*,char const*,char const*) ;

RPC_STATUS FUNC_3(unsigned char *VAR_3,
                                      size_t *VAR_4,
                                      const char *VAR_5,
                                      const char *VAR_6,
                                      const char *VAR_7)
{
    twr_empty_floor_t *VAR_8;
    const struct connection_ops *VAR_9 = FUNC_0(VAR_5);

    *VAR_4 = 0;

    if (!VAR_9)
        return VAR_1;

    if (!VAR_3)
    {
        *VAR_4 = sizeof(*VAR_8);
        *VAR_4 += VAR_9->get_top_of_tower(((void*)0), VAR_6, VAR_7);
        return VAR_2;
    }

    VAR_8 = (twr_empty_floor_t *)VAR_3;
    VAR_8->count_lhs = sizeof(VAR_8->protid);
    VAR_8->protid = VAR_9->epm_protocols[0];
    VAR_8->count_rhs = 0;

    VAR_3 += sizeof(*VAR_8);

    *VAR_4 = VAR_9->get_top_of_tower(VAR_3, VAR_6, VAR_7);
    if (!*VAR_4)
        return VAR_0;

    *VAR_4 += sizeof(*VAR_8);

    return VAR_2;
}
