
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0)
{
    char VAR_1;
    size_t VAR_2 = FUNC_0(VAR_0);


    VAR_1 = VAR_0[VAR_2 - 1];

    if (VAR_0[0] != '%') {
        return -1;
    }







    if (FUNC_1(VAR_0 + 1, "'l%")) {
        return -1;
    }







    if (!(VAR_1 == 'e' || VAR_1 == 'E'
          || VAR_1 == 'f' || VAR_1 == 'F'
          || VAR_1 == 'g' || VAR_1 == 'G')) {
        return -1;
    }

    return 0;
}
