
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int** data; } ;
typedef TYPE_1__ IDEA_KEY_SCHEDULE ;
typedef int IDEA_INT ;


 void* FUNC_0 (int) ;

void FUNC_1(IDEA_KEY_SCHEDULE *VAR_0, IDEA_KEY_SCHEDULE *VAR_1)
{
    int VAR_2;
    register IDEA_INT *VAR_3, *VAR_4, VAR_5;

    VAR_4 = &(VAR_1->data[0][0]);
    VAR_3 = &(VAR_0->data[8][0]);
    for (VAR_2 = 0; VAR_2 < 9; VAR_2++) {
        *(VAR_4++) = FUNC_0(VAR_3[0]);
        *(VAR_4++) = ((int)(0x10000L - VAR_3[2]) & 0xffff);
        *(VAR_4++) = ((int)(0x10000L - VAR_3[1]) & 0xffff);
        *(VAR_4++) = FUNC_0(VAR_3[3]);
        if (VAR_2 == 8)
            break;
        VAR_3 -= 6;
        *(VAR_4++) = VAR_3[4];
        *(VAR_4++) = VAR_3[5];
    }

    VAR_4 = &(VAR_1->data[0][0]);
    VAR_5 = VAR_4[1];
    VAR_4[1] = VAR_4[2];
    VAR_4[2] = VAR_5;

    VAR_5 = VAR_4[49];
    VAR_4[49] = VAR_4[50];
    VAR_4[50] = VAR_5;
}
