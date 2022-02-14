
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ptm_itf {size_t tx_desc_pos; } ;
struct TYPE_4__ {scalar_t__ own; } ;
struct TYPE_3__ {struct ptm_itf* itf; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static inline int FUNC_0(unsigned int VAR_3, unsigned int *VAR_4)
{
    int VAR_5 = -1;
    struct ptm_itf *VAR_6 = &VAR_2.itf[0];




    *VAR_4 = 1;

    if ( VAR_0[VAR_6->tx_desc_pos].own == 0 ) {
        VAR_5 = VAR_6->tx_desc_pos;
        if ( ++(VAR_6->tx_desc_pos) == VAR_1 )
            VAR_6->tx_desc_pos = 0;
        if ( VAR_0[VAR_6->tx_desc_pos].own == 0 )
            *VAR_4 = 0;
    }

    return VAR_5;
}
