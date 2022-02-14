
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smack_mnt_opts {struct smack_mnt_opts* fstransmute; struct smack_mnt_opts* fsroot; struct smack_mnt_opts* fshat; struct smack_mnt_opts* fsfloor; struct smack_mnt_opts* fsdefault; } ;


 int FUNC_0 (struct smack_mnt_opts*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct smack_mnt_opts *VAR_1 = VAR_0;
 FUNC_0(VAR_1->fsdefault);
 FUNC_0(VAR_1->fsfloor);
 FUNC_0(VAR_1->fshat);
 FUNC_0(VAR_1->fsroot);
 FUNC_0(VAR_1->fstransmute);
 FUNC_0(VAR_1);
}
