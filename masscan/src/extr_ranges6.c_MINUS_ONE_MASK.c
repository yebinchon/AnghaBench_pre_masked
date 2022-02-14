
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long long lo; scalar_t__ hi; } ;
typedef TYPE_1__ ipv6address ;



__attribute__((used)) static ipv6address
FUNC_0(const ipv6address VAR_0)
{
    ipv6address VAR_1;

    if (VAR_0.lo == 0) {
        VAR_1.hi = VAR_0.hi - 1;
        VAR_1.lo = ~0ULL;
    } else {
        VAR_1.hi = VAR_0.hi;
        VAR_1.lo = VAR_0.lo - 1;
    }

    return VAR_1;
}
