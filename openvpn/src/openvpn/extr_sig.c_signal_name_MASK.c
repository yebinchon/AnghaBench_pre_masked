
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const value; char const* upper; char const* lower; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

const char *
FUNC_1(const int VAR_1, const bool VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < (int)FUNC_0(VAR_0); ++VAR_3)
    {
        if (VAR_1 == VAR_0[VAR_3].value)
        {
            return VAR_2 ? VAR_0[VAR_3].upper : VAR_0[VAR_3].lower;
        }
    }
    return "UNKNOWN";
}
