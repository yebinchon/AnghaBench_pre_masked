
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static bool
FUNC_1(unsigned VAR_0)
{
    switch (VAR_0) {
        case '!': case '#': case '$': case '&': case '+': case '-': case '.':
        case '^': case '_': case '`': case '|': case '~':
            return 1;
        default:
            return FUNC_0(VAR_0) != 0;
    }
}
