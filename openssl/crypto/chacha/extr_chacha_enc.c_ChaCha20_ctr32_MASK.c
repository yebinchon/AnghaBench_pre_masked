
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {unsigned char const* c; } ;
typedef TYPE_1__ chacha_buf ;
typedef int buf ;


 int FUNC_0 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_1 (char) ;

void FUNC_2(unsigned char *VAR_0, const unsigned char *VAR_1,
                    size_t VAR_2, const unsigned int VAR_3[8],
                    const unsigned int VAR_4[4])
{
    u32 VAR_5[16];
    chacha_buf VAR_6;
    size_t VAR_7, VAR_8;


    VAR_5[0] = ((u32)FUNC_1('e')) | ((u32)FUNC_1('x') << 8)
               | ((u32)FUNC_1('p') << 16)
               | ((u32)FUNC_1('a') << 24);
    VAR_5[1] = ((u32)FUNC_1('n')) | ((u32)FUNC_1('d') << 8)
               | ((u32)FUNC_1(' ') << 16)
               | ((u32)FUNC_1('3') << 24);
    VAR_5[2] = ((u32)FUNC_1('2')) | ((u32)FUNC_1('-') << 8)
               | ((u32)FUNC_1('b') << 16)
               | ((u32)FUNC_1('y') << 24);
    VAR_5[3] = ((u32)FUNC_1('t')) | ((u32)FUNC_1('e') << 8)
               | ((u32)FUNC_1(' ') << 16)
               | ((u32)FUNC_1('k') << 24);

    VAR_5[4] = VAR_3[0];
    VAR_5[5] = VAR_3[1];
    VAR_5[6] = VAR_3[2];
    VAR_5[7] = VAR_3[3];
    VAR_5[8] = VAR_3[4];
    VAR_5[9] = VAR_3[5];
    VAR_5[10] = VAR_3[6];
    VAR_5[11] = VAR_3[7];

    VAR_5[12] = VAR_4[0];
    VAR_5[13] = VAR_4[1];
    VAR_5[14] = VAR_4[2];
    VAR_5[15] = VAR_4[3];

    while (VAR_2 > 0) {
        VAR_7 = sizeof(VAR_6);
        if (VAR_2 < VAR_7)
            VAR_7 = VAR_2;

        FUNC_0(&VAR_6, VAR_5);

        for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
            VAR_0[VAR_8] = VAR_1[VAR_8] ^ VAR_6.c[VAR_8];
        VAR_0 += VAR_7;
        VAR_1 += VAR_7;
        VAR_2 -= VAR_7;







        VAR_5[12]++;
    }
}
