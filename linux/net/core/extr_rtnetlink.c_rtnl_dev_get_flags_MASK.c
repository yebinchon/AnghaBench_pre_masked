
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int flags; unsigned int gflags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(const struct net_device *VAR_2)
{
 return (VAR_2->flags & ~(VAR_1 | VAR_0)) |
        (VAR_2->gflags & (VAR_1 | VAR_0));
}
