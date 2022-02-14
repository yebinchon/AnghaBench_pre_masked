
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ lo; int hi; } ;
typedef TYPE_1__ ipv6address ;



__attribute__((used)) static ipv6address FUNC_0(const ipv6address VAR_0, uint64_t VAR_1)
{
    ipv6address VAR_2 = VAR_0;
    VAR_2.lo += VAR_1;
    if (VAR_2.lo < VAR_0.lo)
        VAR_2.hi++;
    return VAR_2;
}
