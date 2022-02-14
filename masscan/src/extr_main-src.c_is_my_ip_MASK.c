
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int first; unsigned int last; } ;
struct Source {TYPE_1__ ip; } ;



int FUNC_0(const struct Source *VAR_0, unsigned VAR_1)
{
    return VAR_0->ip.first <= VAR_1 && VAR_1 <= VAR_0->ip.last;
}
