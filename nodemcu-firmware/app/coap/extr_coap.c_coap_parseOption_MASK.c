
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {size_t const* p; int len; } ;
struct TYPE_5__ {int num; TYPE_1__ buf; } ;
typedef TYPE_2__ coap_option_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(coap_option_t *VAR_4, uint16_t *VAR_5, const uint8_t **VAR_6, size_t VAR_7)
{
    const uint8_t *VAR_8 = *VAR_6;
    uint8_t VAR_9 = 1;
    uint16_t VAR_10, VAR_11;

    if (VAR_7 < VAR_9)
        return VAR_3;

    VAR_11 = (VAR_8[0] & 0xF0) >> 4;
    VAR_10 = VAR_8[0] & 0x0F;


    if (VAR_11 == 13)
    {
        VAR_9++;
        if (VAR_7 < VAR_9)
            return VAR_3;
        VAR_11 = VAR_8[1] + 13;
        VAR_8++;
    }
    else
    if (VAR_11 == 14)
    {
        VAR_9 += 2;
        if (VAR_7 < VAR_9)
            return VAR_3;
        VAR_11 = ((VAR_8[1] << 8) | VAR_8[2]) + 269;
        VAR_8+=2;
    }
    else
    if (VAR_11 == 15)
        return VAR_0;

    if (VAR_10 == 13)
    {
        VAR_9++;
        if (VAR_7 < VAR_9)
            return VAR_3;
        VAR_10 = VAR_8[1] + 13;
        VAR_8++;
    }
    else
    if (VAR_10 == 14)
    {
        VAR_9 += 2;
        if (VAR_7 < VAR_9)
            return VAR_3;
        VAR_10 = ((VAR_8[1] << 8) | VAR_8[2]) + 269;
        VAR_8+=2;
    }
    else
    if (VAR_10 == 15)
        return VAR_1;

    if ((VAR_8 + 1 + VAR_10) > (*VAR_6 + VAR_7))
        return VAR_2;


    VAR_4->num = VAR_11 + *VAR_5;
    VAR_4->buf.p = VAR_8+1;
    VAR_4->buf.len = VAR_10;



    *VAR_6 = VAR_8 + 1 + VAR_10;
    *VAR_5 += VAR_11;

    return 0;
}
