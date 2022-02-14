
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rlimit {scalar_t__ rlim_max; } ;
struct TYPE_4__ {int mask; TYPE_1__* limits; } ;
struct aa_profile {TYPE_2__ rlimits; } ;
struct TYPE_3__ {scalar_t__ rlim_max; } ;


 int VAR_0 ;
 int FUNC_0 (struct aa_profile*,unsigned int,scalar_t__,int *,int *,int) ;

__attribute__((used)) static int FUNC_1(struct aa_profile *VAR_1, unsigned int VAR_2,
        struct rlimit *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_1->rlimits.mask & (1 << VAR_2) && VAR_3->rlim_max >
     VAR_1->rlimits.limits[VAR_2].rlim_max)
  VAR_4 = -VAR_0;
 return FUNC_0(VAR_1, VAR_2, VAR_3->rlim_max, ((void*)0), ((void*)0),
         VAR_4);
}
