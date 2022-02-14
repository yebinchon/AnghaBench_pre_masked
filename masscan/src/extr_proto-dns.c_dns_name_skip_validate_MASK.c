
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned
FUNC_0(const unsigned char *VAR_0, unsigned VAR_1, unsigned VAR_2, unsigned VAR_3)
{
    unsigned VAR_4 = VAR_2 + 1;
    unsigned VAR_5 = VAR_1 + 2;
    unsigned VAR_6 = 0;


    for (;;) {
        unsigned VAR_7;


        if (VAR_3 >= 255)
            return VAR_4;


        if (VAR_1 >= VAR_2)
            return VAR_4;


        VAR_7 = VAR_0[VAR_1];




        if (VAR_7 & 0xC0) {

            if ((VAR_7 & 0xC0) != 0xC0)
                return VAR_4;


            if (VAR_1 + 1 >= VAR_2)
                return VAR_4;


            VAR_1 = (VAR_0[VAR_1]&0x3F)<<8 | VAR_0[VAR_1+1];


            if (++VAR_6 > 4)
                return VAR_4;
        } else {

            VAR_6 = 0;



            if (VAR_7 == 0) {
                return VAR_5;
            }



            VAR_3 += VAR_7 + 1;
            VAR_1 += VAR_7 + 1;
        }
    }
}
