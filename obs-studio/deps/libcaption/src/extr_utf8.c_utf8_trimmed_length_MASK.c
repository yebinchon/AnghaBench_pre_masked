
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t utf8_size_t ;
typedef scalar_t__ utf8_char_t ;


 size_t FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (scalar_t__ const*) ;

size_t FUNC_2(const utf8_char_t* VAR_0, utf8_size_t VAR_1)
{
    size_t VAR_2, VAR_3 = 0, VAR_4 = 0;
    for (size_t VAR_5 = 0; (*VAR_0) && VAR_5 < VAR_1; ++VAR_5) {
        VAR_2 = FUNC_0(VAR_0);
        VAR_3 += VAR_2, VAR_0 += VAR_2;
        if (!FUNC_1(VAR_0)) {
            VAR_4 = VAR_3;
        }
    }

    return VAR_4;
}
