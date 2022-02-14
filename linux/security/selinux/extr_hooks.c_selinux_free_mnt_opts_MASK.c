
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selinux_mnt_opts {struct selinux_mnt_opts* defcontext; struct selinux_mnt_opts* rootcontext; struct selinux_mnt_opts* context; struct selinux_mnt_opts* fscontext; } ;


 int FUNC_0 (struct selinux_mnt_opts*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct selinux_mnt_opts *VAR_1 = VAR_0;
 FUNC_0(VAR_1->fscontext);
 FUNC_0(VAR_1->context);
 FUNC_0(VAR_1->rootcontext);
 FUNC_0(VAR_1->defcontext);
 FUNC_0(VAR_1);
}
