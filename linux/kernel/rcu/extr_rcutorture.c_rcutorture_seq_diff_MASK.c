
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long (* gp_diff ) (unsigned long,unsigned long) ;} ;


 TYPE_1__* VAR_0 ;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(unsigned long VAR_1, unsigned long VAR_2)
{
 if (!VAR_0->gp_diff)
  return VAR_1 - VAR_2;
 return VAR_0->gp_diff(VAR_1, VAR_2);
}
