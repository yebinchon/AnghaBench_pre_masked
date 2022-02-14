
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ utf8_size_t ;


 size_t FUNC_0 (char const*) ;
 size_t FUNC_1 (char const*) ;

utf8_size_t FUNC_2(const char* VAR_0, size_t VAR_1)
{
    size_t VAR_2, VAR_3 = 0;
    utf8_size_t VAR_4 = 0;

    if (0 == VAR_1) {
        VAR_1 = FUNC_0(VAR_0);
    }

    for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_4, VAR_2 += VAR_3) {
        if (0 == (VAR_3 = FUNC_1(&VAR_0[VAR_2]))) {
            break;
        }
    }

    return VAR_4;
}
