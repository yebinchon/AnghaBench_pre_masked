
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_5__ {size_t numopts; TYPE_2__* opts; } ;
typedef TYPE_1__ coap_packet_t ;
struct TYPE_6__ {scalar_t__ num; } ;
typedef TYPE_2__ coap_option_t ;



const coap_option_t *FUNC_0(const coap_packet_t *VAR_0, uint8_t VAR_1, uint8_t *VAR_2)
{

    size_t VAR_3;
    const coap_option_t *VAR_4 = ((void*)0);
    *VAR_2 = 0;
    for (VAR_3=0;VAR_3<VAR_0->numopts;VAR_3++)
    {
        if (VAR_0->opts[VAR_3].num == VAR_1)
        {
            if (((void*)0) == VAR_4)
                VAR_4 = &VAR_0->opts[VAR_3];
            (*VAR_2)++;
        }
        else
        {
            if (((void*)0) != VAR_4)
                break;
        }
    }
    return VAR_4;
}
