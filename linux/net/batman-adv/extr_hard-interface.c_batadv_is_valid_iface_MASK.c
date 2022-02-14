
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; scalar_t__ type; scalar_t__ addr_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net_device const*) ;

__attribute__((used)) static bool FUNC_1(const struct net_device *VAR_3)
{
 if (VAR_3->flags & VAR_2)
  return 0;

 if (VAR_3->type != VAR_0)
  return 0;

 if (VAR_3->addr_len != VAR_1)
  return 0;


 if (FUNC_0(VAR_3))
  return 0;

 return 1;
}
