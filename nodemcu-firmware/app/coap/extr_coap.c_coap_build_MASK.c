
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_8__ {int len; int p; } ;
struct TYPE_9__ {size_t numopts; TYPE_3__ payload; TYPE_2__* opts; int hdr; int tok; } ;
typedef TYPE_4__ coap_packet_t ;
struct TYPE_6__ {int len; int p; } ;
struct TYPE_7__ {scalar_t__ num; TYPE_1__ buf; } ;


 int VAR_0 ;
 size_t FUNC_0 (int *,int*,size_t) ;
 int FUNC_1 (scalar_t__,int,int*,size_t) ;
 size_t FUNC_2 (int *,int *,int*,size_t) ;
 int FUNC_3 (int*,int ,int) ;

int FUNC_4(uint8_t *VAR_1, size_t *VAR_2, const coap_packet_t *VAR_3)
{
    size_t VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
    size_t VAR_7;
    uint8_t *VAR_8 = VAR_1;
    size_t VAR_9 = *VAR_2;
    uint16_t VAR_10 = 0;

    VAR_5 = FUNC_0(&(VAR_3->hdr), VAR_1, *VAR_2);
    VAR_8 += VAR_5;
    VAR_9 -= VAR_5;

    VAR_6 = FUNC_2(&(VAR_3->tok), &(VAR_3->hdr), VAR_1, *VAR_2);
    VAR_8 += VAR_6;
    VAR_9 -= VAR_6;

    for (VAR_7=0;VAR_7<VAR_3->numopts;VAR_7++)
    {
        uint8_t VAR_11, VAR_12 = 0;
        uint16_t VAR_13 = 0;
        int VAR_14 = 0;

        if (((size_t)(VAR_8-VAR_1)) > *VAR_2)
             return VAR_0;
        VAR_13 = VAR_3->opts[VAR_7].num - VAR_10;

        VAR_14 = FUNC_1(VAR_13, VAR_3->opts[VAR_7].buf.len, VAR_8, VAR_9);
        VAR_8 += VAR_14;
        VAR_9 -= VAR_14;

        FUNC_3(VAR_8, VAR_3->opts[VAR_7].buf.p, VAR_3->opts[VAR_7].buf.len);
        VAR_8 += VAR_3->opts[VAR_7].buf.len;
        VAR_9 -= VAR_3->opts[VAR_7].buf.len;
        VAR_10 = VAR_3->opts[VAR_7].num;
    }

    VAR_4 = (VAR_8 - VAR_1) - 4;

    if (VAR_3->payload.len > 0)
    {
        if (*VAR_2 < 4 + 1 + VAR_3->payload.len + VAR_4)
            return VAR_0;
        VAR_1[4 + VAR_4] = 0xFF;
        FUNC_3(VAR_1+5 + VAR_4, VAR_3->payload.p, VAR_3->payload.len);
        *VAR_2 = VAR_4 + 5 + VAR_3->payload.len;
    }
    else
        *VAR_2 = VAR_4 + 4;
    return 0;
}
