
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int first; unsigned int last; } ;
struct TYPE_4__ {unsigned int first; unsigned int last; } ;
struct Source {TYPE_2__ port; TYPE_1__ ip; } ;
struct Masscan {TYPE_3__* nic; } ;
struct TYPE_6__ {struct Source src; } ;



__attribute__((used)) static void
FUNC_0(const struct Masscan *VAR_0,
            unsigned VAR_1,
            unsigned *VAR_2,
            unsigned *VAR_3,
            unsigned *VAR_4,
            unsigned *VAR_5)
{
    const struct Source *VAR_6 = &VAR_0->nic[VAR_1].src;

    *VAR_2 = VAR_6->ip.first;
    *VAR_3 = VAR_6->ip.last - VAR_6->ip.first;

    *VAR_4 = VAR_6->port.first;
    *VAR_5 = VAR_6->port.last - VAR_6->port.first;
}
