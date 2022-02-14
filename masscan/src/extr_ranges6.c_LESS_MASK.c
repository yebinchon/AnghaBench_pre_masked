
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hi; scalar_t__ lo; } ;
typedef TYPE_1__ ipv6address ;



__attribute__((used)) static int
FUNC_0(const ipv6address VAR_0, const ipv6address VAR_1)
{
    if (VAR_0.hi < VAR_1.hi)
        return 1;
    else if (VAR_0.hi == VAR_1.hi && VAR_0.lo < VAR_1.lo)
        return 1;
    else
        return 0;
}
