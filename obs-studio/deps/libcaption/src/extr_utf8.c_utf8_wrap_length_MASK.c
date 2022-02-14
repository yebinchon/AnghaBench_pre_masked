
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t utf8_size_t ;
typedef int utf8_char_t ;


 scalar_t__ FUNC_0 (int const*) ;
 size_t FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;

utf8_size_t FUNC_3(const utf8_char_t* VAR_0, utf8_size_t VAR_1)
{

    size_t VAR_2, VAR_3, VAR_4 = VAR_1;

    for (VAR_3 = 0; VAR_3 <= VAR_1; ++VAR_3) {
        if (FUNC_0(VAR_0)) {
            return VAR_3;
        } else if (FUNC_2(VAR_0)) {
            VAR_4 = VAR_3;
        }

        VAR_2 = FUNC_1(VAR_0);
        VAR_0 += VAR_2;
    }

    return VAR_4;
}
