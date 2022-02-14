
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iface {scalar_t__ iflink; scalar_t__ ifindex; } ;



int FUNC_0(struct iface *VAR_0) {
    if(VAR_0->iflink != VAR_0->ifindex)
        return 1;

    return 0;
}
