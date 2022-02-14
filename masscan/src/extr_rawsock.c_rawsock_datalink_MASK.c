
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Adapter {int link_type; scalar_t__ ring; } ;



int
FUNC_0(struct Adapter *VAR_0)
{
    if (VAR_0->ring)
        return 1;
    else {
        return VAR_0->link_type;
    }
}
