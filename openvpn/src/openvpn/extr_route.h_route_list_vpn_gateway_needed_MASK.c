
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct route_list {TYPE_1__ spec; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool
FUNC_0(const struct route_list *VAR_1)
{
    if (!VAR_1)
    {
        return 0;
    }
    else
    {
        return !(VAR_1->spec.flags & VAR_0);
    }
}
