
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ utf8_size_t ;
typedef int utf8_char_t ;


 scalar_t__ FUNC_0 (int const*,int ) ;
 size_t FUNC_1 (int const*) ;

size_t FUNC_2(const utf8_char_t* VAR_0, utf8_size_t VAR_1)
{
    size_t VAR_2, VAR_3 = 0;

    if (0 == VAR_1) {
        VAR_1 = FUNC_0(VAR_0, 0);
    }

    for (; 0 < VAR_1; --VAR_1) {
        if (0 == (VAR_2 = FUNC_1(VAR_0))) {
            break;
        }

        VAR_0 += VAR_2;
        VAR_3 += VAR_2;
    }

    return VAR_3;
}
