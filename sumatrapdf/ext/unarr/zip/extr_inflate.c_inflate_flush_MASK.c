
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int available; int bits; } ;
struct TYPE_5__ {TYPE_1__ in; } ;
typedef TYPE_2__ inflate_state ;



int FUNC_0(inflate_state *VAR_0, unsigned char VAR_1[8])
{
    int VAR_2 = 0;
    int VAR_3 = VAR_0->in.available & 0x7;
    while (VAR_2 < VAR_0->in.available / 8) {
        VAR_1[VAR_2] = (VAR_0->in.bits >> (VAR_2 * 8 + VAR_3)) & 0xFF;
        VAR_2++;
    }
    VAR_0->in.available = VAR_3;
    return VAR_2;
}
