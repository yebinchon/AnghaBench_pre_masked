
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Val2String {char const* string; unsigned int value; } ;



__attribute__((used)) static const char *
FUNC_0(const struct Val2String *VAR_0, unsigned VAR_1)
{
    unsigned VAR_2;
    for (VAR_2=0; VAR_0[VAR_2].string; VAR_2++) {
        if (VAR_0[VAR_2].value == VAR_1)
            return VAR_0[VAR_2].string;
    }
    return 0;
}
