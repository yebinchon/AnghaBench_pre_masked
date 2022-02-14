
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct selinux_state {TYPE_1__* ss; } ;
struct policydb {int dummy; } ;
struct context {int dummy; } ;
struct TYPE_2__ {struct policydb policydb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,char*,char*,char*,char*,int ) ;
 scalar_t__ FUNC_2 (struct policydb*,struct context*,char**,int *) ;
 int FUNC_3 (struct selinux_state*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct policydb*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct selinux_state *VAR_4,
        struct context *VAR_5,
        struct context *VAR_6,
        struct context *VAR_7,
        u16 VAR_8)
{
 struct policydb *VAR_9 = &VAR_4->ss->policydb;
 char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 u32 VAR_13, VAR_14, VAR_15;

 if (FUNC_2(VAR_9, VAR_5, &VAR_10, &VAR_13))
  goto out;
 if (FUNC_2(VAR_9, VAR_6, &VAR_11, &VAR_14))
  goto out;
 if (FUNC_2(VAR_9, VAR_7, &VAR_12, &VAR_15))
  goto out;
 FUNC_1(FUNC_0(), VAR_2, VAR_0,
    "op=security_validate_transition seresult=denied"
    " oldcontext=%s newcontext=%s taskcontext=%s tclass=%s",
    VAR_10, VAR_11, VAR_12, FUNC_5(VAR_9, VAR_3, VAR_8-1));
out:
 FUNC_4(VAR_10);
 FUNC_4(VAR_11);
 FUNC_4(VAR_12);

 if (!FUNC_3(VAR_4))
  return 0;
 return -VAR_1;
}
