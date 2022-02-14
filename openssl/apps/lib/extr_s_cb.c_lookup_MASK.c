
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* name; int retval; } ;
typedef TYPE_1__ STRINT_PAIR ;



__attribute__((used)) static const char *FUNC_0(int VAR_0, const STRINT_PAIR* VAR_1, const char* VAR_2)
{
    for ( ; VAR_1->name; ++VAR_1)
        if (VAR_1->retval == VAR_0)
            return VAR_1->name;
    return VAR_2;
}
