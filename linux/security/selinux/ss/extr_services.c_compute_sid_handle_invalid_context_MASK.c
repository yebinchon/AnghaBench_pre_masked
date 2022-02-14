
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct selinux_state {TYPE_1__* ss; } ;
struct policydb {int dummy; } ;
struct context {int dummy; } ;
struct audit_buffer {int dummy; } ;
struct TYPE_2__ {struct policydb policydb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct audit_buffer*) ;
 int FUNC_2 (struct audit_buffer*,char*,...) ;
 int FUNC_3 (struct audit_buffer*,char*,scalar_t__) ;
 struct audit_buffer* FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct policydb*,struct context*,char**,scalar_t__*) ;
 int FUNC_6 (struct selinux_state*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct policydb*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9(
 struct selinux_state *VAR_4,
 struct context *VAR_5,
 struct context *VAR_6,
 u16 VAR_7,
 struct context *VAR_8)
{
 struct policydb *VAR_9 = &VAR_4->ss->policydb;
 char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 u32 VAR_13, VAR_14, VAR_15;
 struct audit_buffer *VAR_16;

 if (FUNC_5(VAR_9, VAR_5, &VAR_10, &VAR_13))
  goto out;
 if (FUNC_5(VAR_9, VAR_6, &VAR_11, &VAR_14))
  goto out;
 if (FUNC_5(VAR_9, VAR_8, &VAR_12, &VAR_15))
  goto out;
 VAR_16 = FUNC_4(FUNC_0(), VAR_2, VAR_0);
 FUNC_2(VAR_16,
    "op=security_compute_sid invalid_context=");

 FUNC_3(VAR_16, VAR_12, VAR_15 - 1);
 FUNC_2(VAR_16, " scontext=%s tcontext=%s tclass=%s",
    VAR_10, VAR_11, FUNC_8(VAR_9, VAR_3, VAR_7-1));
 FUNC_1(VAR_16);
out:
 FUNC_7(VAR_10);
 FUNC_7(VAR_11);
 FUNC_7(VAR_12);
 if (!FUNC_6(VAR_4))
  return 0;
 return -VAR_1;
}
