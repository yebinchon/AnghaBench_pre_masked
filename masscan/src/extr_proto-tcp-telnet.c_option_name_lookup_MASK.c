
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* text; unsigned int num; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *
FUNC_0(unsigned VAR_1)
{
    size_t VAR_2;
    for (VAR_2=0; VAR_0[VAR_2].text; VAR_2++) {
        if (VAR_0[VAR_2].num == VAR_1)
            return VAR_0[VAR_2].text;
    }
    return 0;
}
