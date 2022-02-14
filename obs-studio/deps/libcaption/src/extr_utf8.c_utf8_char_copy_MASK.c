
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char utf8_char_t ;


 int FUNC_0 (char*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

size_t FUNC_2(utf8_char_t* VAR_0, const utf8_char_t* VAR_1)
{
    size_t VAR_2 = FUNC_1(VAR_1);

    if (VAR_2 && VAR_0) {
        FUNC_0(VAR_0, VAR_1, VAR_2);
        VAR_0[VAR_2] = '\0';
    }

    return VAR_2;
}
