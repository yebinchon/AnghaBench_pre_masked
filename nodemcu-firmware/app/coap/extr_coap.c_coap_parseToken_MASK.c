
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int tkl; } ;
typedef TYPE_1__ coap_header_t ;
struct TYPE_6__ {unsigned int len; int const* p; } ;
typedef TYPE_2__ coap_buffer_t ;


 int VAR_0 ;

int FUNC_0(coap_buffer_t *VAR_1, const coap_header_t *VAR_2, const uint8_t *VAR_3, size_t VAR_4)
{
    if (VAR_2->tkl == 0)
    {
        VAR_1->p = ((void*)0);
        VAR_1->len = 0;
        return 0;
    }
    else
    if (VAR_2->tkl <= 8)
    {
        if (4U + VAR_2->tkl > VAR_4)
            return VAR_0;
        VAR_1->p = VAR_3+4;
        VAR_1->len = VAR_2->tkl;
        return 0;
    }
    else
    {

        return VAR_0;
    }
}
