
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* state; unsigned int x; unsigned int y; } ;
typedef TYPE_1__ arc4_info ;
typedef unsigned int BYTE ;



void FUNC_0(arc4_info *VAR_0, BYTE *VAR_1, unsigned int VAR_2)
{
    BYTE *const VAR_3=VAR_0->state;
    unsigned int VAR_4 = VAR_0->x;
    unsigned int VAR_5 = VAR_0->y;
    unsigned int VAR_6, VAR_7;

    while(VAR_2--)
    {
        VAR_4 = (VAR_4+1) & 0xff;
        VAR_6 = VAR_3[VAR_4];
        VAR_5 = (VAR_5+VAR_6) & 0xff;
        VAR_7 = VAR_3[VAR_5];
        VAR_3[VAR_4] = VAR_7;
        VAR_3[VAR_5] = VAR_6;
        *VAR_1++ ^= VAR_3[(VAR_6+VAR_7) & 0xff];
    }

    VAR_0->x = VAR_4;
    VAR_0->y = VAR_5;
}
