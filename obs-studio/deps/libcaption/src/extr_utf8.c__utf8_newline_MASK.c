
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char utf8_char_t ;



size_t FUNC_0(const utf8_char_t* VAR_0)
{
    if ('\r' == VAR_0[0]) {
        return '\n' == VAR_0[1] ? 2 : 1;
    } else if ('\n' == VAR_0[0]) {
        return '\r' == VAR_0[1] ? 2 : 1;
    } else {
        return 0;
    }
}
