
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * start; int dfa; } ;
struct aa_profile {TYPE_1__ policy; } ;
struct aa_perms {int dummy; } ;
struct aa_label {int dummy; } ;


 size_t VAR_0 ;
 unsigned int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct aa_profile*,struct aa_label*,unsigned int,int,int ,struct aa_perms*) ;

void FUNC_2(struct aa_profile *VAR_1, struct aa_label *VAR_2,
       int VAR_3, u32 VAR_4, struct aa_perms *VAR_5)
{

 unsigned int VAR_6;

 VAR_6 = FUNC_0(VAR_1->policy.dfa,
       VAR_1->policy.start[VAR_0],
       VAR_3);
 FUNC_1(VAR_1, VAR_2, VAR_6, 0, VAR_4, VAR_5);
}
