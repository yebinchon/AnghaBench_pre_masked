
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 size_t FUNC_0 (int const*,size_t) ;
 int FUNC_1 (int *,int const*,size_t) ;

__attribute__((used)) static size_t FUNC_2(uint8_t* VAR_0, size_t VAR_1, const uint8_t* VAR_2, size_t VAR_3)
{
    size_t VAR_4, VAR_5 = 0;

    for (;;) {
        if (VAR_1 >= VAR_3) {
            return 0;
        }



        VAR_4 = FUNC_0(VAR_2, VAR_1);
        FUNC_1(VAR_0, VAR_2, VAR_4);
        VAR_5 += VAR_4;
        VAR_0 += VAR_4;
        VAR_1 -= VAR_4;

        if (0 == VAR_1) {
            return VAR_5;
        }


        VAR_5 += 1;
        VAR_2 += VAR_4 + 1;
        VAR_3 -= VAR_4 + 1;
    }

    return 0;
}
