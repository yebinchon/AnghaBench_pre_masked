
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chmap {int dummy; } ;


 unsigned int FUNC_0 (unsigned char*) ;
 int FUNC_1 (struct mp_chmap*,unsigned char*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct mp_chmap *VAR_0, unsigned char *VAR_1,
                             int VAR_2)
{

    if (VAR_2 < 4)
        return;
    VAR_1 += 4;
    VAR_2 -= 4;

    while (VAR_2 >= 4) {
        unsigned VAR_3 = VAR_1[0] & 0x7F;
        unsigned VAR_4 = FUNC_0(VAR_1 + 1);
        VAR_1 += 4;
        VAR_2 -= 4;
        if (VAR_4 > VAR_2)
            return;
        if (VAR_3 == 4)
            FUNC_1(VAR_0, VAR_1, VAR_4);
        VAR_1 += VAR_4;
        VAR_2 -= VAR_4;
    }
}
