
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct selinux_state {TYPE_1__* ss; } ;
struct policydb {int dummy; } ;
struct context {int dummy; } ;
struct TYPE_2__ {struct policydb policydb; } ;


 int VAR_0 ;
 int FUNC_0 (struct policydb*,struct context*,char**,int *) ;
 scalar_t__ FUNC_1 (struct selinux_state*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static inline int FUNC_4(
 struct selinux_state *VAR_1,
 struct context *VAR_2)
{
 struct policydb *VAR_3 = &VAR_1->ss->policydb;
 char *VAR_4;
 u32 VAR_5;

 if (FUNC_1(VAR_1))
  return -VAR_0;

 if (!FUNC_0(VAR_3, VAR_2, &VAR_4, &VAR_5)) {
  FUNC_3("SELinux:  Context %s would be invalid if enforcing\n",
   VAR_4);
  FUNC_2(VAR_4);
 }
 return 0;
}
