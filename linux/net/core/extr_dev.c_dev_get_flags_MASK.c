
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int flags; unsigned int gflags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (struct net_device const*) ;
 scalar_t__ FUNC_1 (struct net_device const*) ;
 scalar_t__ FUNC_2 (struct net_device const*) ;
 scalar_t__ FUNC_3 (struct net_device const*) ;

unsigned int FUNC_4(const struct net_device *VAR_5)
{
 unsigned int VAR_6;

 VAR_6 = (VAR_5->flags & ~(VAR_3 |
    VAR_0 |
    VAR_4 |
    VAR_2 |
    VAR_1)) |
  (VAR_5->gflags & (VAR_3 |
    VAR_0));

 if (FUNC_3(VAR_5)) {
  if (FUNC_2(VAR_5))
   VAR_6 |= VAR_4;
  if (FUNC_0(VAR_5))
   VAR_6 |= VAR_2;
  if (FUNC_1(VAR_5))
   VAR_6 |= VAR_1;
 }

 return VAR_6;
}
