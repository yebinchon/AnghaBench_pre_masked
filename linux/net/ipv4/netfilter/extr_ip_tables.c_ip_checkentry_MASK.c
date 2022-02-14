
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipt_ip {int flags; int invflags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_0(const struct ipt_ip *VAR_2)
{
 if (VAR_2->flags & ~VAR_0)
  return 0;
 if (VAR_2->invflags & ~VAR_1)
  return 0;
 return 1;
}
