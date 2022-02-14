
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint16_t ;
typedef int coap_option_t ;
struct TYPE_5__ {int tkl; } ;
typedef TYPE_1__ coap_header_t ;
struct TYPE_6__ {size_t const* p; int len; } ;
typedef TYPE_2__ coap_buffer_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,size_t const**,int) ;

int FUNC_1(coap_option_t *VAR_1, uint8_t *VAR_2, coap_buffer_t *VAR_3, const coap_header_t *VAR_4, const uint8_t *VAR_5, size_t VAR_6)
{
    size_t VAR_7 = 0;
    uint16_t VAR_8 = 0;
    const uint8_t *VAR_9 = VAR_5 + 4 + VAR_4->tkl;
    const uint8_t *VAR_10 = VAR_5 + VAR_6;
    int VAR_11;
    if (VAR_9 > VAR_10)
        return VAR_0;




    while((VAR_7 < *VAR_2) && (VAR_9 < VAR_10) && (*VAR_9 != 0xFF))
    {
        if (0 != (VAR_11 = FUNC_0(&VAR_1[VAR_7], &VAR_8, &VAR_9, VAR_10-VAR_9)))
            return VAR_11;
        VAR_7++;
    }
    *VAR_2 = VAR_7;

    if (VAR_9+1 < VAR_10 && *VAR_9 == 0xFF)
    {
        VAR_3->p = VAR_9+1;
        VAR_3->len = VAR_10-(VAR_9+1);
    }
    else
    {
        VAR_3->p = ((void*)0);
        VAR_3->len = 0;
    }

    return 0;
}
