
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct PayloadsUDP {unsigned int count; TYPE_1__** list; } ;
struct TYPE_2__ {unsigned int port; unsigned char* buf; unsigned int length; unsigned int source_port; int set_cookie; int xsum; } ;
typedef int SET_COOKIE ;



int
FUNC_0(
        const struct PayloadsUDP *VAR_0,
        unsigned VAR_1,
        const unsigned char **VAR_2,
        unsigned *VAR_3,
        unsigned *VAR_4,
        uint64_t *VAR_5,
        SET_COOKIE *VAR_6)
{
    unsigned VAR_7;
    if (VAR_0 == 0)
        return 0;

    VAR_1 &= 0xFFFF;

    for (VAR_7=0; VAR_7<VAR_0->count; VAR_7++) {
        if (VAR_0->list[VAR_7]->port == VAR_1) {
            *VAR_2 = VAR_0->list[VAR_7]->buf;
            *VAR_3 = VAR_0->list[VAR_7]->length;
            *VAR_4 = VAR_0->list[VAR_7]->source_port;
            *VAR_5 = VAR_0->list[VAR_7]->xsum;
            *VAR_6 = VAR_0->list[VAR_7]->set_cookie;
            return 1;
        }
    }
    return 0;
}
