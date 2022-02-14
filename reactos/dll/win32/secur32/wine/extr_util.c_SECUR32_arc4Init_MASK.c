
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int* state; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ arc4_info ;
typedef scalar_t__ BYTE ;


 int FUNC_0 (char*,TYPE_1__*,scalar_t__ const*,unsigned int) ;

void FUNC_1(arc4_info *VAR_0, const BYTE *VAR_1, unsigned int VAR_2)
{
    unsigned int VAR_3 = 0, VAR_4 = 0;
    unsigned int VAR_5, VAR_6;

    FUNC_0("(%p, %p, %d)\n", VAR_0, VAR_1, VAR_2);

        VAR_0->x = VAR_0->y = 0;

    for (VAR_5=0; VAR_5<256; VAR_5++)
        VAR_0->state[VAR_5] = VAR_5;

    for (VAR_5=0; VAR_5<256; VAR_5++)
    {
        VAR_6 = VAR_0->state[VAR_5];
        VAR_4 += VAR_1[VAR_3] + VAR_6;
        VAR_4 &= 0xff;
        VAR_0->state[VAR_5] = VAR_0->state[VAR_4];
        VAR_0->state[VAR_4] = VAR_6;
        if (++VAR_3 >= VAR_2)
            VAR_3 = 0;
    }

}
