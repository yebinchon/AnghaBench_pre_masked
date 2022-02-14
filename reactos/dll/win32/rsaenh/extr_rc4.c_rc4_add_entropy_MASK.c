
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long x; int * buf; } ;
struct TYPE_5__ {TYPE_1__ rc4; } ;
typedef TYPE_2__ prng_state ;


 int VAR_0 ;

int FUNC_0(const unsigned char *VAR_1, unsigned long VAR_2, prng_state *VAR_3)
{

    if (VAR_3->rc4.x + VAR_2 > 256) {
       if (VAR_3->rc4.x == 256) {

          return VAR_0;
       } else {

          VAR_2 = 256 - VAR_3->rc4.x;
       }
    }

    while (VAR_2--) {
       VAR_3->rc4.buf[VAR_3->rc4.x++] = *VAR_1++;
    }

    return VAR_0;
}
