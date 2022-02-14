
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char x; unsigned char y; unsigned char* buf; } ;
struct TYPE_5__ {TYPE_1__ rc4; } ;
typedef TYPE_2__ prng_state ;



unsigned long FUNC_0(unsigned char *VAR_0, unsigned long VAR_1, prng_state *VAR_2)
{
   unsigned char VAR_3, VAR_4, *VAR_5, VAR_6;
   unsigned long VAR_7;

   VAR_7 = VAR_1;
   VAR_3 = VAR_2->rc4.x;
   VAR_4 = VAR_2->rc4.y;
   VAR_5 = VAR_2->rc4.buf;
   while (VAR_1--) {
      VAR_3 = (VAR_3 + 1) & 255;
      VAR_4 = (VAR_4 + VAR_5[VAR_3]) & 255;
      VAR_6 = VAR_5[VAR_3]; VAR_5[VAR_3] = VAR_5[VAR_4]; VAR_5[VAR_4] = VAR_6;
      VAR_6 = (VAR_5[VAR_3] + VAR_5[VAR_4]) & 255;
      *VAR_0++ ^= VAR_5[VAR_6];
   }
   VAR_2->rc4.x = VAR_3;
   VAR_2->rc4.y = VAR_4;
   return VAR_7;
}
