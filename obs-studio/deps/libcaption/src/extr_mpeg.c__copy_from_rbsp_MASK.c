
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 size_t FUNC_0 (int*,size_t) ;
 int FUNC_1 (int*,int*,size_t) ;

size_t FUNC_2(uint8_t* VAR_0, uint8_t* VAR_1, size_t VAR_2)
{
    size_t VAR_3 = 0;

    while (VAR_2) {
        size_t VAR_4 = FUNC_0(VAR_1, VAR_2);

        if (VAR_4 > VAR_2) {
            return 0;
        }

        FUNC_1(VAR_0, VAR_1, VAR_4);

        if (VAR_4 == VAR_2) {
            return VAR_3 + VAR_4;
        }

        VAR_0[VAR_4] = 3;
        VAR_0 += VAR_4 + 1;
        VAR_3 += VAR_4 + 1;
        VAR_1 += VAR_4;
        VAR_2 -= VAR_4;
    }

    return VAR_3;
}
