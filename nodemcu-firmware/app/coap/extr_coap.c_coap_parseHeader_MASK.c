
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int ver; int t; int tkl; int code; int* id; } ;
typedef TYPE_1__ coap_header_t ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(coap_header_t *VAR_2, const uint8_t *VAR_3, size_t VAR_4)
{
    if (VAR_4 < 4)
        return VAR_0;
    VAR_2->ver = (VAR_3[0] & 0xC0) >> 6;
    if (VAR_2->ver != 1)
        return VAR_1;
    VAR_2->t = (VAR_3[0] & 0x30) >> 4;
    VAR_2->tkl = VAR_3[0] & 0x0F;
    VAR_2->code = VAR_3[1];
    VAR_2->id[0] = VAR_3[2];
    VAR_2->id[1] = VAR_3[3];
    return 0;
}
