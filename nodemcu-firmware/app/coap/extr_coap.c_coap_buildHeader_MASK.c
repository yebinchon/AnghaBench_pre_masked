
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int ver; int t; int tkl; int code; int* id; } ;
typedef TYPE_1__ coap_header_t ;


 int VAR_0 ;

int FUNC_0(const coap_header_t *VAR_1, uint8_t *VAR_2, size_t VAR_3)
{

    if (VAR_3 < 4)
        return VAR_0;

    VAR_2[0] = (VAR_1->ver & 0x03) << 6;
    VAR_2[0] |= (VAR_1->t & 0x03) << 4;
    VAR_2[0] |= (VAR_1->tkl & 0x0F);
    VAR_2[1] = VAR_1->code;
    VAR_2[2] = VAR_1->id[0];
    VAR_2[3] = VAR_1->id[1];
    return 4;
}
