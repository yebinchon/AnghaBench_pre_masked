
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const*,unsigned int,unsigned int,unsigned int) ;

unsigned
FUNC_1(const unsigned char VAR_0[], unsigned VAR_1, unsigned VAR_2)
{
    unsigned VAR_3 = 0;




    for (;;) {
        if (VAR_3 >= 255)
            return VAR_2 + 1;

        if (VAR_1 >= VAR_2)
            return VAR_2 + 1;

        switch (VAR_0[VAR_1]>>6) {
        case 0:

            if (VAR_0[VAR_1] == 0) {
                return VAR_1+1;
            } else {
                VAR_3 += VAR_0[VAR_1] + 1;
                VAR_1 += VAR_0[VAR_1] + 1;
                continue;
            }
            break;
        case 3:

            return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
        case 2:



            return VAR_2 + 1;
        case 1:
            return VAR_2 + 1;
        }
    }
}
