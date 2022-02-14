
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int** data; } ;
typedef TYPE_1__ IDEA_KEY_SCHEDULE ;
typedef int IDEA_INT ;


 int FUNC_0 (unsigned char const*,int) ;

void FUNC_1(const unsigned char *VAR_0, IDEA_KEY_SCHEDULE *VAR_1)
{
    int VAR_2;
    register IDEA_INT *VAR_3, *VAR_4, VAR_5, VAR_6, VAR_7;

    VAR_3 = &(VAR_1->data[0][0]);
    FUNC_0(VAR_0, VAR_3[0]);
    FUNC_0(VAR_0, VAR_3[1]);
    FUNC_0(VAR_0, VAR_3[2]);
    FUNC_0(VAR_0, VAR_3[3]);
    FUNC_0(VAR_0, VAR_3[4]);
    FUNC_0(VAR_0, VAR_3[5]);
    FUNC_0(VAR_0, VAR_3[6]);
    FUNC_0(VAR_0, VAR_3[7]);

    VAR_4 = VAR_3;
    VAR_3 += 8;
    for (VAR_2 = 0; VAR_2 < 6; VAR_2++) {
        VAR_7 = VAR_4[1];
        VAR_6 = VAR_4[2];
        *(VAR_3++) = ((VAR_7 << 9) | (VAR_6 >> 7)) & 0xffff;
        VAR_5 = VAR_4[3];
        *(VAR_3++) = ((VAR_6 << 9) | (VAR_5 >> 7)) & 0xffff;
        VAR_6 = VAR_4[4];
        *(VAR_3++) = ((VAR_5 << 9) | (VAR_6 >> 7)) & 0xffff;
        VAR_5 = VAR_4[5];
        *(VAR_3++) = ((VAR_6 << 9) | (VAR_5 >> 7)) & 0xffff;
        VAR_6 = VAR_4[6];
        *(VAR_3++) = ((VAR_5 << 9) | (VAR_6 >> 7)) & 0xffff;
        VAR_5 = VAR_4[7];
        *(VAR_3++) = ((VAR_6 << 9) | (VAR_5 >> 7)) & 0xffff;
        VAR_6 = VAR_4[0];
        if (VAR_2 >= 5)
            break;
        *(VAR_3++) = ((VAR_5 << 9) | (VAR_6 >> 7)) & 0xffff;
        *(VAR_3++) = ((VAR_6 << 9) | (VAR_7 >> 7)) & 0xffff;
        VAR_4 += 8;
    }
}
