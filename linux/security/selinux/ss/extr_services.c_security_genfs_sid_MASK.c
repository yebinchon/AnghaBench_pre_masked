
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct selinux_state {TYPE_1__* ss; } ;
struct TYPE_2__ {int policy_rwlock; } ;


 int FUNC_0 (struct selinux_state*,char const*,char*,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct selinux_state *VAR_0,
         const char *VAR_1,
         char *VAR_2,
         u16 VAR_3,
         u32 *VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_0->ss->policy_rwlock);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_2(&VAR_0->ss->policy_rwlock);
 return VAR_5;
}
