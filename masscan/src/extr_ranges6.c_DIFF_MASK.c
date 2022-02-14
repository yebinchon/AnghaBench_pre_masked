
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int hi; scalar_t__ lo; } ;
typedef TYPE_1__ ipv6address ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint64_t FUNC_1(const ipv6address VAR_0, const ipv6address VAR_1)
{

    FUNC_0(VAR_0.hi - VAR_1.hi < 2);

    if (VAR_0.hi > VAR_1.hi)
        return VAR_1.lo - VAR_0.lo;
    else
        return VAR_0.lo - VAR_1.lo;
}
