
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf8_char_t ;


 size_t FUNC_0 (int const*) ;

int FUNC_1(const utf8_char_t* VAR_0)
{
    size_t VAR_1 = 0;
    int VAR_2 = 0;

    do {
        VAR_1 = FUNC_0(VAR_0);
        VAR_0 += VAR_1;
        ++VAR_2;
    } while (0 < VAR_1);

    return VAR_2 - 1;
}
