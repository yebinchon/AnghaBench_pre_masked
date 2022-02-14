
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* start; int dfa; } ;
struct aa_profile {TYPE_1__ policy; } ;


 unsigned char VAR_0 ;
 unsigned int FUNC_0 (int ,unsigned int,unsigned char*,int) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct aa_profile *VAR_1,
         unsigned char VAR_2)
{
 if (VAR_2 <= VAR_0)
  return VAR_1->policy.start[VAR_2];
 else
  return FUNC_0(VAR_1->policy.dfa,
     VAR_1->policy.start[0], &VAR_2, 1);
}
