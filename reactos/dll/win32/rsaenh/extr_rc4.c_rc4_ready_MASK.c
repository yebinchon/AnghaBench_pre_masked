
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* buf; int x; int y; } ;
struct TYPE_5__ {TYPE_1__ rc4; } ;
typedef TYPE_2__ prng_state ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;

int FUNC_1(prng_state *VAR_1)
{
    unsigned char VAR_2[256], VAR_3, *VAR_4;
    int VAR_5, VAR_6, VAR_7, VAR_8;


    VAR_4 = VAR_1->rc4.buf;
    FUNC_0(VAR_2, VAR_4, 256);
    VAR_5 = VAR_1->rc4.x;


    for (VAR_6 = 0; VAR_6 < 256; VAR_6++) {
        VAR_4[VAR_6] = VAR_6;
    }

    for (VAR_8 = VAR_6 = VAR_7 = 0; VAR_6 < 256; VAR_6++) {
        VAR_7 = (VAR_7 + VAR_1->rc4.buf[VAR_6] + VAR_2[VAR_8++]) & 255;
        if (VAR_8 == VAR_5) {
           VAR_8 = 0;
        }
        VAR_3 = VAR_4[VAR_6]; VAR_4[VAR_6] = VAR_4[VAR_7]; VAR_4[VAR_7] = VAR_3;
    }
    VAR_1->rc4.x = 0;
    VAR_1->rc4.y = 0;

    return VAR_0;
}
